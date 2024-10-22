#include <iostream>
#include <iomanip>
#include "../include/main.h"

using namespace std;

int main() {
  int rows, cols, minValue = 1, maxValue = 100;

  cout << "Enter number of rows (k): ";
  cin >> rows;
  cout << "Enter number of columns (n): ";
  cin >> cols;

  int** matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  CreateMatrix(matrix, rows, cols, minValue, maxValue);

  cout << "Matrix:" << endl;
  PrintMatrix(matrix, rows, cols);

  int result = FindMaxOfMinOddRows(matrix, rows, cols);

  cout << "Max of min elements in odd rows: " << result << endl;

  for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}
