class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mybits[32] = {0};
        int result  = 0;
        for(int  j = 0; j < 32; j ++){
             for(int i = 0; i < nums.size(); i++){
                if((nums[i] >> j) & 1) mybits[j] ++;
            }
            result |= ((mybits[j] % 3) << j);
        }
        
        return result;
    }
};
