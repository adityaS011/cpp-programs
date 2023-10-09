#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findDuplicates(const std::vector<int>& arr) {
    std::vector<int> result;
    std::unordered_map<int, std::vector<int>> indexMap; // Map of element to its indices

    // Populate the indexMap
    for (int i = 0; i < arr.size(); ++i) {
        indexMap[arr[i]].push_back(i);
    }

    // Find elements with multiple indices (i.e., duplicates)
    for (const auto& entry : indexMap) {
        if (entry.second.size() > 1) {
            result.insert(result.end(), entry.second.begin(), entry.second.end());
        }
    }

    return result.empty() ? std::vector<int>{-1} : result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> duplicates = findDuplicates(arr);

    if (duplicates[0] == -1) {
        std::cout << "No duplicates found." << std::endl;
    } else {
        std::cout << "Duplicate indices: ";
        for (int index : duplicates) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
