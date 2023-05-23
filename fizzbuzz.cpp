#include <iostream>
#include <vector>
#include <string>
#include <variant>

void FizzBuzz(const std::vector<std::variant<int, std::string>>& rules, int upperLimit, int currentNumber, int ruleIndex, std::string output) {
    if (ruleIndex < rules.size()) {
        if (currentNumber % std::get<int>(rules[ruleIndex]) == 0) {
            output += std::get<std::string>(rules[ruleIndex + 1]);
        }
        FizzBuzz(rules, upperLimit, currentNumber, ruleIndex + 2, output);
    } else {
        if (currentNumber <= upperLimit) {
            if (!output.empty()) {
                std::cout << output << std::endl;
            } else {
                std::cout << currentNumber << std::endl;
            }
            FizzBuzz(rules, upperLimit, currentNumber + 1, 0, "");
        }
    }
}

int main() {
    std::vector<std::variant<int, std::string>> rules = { 3, "fizz", 5, "buzz" };
    int upperLimit = 100;
    int currentNumber = 0;
    int ruleIndex = 0;
    std::string output = "";

    FizzBuzz(rules, upperLimit, currentNumber, ruleIndex, output);

    return 0;
}

