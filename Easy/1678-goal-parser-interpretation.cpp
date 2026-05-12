#include <iostream>
#include <string>

class Solution {
public:
    std::string interpret(std::string command) {
        std::string result = "";
        for (int i = 0; i < command.length(); i++) {
            if (command[i] == 'G') {
                result += 'G';
            } else if (command[i] == '(') {
                if (command[i+1] == ')') {
                    result += 'o';
                    i++; // skip ')'
                } else {
                    result += "al";
                    i += 3; // skip "al)"
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    std::cout << sol.interpret("G()()()()(al)") << std::endl; // Output: Gooooal
    return 0;
}
