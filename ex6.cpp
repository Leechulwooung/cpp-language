#include<iostream>

using namespace std;

int main() {
	/*
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "c++programing";

	cout << "안녕 나는" << name2 << "입니다. 성함이?\n";
	//cin >> name1;
	cin.get(name1, Size);

	cout << "음," << name1 << "씨 당신의 이름은";
	cout << strlen(name1) << "자 이고";
	cout << sizeof(name1) << "바이트 크기 배열 저장\n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요\n";
	name2[3] = '\0';
	cout << "내 이름 처음 세 문자";
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