////给定特定面值的币
////如1，5，11
////再给一个数值，求出组合出这个数值的最小的币数
//
//#include <algorithm>
//#include <climits>
//#include <cassert>
//#include <iostream>
//using std::cout;
//using std::endl;
//
////动态规划
//int getMinCoinNumSolution_1(int faceValues[], int faceNum, int value)
//{
//	if (value == 0)
//		return 0;
//	int num = INT_MAX;
//	for (int faceIndex = 0;faceIndex < faceNum;++faceIndex)
//	{
//		int faceValue = faceValues[faceIndex];
//		if (faceValue > value)
//			continue;
//		num = std::min(num, getMinCoinNumSolution_1(faceValues, faceNum, value - faceValue) + 1);
//	}
//	return num;
//}
//
//int getMinCoinNumSolution_2(int faceValues[], int faceNum, int value)
//{
//	int* table = new int[value + 1];
//	assert(table != nullptr);
//	memset(table, 0, sizeof(int) * (value + 1));
//	for (int curValue = 1;curValue <= value;++curValue)
//	{
//		int num = INT_MAX;
//		for (int faceIndex = 0;faceIndex < faceNum;++faceIndex)
//		{
//			int newValue = curValue - faceValues[faceIndex];
//			if (newValue < 0)
//				continue;
//			else
//				num = std::min(num, table[newValue] + 1);
//		}
//		table[curValue] = num;
//	}
//	int num = table[value];
//	for (int curValue = 1; curValue <= value; ++curValue)
//	{
//		cout << table[curValue] << " ";
//	}
//	delete[] table;
//	return num;
//}
//
//int main()
//{
//	int faceValues[] = { 1,5,11 };
//	int num = getMinCoinNumSolution_2(faceValues, 3, 15);
//	return 0;
//}