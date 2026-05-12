#include <iostream>

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution sol;
    std::cout << sol.sum(12, 5) << std::endl; 
    return 0;
}
