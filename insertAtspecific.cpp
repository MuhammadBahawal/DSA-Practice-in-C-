#include <iostream>
using namespace std;

void insertAtSpecific(int &size, int arr[])
{
    int Element, index;
    cout << "Enter the Index Where you want to ENter Element";
    cin >> index;
    cout << "Enter the Element ";
    cin >> Element;
    for (int i = 0; i < size; i++)
    {
        if (index == i)
        {
            for (int j = size; j > index - 1; j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[i - 1] = Element;
        }
    }
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

    insertAtSpecific(size, arr);
    display(size, arr);
}