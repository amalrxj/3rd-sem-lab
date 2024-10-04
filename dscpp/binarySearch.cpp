#include <iostream>
using namespace std;

class Bsearch
{
    int a[10], i, j, n;
public:
    void read();
    void search();
    void display();
};

void Bsearch::read()
{
    cout << "\n enter the number of elements";
    cin >> n;
    cout << "\n enter the array elements";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Bsearch::search()
{
    
}

void Bsearch::display(){
    cout<<"\n array elements are:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    Bsearch b;
    b.read();
    b.search();
    b.display();
    return 0;
}

