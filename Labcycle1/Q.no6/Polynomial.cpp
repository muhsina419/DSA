#include"Polynomial.h"
#include <iostream>
using namespace std;

Node::Node(int coef, int exp) {
        coefficient = coef;
        exponent = exp;
        next = NULL;
    }

Polynomial::Polynomial() {
    head = NULL;
}

void Polynomial::insert_term(int coeff, int exp) {
    if (coeff == 0)  
        return;
    Node* newNode = new Node(coeff, exp);
    if (!head || exp > head->exponent) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* current = head;
        Node* prev = NULL;
        while (current && exp < current->exponent) {
            prev = current;
            current = current->next;
        }
        if (current && exp == current->exponent) {
            current->coefficient += coeff;
            if (current->coefficient == 0) {
                if (prev)
                    prev->next = current->next;
                else
                    head = current->next;
                delete current;
            }
        }
        else {
            newNode->next = current;
            if (prev)
                prev->next = newNode;
            else
                head = newNode;
        }
    }
}

void Polynomial::display() {
    Node* current = head;
    while (current) {
        cout << current->coefficient << "x^" << current->exponent;
        if (current->next)
            cout << " + ";
        current = current->next;
    }
    cout << endl;
}

Polynomial* Polynomial::add_polynomials(Polynomial poly) {
    Polynomial* result = new Polynomial();
    Node* current1 = head;
    Node* current2 = poly.head;
    while (current1 && current2) {
        if (current1->exponent > current2->exponent) {
            result->insert_term(current1->coefficient, current1->exponent);
            current1 = current1->next;
        }
        else if (current1->exponent < current2->exponent) {
            result->insert_term(current2->coefficient, current2->exponent);
            current2 = current2->next;
        }
        else {
            result->insert_term(current1->coefficient + current2->coefficient, current1->exponent);
            current1 = current1->next;
            current2 = current2->next;
        }
    }
    while (current1) {
        result->insert_term(current1->coefficient, current1->exponent);
        current1 = current1->next;
    }
    while (current2) {
        result->insert_term(current2->coefficient, current2->exponent);
        current2 = current2->next;
    }
    return result;
}

Polynomial* Polynomial::multiply_polynomials(Polynomial poly) {
    Polynomial* result = new Polynomial();
    Node* current1 = head;
    while (current1) {
        Node* current2 = poly.head;
        while (current2) {
            result->insert_term(current1->coefficient * current2->coefficient, current1->exponent + current2->exponent);
            current2 = current2->next;
        }
        current1 = current1->next;
    }
    return result;
}

