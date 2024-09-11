class Solution {
public:
    int minBitFlips(int start, int goal) {
      // XOR to find the differing bits
        int xorResult = start ^ goal;
        int flipCount = 0;
        while (xorResult > 0) {
            flipCount += xorResult & 1;
            xorResult >>= 1;
        }  

        return flipCount;
    }
};