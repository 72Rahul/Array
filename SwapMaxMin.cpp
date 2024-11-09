//WAP to swap the largest and smallest element of an array taking by user.

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
        smallest = min(array[i], smallest);
        largest = max(array[i], largest);
    }
    cout<<"before swaping : "<<smallest<<" "<<largest<<endl;
    swap(smallest, largest);
    cout<<"After swaping : "<<smallest<<" "<<largest<<endl;
    return 0;

}