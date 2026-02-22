class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>frequencyMap;
        for(int num:nums){
            frequencyMap[num]++;

        }
        for(int num:nums){
            if(frequencyMap[num]==1){
                sum+=num;
            }
        }
        return sum;
    }
};
