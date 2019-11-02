////每一个物件只能选择一次
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//struct Obj
//{
//	int volume;
//	int value;
//};
//
//template<typename T>
//inline T max(T lhs, T rhs)
//{
//	return lhs >= rhs ? lhs : rhs;
//}
//
//template <typename T>
//inline T max(T lhs, T mid, T rhs)
//{
//	return max(max(lhs, mid),rhs);
//}
//
////动态规划递归解法
//int getMaxValueByCapacity(Obj objs[],int curObjIndex, int objsNum, int curCapacity)
//{
//	if (curObjIndex == objsNum)
//	{
//		return 0;
//	}
//	Obj* pCurObj = objs + curObjIndex;
//	int curVolumn = pCurObj->volume;
//	int curValue = pCurObj->value;
//	int newCapacity = curCapacity - curVolumn;
//	if (newCapacity < 0)
//	{
//		return getMaxValueByCapacity(objs, curObjIndex + 1, objsNum, curCapacity);
//	}
//		
//	int solutionOne = getMaxValueByCapacity(objs, curObjIndex + 1, objsNum, newCapacity) + curValue;
//	int solutionTwo = getMaxValueByCapacity(objs, curObjIndex + 1, objsNum, curCapacity);
//	return max(solutionOne, solutionTwo);
//}
//
//template<typename T = int>
//class Array2D
//{
//public:
//	Array2D(int row, int col):m_row(row),m_col(col)
//	{
//		m_data = new T[row * col];
//		assert(m_data != nullptr);
//		memset(m_data, 0, sizeof(T) * (row * col));
//	}
//	Array2D(const Array2D&) = delete;
//	Array2D& operator=(const Array2D&) = delete;
//	~Array2D() { delete[] m_data; }
//	T* operator[](size_t row) const
//	{
//		assert(row < m_row);
//		return m_data + row * m_col;
//	}
//	void show(ostream& os)
//	{
//		for (size_t row = 0;row < m_row;++row)
//		{
//			for (size_t col = 0;col < m_col;++col)
//			{
//				os << (*this)[row][col] << " ";
//			}
//			os << endl;
//		}
//	}
//
//private:
//	T* m_data;
//	size_t m_row;
//	size_t m_col;
//};
//
////动态规划
//int getMaxValueByCapacity(Obj objs[], int objsNum, int curCapacity)
//{
//	Array2D<> table(objsNum + 1, curCapacity + 1);
//	for (int j = 1;j < curCapacity + 1;++j)
//	{
//		for (int i = 0;i < objsNum;++i)
//		{
//			Obj* pObj = objs + i;
//			int volume = pObj->volume;
//			int value = pObj->value;
//			if (volume > j)
//			{
//				table[i + 1][j] = table[i][j];
//			}
//			else
//			{
//				table[i + 1][j] = max(table[i][j - volume] + value, table[i][j]);
//			}
//		}
//	}
//	table.show(cout);
//
//	//反向得出选择结果
//	bool* choices = new bool[objsNum];
//	assert(choices != nullptr);
//	int i = objsNum, j = curCapacity;
//	while (i != 0)
//	{
//		if (table[i][j] == table[i - 1][j])
//		{
//			choices[i - 1] = false;
//			i = i - 1;
//		}
//		else
//		{
//			choices[i - 1] = true;
//			j = j - objs[i - 1].volume;
//			i = i - 1;
//		}
//	}
//	cout << "choices are :";
//	for (int index = 0;index < objsNum;++index)
//	{
//		if (choices[index])
//		{
//			cout << index + 1 << " ";
//		}
//	}
//	cout << endl;
//	delete[] choices;
//
//	return table[objsNum][curCapacity];
//}
//
//int main()
//{
//	Obj objs[4] = {
//		{2,3},
//		{3,4},
//		{4,5},
//		{5,6}
//	};
//	int value = getMaxValueByCapacity(objs, 4, 8);
//	cout << value;
//}
