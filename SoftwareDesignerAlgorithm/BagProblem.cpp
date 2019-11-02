//#pragma once
//#pragma execution_character_set("utf-8")
////突然间发现它有点像硬币问题
////同一物件可以选择多次
//#include <iostream>
//#include <cassert>
//using std::cout;
//using std::endl;
//
//const int ROWS = 5;
//const int COLS = 9;
//
//struct Bag
//{
//	int volume;
//	int value;
//};
//
//template<typename T>
//T max(T lhs, T rhs)
//{
//	return lhs > rhs ? lhs : rhs;
//}
//
//void print(int matrix[][9], int rows, int cols)
//{
//	for (int row = 0; row < rows; ++row)
//	{
//		for (int col = 0; col < cols; ++col)
//		{
//			cout << matrix[row][col] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void getMaxValueByVolumn(Bag* bags, int bagsNum, int capacity)
//{
//	int* table = new int[capacity + 1];
//	assert(table != nullptr);
//	memset(table, 0, sizeof(int) * (capacity + 1));
//	for (int curcapacity  = 0;curcapacity <= capacity;++curcapacity)
//	{
//		for (int bagNo = 0;bagNo < bagsNum;++bagNo)
//		{
//			Bag* pCurBag = bags + bagNo;
//			int curBagVol = pCurBag->volume;
//			if (curcapacity >= curBagVol)
//			{
//				table[curcapacity] = max(table[curcapacity], table[curcapacity - curBagVol] + pCurBag->value);
//			}
//		}
//	}
//	cout << table[capacity] << endl;
//	for (int i = 0; i <= capacity; ++i)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//	for (int i = 0; i <= capacity; ++i)
//	{
//		cout << table[i] << " ";
//	}
//	cout << endl;
//	delete[] table;
//}
//
//int main()
//{
//	Bag bags[4] = {
//		{2,3},
//		{3,4},
//		{4,5},
//		{5,6}
//	};
//	getMaxValueByVolumn(bags, 4, 9);
//}
//
