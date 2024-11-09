#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int item){
    for(int i = 0; i<size; i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;    
}


int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cout<<"Enter the element of "<<i<<" insex : ";
        cin>>arr[i];
    }
    int item;
    cout<<"Enter the item : ";
    cin>>item;

  
    int result = linearsearch(arr, size, item);
    result!=-1 ? cout<<"The element is found at position of "<<result<<" index\n" : cout<<"The element is not found in this array\n";
    return 0;
}