#include"LinearArray.h"
template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template <class T>
Array<T>::Array(int LB ,int UB, T x[]){
	int i=LB;
	while(i<=UB){
		A[i]=x[i];
		i++;
	}
}


template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
}

template <class T>
void Array<T>::insert_at_beginning(T key){
	UB=UB+1;
	int K=UB-1;
	while (K>=LB){
		A[K+1]=A[K];
		K-=1;
	}
	A[LB]=key;
}

	
template <class T>
void Array<T>::insert_at_index(T key,int pos){
	UB+=1;
	int k=UB-1;
	while (k>=pos){
		A[k+1]=A[k];
		k=k-1;
		
	}
	A[pos]=key;
}

template<class T>
void Array<T>::delete_at_end(){
	if(UB>=LB){
		UB-=1;
	}
	else{
		cout<<"No elements in this array"<<endl;
	}
}

template<class T>
void Array<T>::delete_at_beginning(){
	if(UB>=LB){
		for(int i=LB+1;i<=UB;i++){
			A[i-1]=A[i];
		}
		UB=UB-1;
	}
	else{
		cout<<"No elements in this array"<<endl;
	}

}

template<class T>
void Array<T>::delete_at_index(int pos){
	if (LB<=pos and UB>=pos){
		int K=pos+=1;
		while(K<=UB){
			A[K-1]=A[K];
			K+=1;
		}
		UB-=1;
	}
	else{
		cout<<"OUT OF BOUND";
	}
}

template <class T>
int Array<T>::find_index(T key){
	for(int i = LB ;i <= UB;++i){
		if (A[i] == key){
			return i;
		}
	}
	return -1;
}

template <class T>
void Array<T>::display(){
	cout<<endl;
	for (int i = LB ;i <= UB ;i++){
		cout<< A[i] << "  ";
	}
	cout<<endl;
}
