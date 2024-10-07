#include <iostream>
using namespace std;

class quickSort
{
public:
    int arr[50], i, j, n, counter = 0;
    void read();
    void swap(int *a, int *b);
    int partition(int arr[], int low, int high);
    void sort(int arr[], int low, int high);
    void display();
};

void quickSort::read()
{
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void quickSort::swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int quickSort::partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j < high; j++)
    {
        counter++;
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort::sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        sort(arr, low, pivot - 1);
        sort(arr, pivot + 1, high);
    }
}

void quickSort::display()
{
    int i;
    cout << "\nSorted array: ";                  
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}


int main()
{
    quickSort q;
    q.read();
    q.sort(q.arr, 0, q.n - 1);
    cout << "The number of comparisons: " << q.counter << endl;
    q.display();
    return 0;
}
