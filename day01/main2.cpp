#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int currentElf = 0;
    vector<int> calories;
    calories.push_back(0);
    for (std::string line; std::getline(std::cin, line);) {
        if (line.size() == 0) {
            currentElf++;
            calories.push_back(0);
        }
        else {
            int n = atoi(line.c_str());
            calories[currentElf] = calories[currentElf]+n;

        }
    }

    std::sort(calories.begin(), calories.end(), greater<int>());

    auto maxCalories = 0;
    auto nb = 0;
    for (int i = 0; i < calories.size()&&i<3; i++, nb++) {
        std::cout << calories[i] << std::endl;
        maxCalories += calories[i];        
    }

    std::cout << "max calories: "<<maxCalories << std::endl;
    return 0;
}
