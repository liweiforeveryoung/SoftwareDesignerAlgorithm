//#include <iostream>
//#include <algorithm>
//#include <cassert>
//
//int getLCSSolution_1(char lhsArr[], int lhsLen, char rhsArr[], int rhsLen)
//{
//	if (lhsLen == 0 || rhsLen == 0)
//		return 0;
//	if (lhsArr[lhsLen - 1] == rhsArr[rhsLen - 1])
//	{
//		return getLCSSolution_1(lhsArr, lhsLen - 1, rhsArr, rhsLen - 1) + 1;
//	}
//	else
//		return std::max(getLCSSolution_1(lhsArr, lhsLen, rhsArr, rhsLen - 1), getLCSSolution_1(lhsArr, lhsLen - 1, rhsArr, rhsLen));
//}
//
//template<typename T = int>
//class Array2D
//{
//public:
//	Array2D(int row, int col) :m_row(row), m_col(col)
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
//		assert(row < m_row && row >= 0);
//		return m_data + row * m_col;
//	}
//	void show(std::ostream& os)
//	{
//		for (size_t row = 0; row < m_row; ++row)
//		{
//			for (size_t col = 0; col < m_col; ++col)
//			{
//				os << (*this)[row][col] << " ";
//			}
//			os << std::endl;
//		}
//	}
//
//private:
//	T* m_data;
//	size_t m_row;
//	size_t m_col;
//};
//
//int getLCSSolution_2(char lhsArr[], int lhsLen, char rhsArr[], int rhsLen)
//{
//	int lhsEndIndex = lhsLen - 2;
//	int rhsEndIndex = rhsLen - 2;
//	Array2D<> table(lhsLen, rhsLen);
//	for (int lhsIndex = 0;lhsIndex <= lhsEndIndex;++lhsIndex)
//	{
//		for (int rhsIndex = 0;rhsIndex <= rhsEndIndex;++rhsIndex)
//		{
//			if (lhsArr[lhsIndex] == rhsArr[rhsIndex])
//			{
//				table[lhsIndex + 1][rhsIndex + 1] = table[lhsIndex][rhsIndex] + 1;
//			}
//			else
//			{
//				table[lhsIndex + 1][rhsIndex + 1] = std::max(
//					table[lhsIndex][rhsIndex + 1], table[lhsIndex + 1][rhsIndex]
//				);
//			}
//		}
//	}
//	table.show(std::cout);
//	return table[lhsEndIndex + 1][rhsEndIndex + 1];
//}
//
//int main()
//{
//	char lhsArr[] = "flaskdwmf";
//	int lhsLen = sizeof(lhsArr) / sizeof(char);
//	char rhsArr[] = "fgwzkfdixf";
//	int rhsLen = sizeof(rhsArr) / sizeof(char);
//
//	int lcsLen = getLCSSolution_2(lhsArr, lhsLen, rhsArr, rhsLen);
//	std::cout << lcsLen;
//}
