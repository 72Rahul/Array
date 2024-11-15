

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        
        while (arr[j] > key && j>=0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
int arr[] = {12,45,23,51,19,8};
int size = 6;
    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}

/* This code is contributed by Hritik Shah. */
