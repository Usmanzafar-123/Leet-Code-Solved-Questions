class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int presum[n];
       int sufsum[n];
        presum[0]=nums[0];
        for(int i=1;i<n;i++){
            presum[i]=presum[i-1]+nums[i];
        }
        sufsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            sufsum[i]=sufsum[i+1]+nums[i];
        }
        //  for(int i=0;i<n;i++){
        //   cout<<presum[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //   cout<<sufsum[i]<<" ";
        // }
      
        for(int i=0;i<n;i++){
           if(presum[i]-sufsum[i]==0){
               return i;
              
           }
        }
        return -1;
    }
};