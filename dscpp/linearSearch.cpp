#include<iostream>
using namespace std;

class Lsearch
{
	int a[50],n,i;
	public :void read();
	 		void search();
	 		void display();
};
void Lsearch::read()
{
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void Lsearch ::search()
{
	int elem,pos=0;
	cout<<"enter element to be search";
	cin>>elem;
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			pos=i+1;
			cout<<"position of element is"<<pos;
			cout<<"\n number of comparision:"<<pos;
		}
	}
	if(pos==0)
	{
		cout<<"\n element not found";
	}
}
void Lsearch ::display()
{ 
	cout<<"\n array elements are";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}     
int main()
{
	Lsearch ls;
	ls.read();
	ls.search();
	ls.display();
	return 0;
}




































