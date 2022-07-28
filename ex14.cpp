#include<iostream>

using namespace std;

int main() {
	// 중첩 루프 : 2차원 배열
	int temp[4][5] =   //4개의 원소를 가지고 그 4개의 원소는 각각 5개의 원소를 가진다.
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555},
		{1111,2222,3333,4444,5555}
	}; 

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}



	/*
	int a[10] = { 1, 2, 3, 4, 5 };
	
	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {
		cout << i;
	}
	*/

	return 0;
}