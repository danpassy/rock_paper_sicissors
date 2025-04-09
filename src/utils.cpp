#include "utils.h"
#include <algorithm>
#include <iostream>
#include <cctype>

std::string toLowerCase(const std::string& input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return result;
}


bool isInteger(const std::string& str) {
    return !str.empty() && std::all_of(str.begin(), str.end(), ::isdigit);
}

void printVector(const std::vector<std::string>& vec) {
    for (const auto& item : vec) {
        std::cout << item << std::endl;
    }
}

