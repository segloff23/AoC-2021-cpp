#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "../utils/utils.h"
using namespace std;

void partOne(vector<int> depths) {
  auto increases = 0;
  for (auto i = 1; i < depths.size(); i++) {
    if (depths[i] > depths[i-1]) {
      increases++;
    }
  }
  cout << "Part 1: " << increases << "\n";
}

void partTwo(vector<int> depths) {
  auto increases = 0;
  for (auto i = 1; i < depths.size() - 2; i++) {
    if (depths[i+2] > depths[i-1]) {
      increases++;
    }
  }
  cout << "Part 2: " << increases << "\n";
}

int main() {
  auto depths = parse1DIntegers("01/input.txt");
  partOne(depths);
  partTwo(depths);

  return 0;
}

