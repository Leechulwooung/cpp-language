#include<iostream>

using namespace std;

void helloCPP(int, int);  //���� �̸� ���� ����, ���������� �ᵵ �ȴ�.

int main() {

	int times, time2;
	cout << "������ �Է��Ͻʽÿ�." << endl;
	cin >> times;
	cout << "������ �ѹ� �� �Է�" << endl;
	cin >> time2;
	helloCPP(times, time2);      //��������(�˱Ը�Ʈ)- times, time2 : ������ �Լ��� ȣ���� �� ���Ǵ� ������ 
	return 0; 
}                                                    //�������ڿ� �Ű������� ������ �ϴ��� �����Ǿ���ϰ� ��������(type)�� ��ġ�ؾ� �Ѵ�.

void helloCPP(int n, int m) {     //�Ű�����(�Ķ����)- int n, int m : �Լ��� Ư���� ��Ÿ���� �Ű����� 
	for (int i = 0; i < n; i++)
		cout << "Hello, C++\n";

	for (int i = 0; i < m; i++)
		cout << "!\n";
}