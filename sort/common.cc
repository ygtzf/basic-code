#include <iostream>

using namespace std;

void sort_print(int* arr, int size)
{
    cout << "the number after sort are:";
    int i = 0;
    for(; i<size; i++)
    {
        cout << " " << arr[i];
    }
    cout << "" << endl;
}
