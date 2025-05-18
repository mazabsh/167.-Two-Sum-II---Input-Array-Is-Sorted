#include<iostream> 
#include<vector> 
#include<unordered_map> 

using namespace std; 

class Solution{
public: 
      vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int,int> mp; 

        for(int i=0; i<nums.size(); ++i){
          int k = target - nums[i]; 
          if(mp.find(k)!= mp.end()){
            return {mp[k]+1, i+1}; 
          }
          mp[nums[i]] =i;  
        }
        return {};
      }
};
int main(){
  vector<int> nums = {2,7,11,15}; 
  int target = 9; 
  Solution sol; 
  vector<int> result = sol.twoSum(nums, target); 
  cout << "{ " <<result[0] << "," << result[1] << " }"<<  endl; 
  return 0; 
}

