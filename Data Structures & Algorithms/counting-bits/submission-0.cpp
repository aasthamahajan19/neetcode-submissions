class Solution {
   public:
    vector<int> countBits(int n) {
        vector<int> nums(n+1,0);
        if(n==0){
            nums[0]=0;
        }
        for (int i = 1; i <= n; i++) {
            int count = 0;
            int temp=i;
            while (temp != 0) {
                temp = temp & (temp - 1);
                count++;
            }
            nums[i]=count;
        }
        return nums;
    }
};
