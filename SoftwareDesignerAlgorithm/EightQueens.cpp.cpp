//#pragma once
//#pragma execution_character_set("utf-8")
//#include <iostream>
//#include <cstdio>
//using std::cout;
//using std::endl;
//
//const int COLUMNS = 8;
//const int ROWS = 8;
//int Matrix[COLUMNS][ROWS] = { 0 };
//
//void print()
//{
//	for (int row = 0; row < ROWS; ++row)
//	{
//		for (int col = 0; col < COLUMNS; ++col)
//		{
//			cout << Matrix[row][col] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//bool check(int row, int col)
//{
//	//检查列
//	for (int r = 0; r < row; ++r)
//	{
//		if (Matrix[r][col])
//			return false;
//	}
//	for (int r = row - 1, c = col - 1; r != -1 && c != -1; --r, --c)
//	{
//		if (Matrix[r][c])
//			return false;
//	}
//	for (int r = row - 1, c = col + 1; r != -1 && c != COLUMNS; --r, ++c)
//	{
//		if (Matrix[r][c])
//			return false;
//	}
//	return true;
//}
//
//
//void writeQueen(int currentRow)
//{
//	static int count = 0;
//	if (currentRow == ROWS)
//	{
//		++count;
//		cout << count << endl;
//		print();
//		//return;	//此处应有return，问题代码正是由于这儿没有写return导致后面访问越界而产生的。
//	}
//
//	int col = 0;
//	for (; col < COLUMNS; ++col)
//	{
//		Matrix[currentRow][col] = 1;
//		//print();
//		if (check(currentRow, col))
//			writeQueen(currentRow + 1);
//		Matrix[currentRow][col] = 0;
//	}
//}
//
//int main()
//{
//	writeQueen(0);
//}
