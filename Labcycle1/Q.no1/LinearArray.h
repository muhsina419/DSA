#include<iostream>
#include<ostream>
using namespace std;
template<class T>
class Array{
	int LB,UB;
	T A[100];
	public:
		Array();
		Array(int,int,T[]);
		void insert_at_end(T);
		void insert_at_beginning(T);
		void insert_at_index(T,int);
		void delete_at_end();
		void delete_at_beginning();
		void delete_at_index(int);
		int find_index(T);
		void display();
	};
