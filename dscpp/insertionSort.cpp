#include <iostream>
using namespace std;

class insertion{
	int a[50],i,j,n;
	public:void read();
			void sort();
			void display();
};

void insertion::read(){
	cout<<"enter the number of elements:";
	cin>>n;
	cout<<"\nEnter the elements of array:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
}

void insertion::sort()
{
	int temp,counter=0;
	for(i=0;i<n;i++){
		counter++;
		j=i;
		while(j>0 && a[j-1]>a[j]){
			counter++;
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
		}
	}
	cout<<"\nThe number of comparisions:"<<counter;
}

void insertion::display(){
	cout<<"\nThe array elements after insertion sort:";
	for(int i=0;i<n;i++){
		cout<<a[i];
		cout<<"\t";
	}
}

int main(){
	insertion i;
	i.read();
	i.sort();
	i.display();
		
}
