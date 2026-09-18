class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int answer = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int digitcount = 0;
            while (temp > 0) {
                temp = temp / 10;
                digitcount++;
            }
            if (digitcount % 2 == 0)
                answer++;
        }
        return answer;
    }
};