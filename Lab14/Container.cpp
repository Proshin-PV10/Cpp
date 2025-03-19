#include <iostream>
#include <vector>
#include <string>

template <typename C >
void Print(const C &container, const std::string& razd) {
    bool first = true; 
    for (const auto& elem : container) {
        if (!first) {
            std::cout << razd; 
        }
        std::cout << elem; 
        first = false; 
    }
    std::cout << '\n';
}

int main() {     
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); 
    int mas[]{ 3,4,5,6 };
    Print(mas, "; "); 
    return 0;
}