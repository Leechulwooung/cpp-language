#include<iostream>

using namespace std;

int main() {
	/*
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "c++programing";

	cout << "�ȳ� ����" << name2 << "�Դϴ�. ������?\n";
	//cin >> name1;
	cin.get(name1, Size);

	cout << "��," << name1 << "�� ����� �̸���";
	cout << strlen(name1) << "�� �̰�";
	cout << sizeof(name1) << "����Ʈ ũ�� �迭 ����\n";
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���\n";
	name2[3] = '\0';
	cout << "�� �̸� ó�� �� ����";
	cout << name2 << endl;
	*/

	char a1[20];
	char a2[20] = "jauer";
	string b1;
	string b2 = "panda";
	
	b1 = b2;
	
	cout << b1 << endl;

	return 0;
}