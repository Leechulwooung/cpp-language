#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하시오\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오.\n";
	cin >> temp->age;

	cout << "안녕 " << temp->name << "씨\n";
	cout << "당신은 " << temp->age << "살 이군요.\n";

	delete temp;

	/*
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //strlen 괄호 안에 변수의 크기를 반환한다.
	strcpy(ps, animal); //animal의 값을 ps에 저장하는 역할을 한다.

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
	*/

	return 0;
}