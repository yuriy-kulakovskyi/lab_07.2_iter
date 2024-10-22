#include <gtest/gtest.h>
#include "../include/main.h"

TEST(SearcTest, HandleTestSearch) {
  int k = 4;
  int n = 3;
  int max = 0;

  int** a = new int*[k];
  for (int i = 0; i < k; i++) {
    a[i] = new int[n];
  }

  a[0][0] = 1; a[0][1] = 2; a[0][2] = 3;
  a[1][0] = 5; a[1][1] = 6; a[1][2] = 7;
  a[2][0] = 9; a[2][1] = 10; a[2][2] = 11;
  a[3][0] = 4; a[3][1] = 8; a[3][2] = 12;

  max += FindMaxOfMinOddRows(a, k, n);

  EXPECT_EQ(max, 9);

  for (int i = 0; i < k; i++) {
    delete[] a[i];
  }
  delete[] a;
}
