#include<iostream>
using namespace std;

int ascending(int arr[], int sz){
    int s = 0, e = sz-1;
    for(int i = 0; i<sz; i++){
        for(int j = i+1; j<sz; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
        
}

int main(){
    int s;
    cout<<"Enter the size of array : ";
    cin>>s;
    int arr[s];
    for(int i = 0 ; i<s; i++){
        cin>>arr[i];
    }
    ascending(arr, s);
    for(int i = 0; i<s; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}


