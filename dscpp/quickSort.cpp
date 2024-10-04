#include <iostream>
using namespace std;

class qsort{
	public:int a[50],i,j,n,counter=0;
	void read();
	int partition(int arr[],int low ,int high);
	void swap(int *a,int *b);
	void sort(int arr[],int low,int high);
	void display();
};

void qsort::read(){
	cout<<"enter the number of elements: ";
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
int qsort::partition(int arr[],int low,int high){
	int pivot= arr[high];
	int i=arr[low-1];
	for(j=low;j<high;j++){
		counter++;
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}	
	}	
	swap(&arr[i++],&arr[high]);
	return i+1;
}
void qsort::sort(int arr[],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		sort(arr,low,pi-1);
		sort(arr,pi+1,high);
	}
}

void qsort::swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void qsort::display(){
	cout<<"\n Sorted array=";
	for( i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}


int main(){
	qsort qs;
	qs.read();
	qs.sort(qs.a,0,qs.n-1);
	cout<<"the number of comparision:"<<qs.counter;
	qs.display();
	return 0;
	
	return 0;
}
