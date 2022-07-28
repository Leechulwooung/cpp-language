#include<iostream>

using namespace std;

int main() {

	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1]은 " << p3[1] << endl;

	p3 = p3 + 1; //포인터 변수에 1을 더하게 되면은 값이 그 포인터가 가르키는 데이터형의 바이트 수 만큼 증가한다.

	cout << "p3[0]은 " << p3[0] << endl;
	cout << "p3[1]은 " << p3[1] << endl;

	p3 = p3 - 1;
	delete[] p3; //new를 사용하면 반드시 delete를 사용해서 사용한 메모리를 다시 메모리 폴로 환수한다.

	return 0;
}