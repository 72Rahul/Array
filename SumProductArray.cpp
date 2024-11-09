//WAP to calculate the sum and product of all numbers in array.

#include<iostream>
using namespace std;


int product(int arr[], int size){
    int p = 1;
    for(int i = 0; i<size; i++){
        p*=arr[i];
    }
    return p;
}
    
int sum(int arr[], int size){
    int s = 0;
    for(int i = 0; i<size; i++){
        s +=arr[i];
    }
    return s;
   
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
    cout<<"The sum of numbers in array is "<<sum(arr, size)<<endl;
    cout<<"The product of numbers in array is "<<product(arr, size)<<endl;
   
    return 0;
}