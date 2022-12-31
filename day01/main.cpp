#include <iostream>
#include <string>
#include <vector>

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

    auto maxCalories = -1;
    auto elfMostCalories = -1;
    for (int i = 0; i < calories.size(); i++) {
        if (elfMostCalories==-1||  maxCalories< calories[i]) {
            elfMostCalories = i;
            maxCalories = calories[i];
        }
    }

    std::cout << (elfMostCalories+1) <<" ("<<maxCalories<<")" << std::endl;
    return 0;
}
