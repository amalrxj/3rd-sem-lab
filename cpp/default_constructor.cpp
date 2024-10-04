#include <iostream>
using namespace std;

class integer{
	private: int x;
	public: integer(){
		x=10;
	}
	void display()
	{
		cout<<x<<"\n";
	}
};

int main(void){
	integer a,b;
	cout<<"the member data of a=";
	a.display();
	cout<<"the member data of b=";
	b.display();
	return 0;
}
