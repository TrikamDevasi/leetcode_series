#include <iostream>
#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string result = "";
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    std::cout << sol.defangIPaddr("1.1.1.1") << std::endl; // Output: 1[.]1[.]1[.]1
    return 0;
}
