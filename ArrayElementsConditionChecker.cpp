#include <iostream>
#include <set>

int checkConditions(int** array, int rowSize, int colSize, std::set<int> conditions) {
  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < colSize; j++) {
      int element = array[i][j];
      bool found = false;
      for (std::set<int>::iterator it = conditions.begin(); it != conditions.end(); it++) {
        if (*it == element) {
          found = true;
          break;
        }
      }
      if (!found) {
        return -1;
      }
    }
  }
  return 0;
}

int main() {
  int rowSize = 3;
  int colSize = 4;
  int** arr = new int*[rowSize];
  for(int i = 0; i < rowSize; ++i) {
    arr[i] = new int[colSize];
  }

  arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3; arr[0][3] = 4;
  arr[1][0] = 5; arr[1][1] = 6; arr[1][2] = 7; arr[1][3] = 8;
  arr[2][0] = 9; arr[2][1] = 10; arr[2][2] = 11; arr[2][3] = 12;

  std::set<int> conditions;
  conditions.insert(1); conditions.insert(2); conditions.insert(3); conditions.insert(4);
  conditions.insert(5); conditions.insert(6); conditions.insert(7); conditions.insert(8);
  conditions.insert(9); conditions.insert(10); conditions.insert(11); conditions.insert(12);

  int result = checkConditions(arr, rowSize, colSize, conditions);

  std::cout << "Result: " << result << std::endl; //result will be 0 since all elements in the array are in the conditions set.

  for(int i = 0; i < rowSize; ++i) {
    delete [] arr[i];
  }
  delete [] arr;

  return 0;
}
