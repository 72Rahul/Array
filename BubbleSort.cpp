
#include<iostream>
using namespace std;

int main(){
    int sz;
    cout<<"Enter the size of array : ";
    cin>>sz;
    int arr[sz];
    for(int i = 0; i<sz; i++){
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>arr[i];
    }
    int counter=1; 
    while(counter<sz){
        for(int i =0; i<sz; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        counter++;
    }
    for (int i = 0; i < sz; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
    
}