class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            int cnt = 0;
            int sum = 0;

            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    if (i == x / i) {
                        cnt += 1;
                        sum += i;
                    } else {
                        cnt += 2;
                        sum += i + (x / i);
                    }
                }
            }

            if (cnt == 4) {
                ans += sum;
            }
        }

        return ans;
    }
};
