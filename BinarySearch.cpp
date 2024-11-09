#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int item){
    int s =0;
    int e = size;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==item){
            return mid;
        }
        else if (arr[mid]>item)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        
    }    return -1;    
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

  
    int result = binarySearch(arr, size, item);
    result!=-1 ? cout<<"The element is found at position of "<<result<<" index\n" : cout<<"The element is not found in this array\n";
    return 0;
}