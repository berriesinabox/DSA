class Solution {
public:
    int totalWaviness(int nums1, int nums2) {
        int wave = 0;

        for (int num = nums1; num <= nums2; num++) {
            string s = to_string(num);
            for (int i = 1; i < s.size() - 1; i++) {
                if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
                    wave++;
                }
                else if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
                    wave++;
                }
            }
        }

        return wave;
    }
};
