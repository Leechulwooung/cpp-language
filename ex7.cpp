#include<iostream>

using namespace std;

int main() {

	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	};

	MyStruct A[2] = {
		{"A", "B", 1, 2},
		{"C", "D", 3, 4}
	}; //struct를 배열로 선언해주기

	cout << A[0].name << endl;
	cout << A[0].position << endl;
	cout << A[0].height << endl;
	cout << A[0].weight << endl;

	/*
	MyStruct A = {
	"son",
	"striker",
	183,
	77
	}; //A라는 멤버변수로 struct를 만들고 초기화 시켜주는 작업

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	*/

	/*
	B = {   //struct 대괄호 끝과 ; 사이에 B라는 변수를 삽입해 줘야 한다.

	};

	cout << B.height << endl;
	*/
	return 0;
}