#include"AdvancedArray.h"
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

template<class T>
T Array<T>::linear_search(T key){
	int index=-1;
	int i=LB;
	while(i<=UB){
		if(A[i]==key){
			index=i;
			break;
		}
		i+=1;
	}
	return index;
}
/*template<class T>
T Array<T>::find_min(T,int,int){
	int min=LB;
	for(int j=LB+1;j<UB;j++){
		if(A[j]<A[min]){
			min=j;
		}
	}
	return min;
}
*/
template<class T>
void Array<T>::swap(int p,int q){
	T t=A[p];
	A[p]=A[q];
	A[q]=t;
}

template<class T>
T Array<T>::binary_search(T value){
	int l=LB;
	int u=UB;
	while(l<=u){
		int mid= (l+u)/2;
		if(A[mid]>value){
		    u=mid-1;
		}
		else if(A[mid]<value){
			l=mid+1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

template<class T>
void Array<T>::selection_sort(){
	for (int i=LB;i<UB;i++){
		int min=i;
		for(int j=i+1;j<=UB;j++){
			if(A[j]<A[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(i,min);
		}
	}
}

template<class T>
void Array<T>::bubble_sort(){
	for(int i=LB;i<=UB-1;i++){
		for(int j=LB;j<UB-1+LB;j++){
			if(A[j]>A[j+1]){
				swap(j,j+1);
			}
		}
	}
}

template <class T>
void Array<T>::insertion_sort(){
	for(int i=LB+1;i<=UB;i++){
		int key=A[i];
		int j=i-1;
		while(j>=LB && A[j]>key){
			A[j+1]=A[j];
			j-=1;
		}
		A[j+1]=key;
		i+=1;
	}
}

template <class T>
int Array<T>::partition(int LB,int UB){
	int j=LB-1;
	T pivot=A[UB];
	int i=LB;
	while(i<=UB-1){
		if(A[i]<pivot){
			j=j+1;
			swap(A[i],A[j]);
		}
		i+=1;
	}
	swap(A[j+1],A[UB]);
	return j+1;
}

template <class T>
void Array<T>::quick_sort(int LB,int UB){
	if (LB<UB){
		int p=partition(LB,UB);
			quick_sort(LB,p-1);
			quick_sort(p+1,UB);
			
		}
	}

template <class T>
void Array<T>::merge(int p,int mid,int q){
	mid=(p+q)/2;
	int n1=q-p+1;
	int n2=mid-q;
	T L[n1+1],R[n2+1];
	
	for(int i=0;i<n1;i++){
			L[i]=A[p+i];
			for(int j=0;j<n2;j++){
				R[j]=A[mid+i+j];
			}	
		}
		L[n1+1]=R[n2+1]=99999999;
	
		int i=0,j=0,k=LB;
		while(i<n1 && j<n2){
			if (L[i]<= R[j]){
				A[k]=L[i];
				i++;
			}
			else{
				A[k]=R[j];
				j++;
			}
			k++;
		}
	
		while(i<n1){
			A[k]=L[i];
			i++;
			k++;
		}
		while(j<n2){
			A[k]=R[j];
			j++;
			k++;
		}

	}
	
template<class T>
void Array<T>::merge_sort(int LB, int UB){
	if(LB < UB){
		int mid=(LB+UB) / 2;
		merge_sort(LB,mid);
		merge_sort(mid+1,UB);
		merge(LB,mid,UB);
	}
}
template<class T>
void Array<T>::reverse(int start,int end){
	while(start<end){
		swap(start,end);
			start++;
			end--;
		
	}
}


template<class T>
void Array<T>::rotate_right(int pos)
{
	cout<<"CLOCKWISE ROTATION: \n";
	for(int i=0;i<pos;i++)
	{
		T temp=A[UB];
		for(int j=UB;j>0;j--)
		{
			A[j]=A[j-1];
		}
		A[LB]=temp;
	}
}


template <class T>
void Array<T>::rotate_left(int pos)
{
	cout<<"COUNTER CLOCKWISE: \n";
	for(int i=LB;i<pos;i++)
	{
		T temp=A[LB];
		for(int j=LB;j<=UB;j++)
		{
			A[j]=A[j+1];
		}
		A[UB]=temp;
	}
}

template <class T>
int Array<T>::size() {
  return UB - LB + 1;
}

template <class T>
void Array<T>::list_distinct() {
	for(int i=LB;i<=UB;i++){
		for(int j=LB-1;j<1;j++){
			if(A[i]==A[j]){
				
			}
			else{
				cout<<A[i]<<" ";
			}
		}
		cout<<endl;
	
	}
}

template<class T>
void Array<T>::frequency_list(){
	int i;
	int count=0;
	cout<<"Element "<<"         "<<"Frequency"<<endl;
	for(i=LB;i<=UB;i++){
		for(int j=LB-1;j<1;j++){
			if(A[i]==A[j]){
			count+=1;
		}
		else{
			cout<<A[i]<<"             "<<count<<endl;
			count=1;
		}
	}
	}
}

template <class T>
int Array<T>::frequency(T key){
	int count=0;
	for(int i=LB;i<= UB; i++){
		if( A[i] == key ){
			count++;
		}
		return count;
	}
}

