// WAP to find the maximum subarray sum by Kadene's Algorithm.

#include<iostream>
//for INT_MIN
#include<climits>
using namespace std;

int main(){

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i = 0; i<n; i++){
        currsum+=arr[i];
        maxsum = max(currsum, maxsum);
        if(currsum<0){
            currsum = 0;
        }        
    }
    cout<<"Maximum Subarray Sum is "<<maxsum;
    return 0;
}