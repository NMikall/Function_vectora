#include "pch.h"
#include "C:\Users\юзер\source\repos\ConsoleApplication2\ConsoleApplication2.cpp"

TEST(TestCaseName, TestName) {
  vector<int> v1 = { 1, 2, 3, 4, 5 };
  vector<int> v2 = { 3, 7, 8, 9, 10 };
  EXPECT_NE(vec(v1, 5), v2);
  vector<int> v3 = { 1, 2, 3, 4, 5 };
  vector<int> v4 = { 6, 7, 8, 9, 10 };
  EXPECT_EQ(vec(v3, 5), v4);
  vector<int> v5 = { 1};
  vector<int> v6 = { 6};
  EXPECT_EQ(vec(v5, 5), v6);
  vector<int> v7 = { 1, 2, 3, 4, 5 , 6, 21, -100, 0};
  vector<int> v8 = { 6, 7, 8, 9, 10, 11, 26, -95, 5 };
  EXPECT_EQ(vec(v7, 5), v8);
  vector<int> v9 = { 1, 2, 3};
  vector<int> v10 = { 1, 2, 3 };
  EXPECT_NE(vec(v9, 5), v10);
  vector<int> v11 = { };
  vector<int> v12 = { };
  EXPECT_EQ(vec(v11, 5), v12);
  vector<int> v13 = { 1, 2, 3, 4, 5 };
  vector<int> v14 = { 1, 2, 3, 4, 5 };
  EXPECT_EQ(vec(v13, 0), v14);
  vector<int> v15 = { 1, 2, 3, 4, 5 };
  vector<int> v16 = { 11, 12, 13, 14, 15};
  EXPECT_EQ(vec(v15, 10), v16);
  vector<int> v17 = { 1, 2, 3, 4, 5 };
  vector<int> v18 = { -9, -8, -7, -6, 5 };
  EXPECT_NE(vec(v17, -10), v18);
  vector<int> v19 = { 1, 2, 3, 4, 5 };
  vector<int> v20 = { -9, -8, -7, -6, -5 };
  EXPECT_EQ(vec(v19, -10), v20);
}
