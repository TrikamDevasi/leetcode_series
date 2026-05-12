#include <iostream>

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
            }
            steps++;
        }
        return steps;
    }
};

int main() {
    Solution sol;
    std::cout << sol.numberOfSteps(14) << std::endl; // Output: 6
    return 0;
}
