//WAP to print the largest and smallest element of an array taking by user.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    for(int i = 0; i<size; i++){
        cout << "Enter the " << i << " element of array " ;
        cin>>array[i];
    }
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i = 0; i<size; i++){
        // if(array[i]>largest){
        //      largest = array[i];
        // }
        // if (array[i]<smallest){
        //     smallest =array[i];
        // }
        smallest = min(array[i], smallest);
        largest = max(array[i], largest);
    }
    cout<<"largest is "<<largest<<endl;
     cout<<"smallest is "<<smallest;
    return 0;

}