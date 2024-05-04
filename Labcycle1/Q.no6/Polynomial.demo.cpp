#include"Polynomial.cpp"
int main() {
    Polynomial poly1;
	Polynomial poly2;
	Polynomial result;

    int coeff, exp;
    int numTerms;

    cout << "Enter the number of terms for Polynomial 1: ";
    cin >> numTerms;
    cout << "Enter the coefficient and exponent for each term of Polynomial 1:" << endl;
    for (int i = 0; i < numTerms; ++i) {
        cin >> coeff >> exp;
        poly1.insert_term(coeff, exp);
    }

    cout << "Enter the number of terms for Polynomial 2: ";
    cin >> numTerms;
    cout << "Enter the coefficient and exponent for each term of Polynomial 2:" << endl;
    for (int i = 0; i < numTerms; ++i) {
        cin >> coeff >> exp;
        poly2.insert_term(coeff, exp);
    }

    cout << "Polynomial 1: ";
    poly1.display();
    cout << "Polynomial 2: ";
    poly2.display();

    Polynomial* sum = poly1.add_polynomials(poly2);
    cout << "Sum: ";
    sum->display();

    Polynomial* product = poly1.multiply_polynomials(poly2);
    cout << "Product: ";
    product->display();

    delete sum;
    delete product;

    return 0;
}
   
