#include "../include/main.h"
#include <iostream>
#include <iomanip>
#include <limits>d

using namespace std;

void CreateMatrix(int** matrix, int rows, int cols, int minValue, int maxValue) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = minValue + rand() % (maxValue - minValue + 1);
    }
  }
}

void PrintMatrix(int** matrix, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << setw(5) << matrix[i][j];
    }
    cout << endl;
  }
}

int FindMaxOfMinOddRows(int** matrix, int rows, int cols) {
  int maxOfMin = numeric_limits<int>::min();

  for (int i = 0; i < rows; i += 2) {
    int minInRow = numeric_limits<int>::max();

    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] < minInRow) {
        minInRow = matrix[i][j];
      }
    }

    if (minInRow > maxOfMin) {
      maxOfMin = minInRow;
    }
  }

  return maxOfMin;
}