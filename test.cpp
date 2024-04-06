class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
  vector<vector<int>>res;
    for(int i=0;i<nums.size();i++){
        if(i!=0&&(nums[i]==nums[i-1])) continue;
     int j=i+1;
     int k=nums.size()-1;
      while(j<k){
        int sum=nums[i]+nums[j]+nums[k];

           if(sum>0){
                k--;
           } else if(sum<0){
              j++;
           } else {
               vector<int>tmp={nums[i],nums[j],nums[k]};
               res.push_back(tmp);
                j++; k--;
              while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[ + 1]) k--;
           }
           

           
            
      }
    }
    
      
    
     return res;
    }

};