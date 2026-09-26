#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int j=nums.size()-1, t;
    for(int i=0 ; i<=k; i++){
        t=nums[i];
        nums[i]=nums[j];
        nums[j]=t;
        j--;
        }
    }
        
    
};

int main(){
    Solution nums= new Solution();
    vector<int> nums= {5,6,7,8,23,56};
    int k=3;
    rotate(nums, k);
}