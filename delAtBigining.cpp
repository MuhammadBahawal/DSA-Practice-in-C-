#include <iostream>
using namespace std;

// deletion at begining
void dellAtBigining(int &size, int arr[])
{
    for (int i = 0; i < size; i++)
    {

        arr[i] = arr[i + 1];
    }
    size--;
}



void dellAtEnd(int &size, int arr[])
{

    // for (int i = size; i > 0; i--)
    // {
    //     arr[i] = arr[i-1];
    // }
    size--;
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

    dellAtEnd(size, arr);
    // dellAtBigining(size, arr);
    display(size, arr);
}