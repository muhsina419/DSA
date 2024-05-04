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
		void rotate_right(int);
		void rotate_left(int);
		void list_distinct();
		void frequency_list();
		int frequency(T);
		void display();
		T linear_search(T);
		T binary_search(T);
		void selection_sort();
		void bubble_sort();
		void insertion_sort();
		int partition(int,int);
		void quick_sort(int,int);
		/* findmin();*/
		int size();
		void swap(int,int);
		void reverse(int,int);
		void merge(int,int,int);
		void merge_sort(int,int);

};
