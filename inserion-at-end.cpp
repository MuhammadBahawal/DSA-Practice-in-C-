#include <iostream>
using namespace std;

void insertend(int &size, int arr[])
{
    int Element;
    cout << "Eneter the Element you want to insert at end: ";
    cin >> Element;
    arr[size]=Element;
    size++;
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
    insertend(size, arr);
    display(size, arr);
}