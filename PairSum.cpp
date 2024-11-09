#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    for(int i = 0; i<nums.size()-1; i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                
                return {i, j};
            
        }
        cout<<endl;
    }
        return {};
}
}
int main(){
    vector<int> vec = {2, 7, 11, 15};
    int key;
    cout<<"Enter the number : ";
    cin>>key;
    vector<int> result = pairsum(vec, key);
    
    
    return 0;
}