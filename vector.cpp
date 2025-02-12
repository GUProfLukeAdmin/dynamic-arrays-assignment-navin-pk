#include <iostream>
#include <vector>

using namespace std;

void part1() {
    //TODO: Implement part 1
    vector<int> part1{};
    int i = 0;
    while (i < 50001) {
        part1.push_back(i);
        i++;
    }
    cout << "After adding elements: Size = " << part1.size() << ", Capacity = " << part1.capacity() << "\n";

    part1.resize(part1.size() / 2);
    cout << "After resizing: Size = " << part1.size() << ", Capacity = " << part1.capacity() << "\n";

    part1.shrink_to_fit();
    cout << "After shrink_to_fit(): Size = " << part1.size() << ", Capacity = " << part1.capacity() << "\n";
}

void part2() {
    //TODO: Implement part 2
    vector<bool> part2bool(10000);
    vector<char> part2char(10000);
    size_t boolMemory = part2bool.capacity() / 8;
    size_t charMemory = part2char.capacity() * sizeof(char);
    cout << "Memory usage of std::vector<bool>: " << boolMemory << " bytes\n";
    cout << "Memory usage of std::vector<char>: " << charMemory << " bytes\n";
}

int main() {
    part1();
    part2();
    return 0;
}