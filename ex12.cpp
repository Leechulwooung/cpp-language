#include<iostream>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�." << endl;
	}

	for (int i = 5; i > 0; i--) {
		cout << i << "��°�Դϴ�." << endl;
	}


	//����������
	int a = 10;
	int b = 10;

	cout << "a�� " << a << "b�� " << b << endl;
	cout << "a++�� " << a++ << endl;
	cout << "++b�� " << ++b << endl;
	cout << "a�� " << a << ", b�� " << b << endl;

	return 0;
}