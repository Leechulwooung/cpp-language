#include<iostream>

using namespace std;

int main() {
	/*
	����ü(enum) : ��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���.
	*/
	enum spectrum {
		red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet //�ʱ�ȭ�� ����, �ʱ�ȭ ���� ���� �����ڴ� ���������� �ʱ�ȭ�� �������� ������ 1�� ���� ���� �ȴ�.
	};
	/*
	* 1. spectrum�� ���ο� �������� �̸����� �����.
	* 2. red, orange, yellow.. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� �����.
	����ü�� ���� ���� �� ���� ����ä ���� �����ڵ鸸 ������ �� �ִ�.
	����ü ���� �ε��� ������ ���� ���� ����� ���´�.
	������ ���� �����ڰ� ������ �������� ������ �鳢���� ��������� �Ұ����ϴ�.
	*/
	spectrum a = orange;
	cout << a << endl;
	/*
	int�� ������ �� ���� �����ϰ��� �� ���� �����ڵ��� ���� int�� ������ ���Ǿ� ���� �ȴ�.
	*/
	int b;
	b = blue;
	b = b + 3;
	cout << b << endl;


	/*
	����ü(union)�� �� ���� �� ������ �����͸� ������ �� �ִ�. 
	���� ���� ���������� ����� �� ������ ���ÿ� ����� ���� ����. 
	�޸𸮸� ������ �� �ִ� ������ ������ �ִ�.
	
	union MyUnion
	{
		int intval;
		long longval;
		float floatval;
	};

	MyUnion test;

	test.intval = 3;
	cout << test.intval << endl;
	test.longval = 33;
	cout << test.intval << endl;
	cout << test.longval << endl;
	test.floatval = 3.3;
	cout << test.intval << endl;
	cout << test.longval << endl;
	cout << test.floatval << endl;
	*/
	return 0;
}