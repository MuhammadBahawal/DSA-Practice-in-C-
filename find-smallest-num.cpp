#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 1, 4};
    int smallest = arr[0];
    int index1 = 0;

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        index1++;
    }

    cout<<"smaleest number at position "<<index1<<": and it is "<<smallest<<endl;
    
}