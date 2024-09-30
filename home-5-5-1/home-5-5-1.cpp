#include <iostream>
#include <algorithm>
#include <vector>


void removeDuplicates(std::vector<int>& v) {
    sort(v.begin(), v.end());
    auto end_unique = unique(v.begin(), v.end());
    v.erase(end_unique, v.end());
}

int main() {
    std::vector<int> numbers{ 1, 1, 2, 5, 6, 1, 2, 4 };

    std::cout << "[IN]: \n";
    for (const int& num : numbers) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    removeDuplicates(numbers);

    std::cout << "\n[OUT]: \n";
    for (const int& num : numbers) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    return 0;
}
