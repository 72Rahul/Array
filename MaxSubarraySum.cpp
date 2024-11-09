// WAP to find the maximum subarray sum.

#include<iostream>
//for INT_MIN
#include<climits>
using namespace std;

int main(){

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT_MIN;

    for(int st = 0; st<n; st++){
        int cursum = 0;
        for(int end = st; end<n; end++){
            cursum += arr[end];
            maxsum = max(cursum, maxsum);            
        }
    }
    cout<<"Maximum Subarray Sum is "<<maxsum;
    return 0;
}