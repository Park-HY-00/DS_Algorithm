#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 벡터 생성
	vector<int> v1;						// int 값을 저장할 비어 있는 벡터 생성
	vector<int> v2(10);					// int 값 10개를 저장할 벡터 생성하고 0으로 초기화
	vector<int> v3(10, 1);				// int 값 10개를 저장할 벡터 생성하고 1로 초기화
	vector<int> v4{10, 20, 30, 40, 50}; // 유니폼 초기화(uniform initialization)

	vector<int> v5(v4);							// v4를 복사하여 v5 생성
	vector<int> v6(v4.begin(), v4.begin() + 3); // v4의 처음 3개 원소를 이용하여 v6 생성

	// 벡터 원소 참조
	for (int i = 0; i < v6.size(); i++)
	{
		cout << v6[i] << endl;
	}

	// 정수형 2차원 배열. 2행 3열. 0으로 초기화
	vector<vector<int>> mat1(2, vector<int>(3, 0));

	// uniform initialization
	vector<vector<int>> mat2{{1, 2, 3}, {4, 5, 6}};

	// 2차원 벡터 출력
	for (int r = 0; r < mat2.size(); r++)
	{
		for (int c = 0; c < mat2[r].size(); c++)
		{
			cout << mat2[r][c] << " ";
		}
		cout << endl;
	}
}