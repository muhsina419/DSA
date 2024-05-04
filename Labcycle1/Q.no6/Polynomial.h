#include<iostream>
using namespace std;

class Node{
	public:
	int coefficient;
	int exponent;
	Node* next;
	
	Node(int coeff, int exp) ;

};

class Polynomial{
	private:
		Node* head;
		public:
		Polynomial();
		void insert_term(int coeff ,int exp);
		void display();
		Polynomial& Display();
		Polynomial* add_polynomials(Polynomial poly);
		Polynomial* multiply_polynomials(Polynomial poly);
};
