#include<iostream>

using namespace std;

int main() {

	//���� || : ���� || ���� - ���� �ϳ��� true�̸� ����� true�̴�.
	//���� && : �� ���� ǥ������ �� true�� ���� ����� true�� �ȴ�.
	//������ ������ !(ǥ����)

	int age;
	cout << "����� ���̸� �Է��Ͻÿ�. ";
	cin >> age;

	if (0 > age || age > 100) {
		cout << "������ ����\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "����� 20�� �̱���.\n";
	}
	else {
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�.\n";
	}

	return 0;
}