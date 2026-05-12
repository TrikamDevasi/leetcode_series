#include <iostream>

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        for (int i = 0; i < n; i++) {
            result ^= (start + 2 * i);
        }
        return result;
    }
};

int main() {
    Solution sol;
    std::cout << sol.xorOperation(5, 0) << std::endl; // Output: 8
    return 0;
}
