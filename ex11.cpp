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

	cout << "����� �̸��� �Է��Ͻÿ�\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
	cin >> temp->age;

	cout << "�ȳ� " << temp->name << "��\n";
	cout << "����� " << temp->age << "�� �̱���.\n";

	delete temp;

	/*
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //strlen ��ȣ �ȿ� ������ ũ�⸦ ��ȯ�Ѵ�.
	strcpy(ps, animal); //animal�� ���� ps�� �����ϴ� ������ �Ѵ�.

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;
	*/

	return 0;
}