#include<iostream>
using namespace std;

class BubbleSort {
    int a[10], n;
public:
    void read();
    void sort();
    void display();
};

void BubbleSort::read() {
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void BubbleSort::sort() {
	int counter=0;
    for (int i = 0; i < n-1; i++) {
    	counter++;
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"The number of comparision: "<<counter;
}

void BubbleSort::display() {
    cout << "\nSorted elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    BubbleSort bs;
    bs.read();
    bs.sort();
    bs.display();
    return 0;
}
