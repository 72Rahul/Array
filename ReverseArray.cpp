//WAP to print the array in reverse order

#include<iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int s =0;
    int e = size-1;
    while(s<=e){
       swap(arr[e], arr[s]);
        s++, e--;
    }
}


int main() {
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter the element of "<<i<<" index : ";
        cin>>arr[i];
    }
    reverseArray(arr,size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}