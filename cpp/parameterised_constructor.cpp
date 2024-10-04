#include <iostream>
using namespace std;

class integer
{
	private:int x;
	public:integer(int y){
		x=y;
		
	}
	void display(){
		cout<<x<<"\n";
	}
};
int main(void){
	integer a(50),b(25);
	cout<<"the member data of a=";
	a.display();
	cout<<"the member data of b=";
	b.display();
	
	return 0;
}
