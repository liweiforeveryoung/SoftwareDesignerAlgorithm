////��1��2��5��10��ֵ��Ӳ��
////����һ������
////����ж�������Ϸ�ʽ
//#include <iostream>
//using namespace std;
//
//void getWaysBySum(int faceValues[],int curFaceIndex,int faceNum,int currentSum,int sum,int& ways)
//{
//	if (currentSum == sum)
//	{
//		++ways;
//		return;
//	}
//	if (currentSum > sum)
//		return;
//	for (int faceIndex = curFaceIndex;faceIndex < faceNum;++faceIndex)
//	{
//		getWaysBySum(faceValues, faceIndex, faceNum, currentSum + faceValues[faceIndex], sum,ways);
//	}
//}
//
//int main()
//{
//	int faceValues[] = {1,2,5,10};
//	int ways = 0;
//	getWaysBySum(faceValues,0, 4, 0, 5, ways);
//	cout << ways;
//}