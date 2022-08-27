#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring> 
using namespace std;

vector<int> parse1DIntegers(string fileName) {
  vector<int> numbers;
  string line;
  ifstream file(fileName);
  if (file.is_open()) {
    while (getline(file, line)) {
      numbers.push_back(stoi(line));
    }
    file.close();
  }
  return numbers;
}

vector<vector<int>> parseNDIntegers(string fileName, char *separator) {
  vector<vector<int>> numbers;
  string line;
  ifstream file(fileName);
  char *ptr;
  if (file.is_open()) {
    while (getline(file, line)) {
      char lineChars[line.length() + 1];
      strcpy(lineChars, line.c_str());
      ptr = strtok(lineChars, separator);
      vector<int> row;
      while (ptr != NULL) {
        row.push_back(stoi(ptr));
        ptr = strtok(NULL, separator);  
      }
      numbers.push_back(row);
    }
  }
  return numbers;
}
