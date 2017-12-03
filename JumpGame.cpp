class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n==0) {return 0;}
        if (n==1) {return 0;}
        int m=0;
        int i=0;
        int njump=0;
        while (i<n){
            m=max(m,nums[i]+i);
            if (m>0) {njump++;}
            if (m>=n-1){return njump;}
            int tmp=0;
            for (int j = i+1; j<=m;j++){
                if (j+nums[j]>tmp){
                    tmp=nums[j]+j;
                    i=j;
                }
            }
             
        }
        return njump;
    }
};
