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
	}; //struct�� �迭�� �������ֱ�

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
	}; //A��� ��������� struct�� ����� �ʱ�ȭ �����ִ� �۾�

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	*/

	/*
	B = {   //struct ���ȣ ���� ; ���̿� B��� ������ ������ ��� �Ѵ�.

	};

	cout << B.height << endl;
	*/
	return 0;
}