#include<iostream>

using namespace std;

int main() {

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1]�� " << p3[1] << endl;

	p3 = p3 + 1; //������ ������ 1�� ���ϰ� �Ǹ��� ���� �� �����Ͱ� ����Ű�� ���������� ����Ʈ �� ��ŭ �����Ѵ�.

	cout << "p3[0]�� " << p3[0] << endl;
	cout << "p3[1]�� " << p3[1] << endl;

	p3 = p3 - 1;
	delete[] p3; //new�� ����ϸ� �ݵ�� delete�� ����ؼ� ����� �޸𸮸� �ٽ� �޸� ���� ȯ���Ѵ�.

	return 0;
}