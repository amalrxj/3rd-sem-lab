#include <iostream>
#define SIZE 5
using namespace std;
class stackop
{
    int stack[SIZE], top, i;

public:
    stackop()
    {
        top = -1;
    }
    bool isEmpty();
    bool isFull();
    void push(int val);
    void pop();
    void display();
};
bool stackop::isFull(){
    if(top==SIZE-1)
    return true;
    else
    return false;
}
bool stackop::isEmpty(){
    if(top==-1)
    return true;
    else
    return false;
}
void stackop::push(int val){
    top++;
    stack[top]=val;
}
void stackop::pop(){
    int item;
    item=stack[top];
    top--;
    cout<<"poped element"<<item;
}
void stackop::display(){
    for(int i=0;i<=top;i++){
        cout<<stack[i];
    }
}
int main(){

}