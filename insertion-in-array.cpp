#include <iostream>
using namespace std;

void insertion(int size, int arr[])
{
    int Element;
    cout << "enter the Element you want to insert at Biggining : ";
    cin >> Element;
    size++;
    for (int i = 0; i < size; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = Element;
}

void display(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    cout << "Enter the size of array: ";
    int size;
    cin >> size;
    int arr[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Element of the Array: ";
        cin >> arr[i];
    }
    insertion(size, arr);
    display(size, arr);
}