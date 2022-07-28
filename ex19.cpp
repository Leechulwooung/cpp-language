#include<iostream>

using namespace std;

void helloCPP(int, int);  //변수 이름 생략 가능, 데이터형만 써도 된다.

int main() {

	int times, time2;
	cout << "정수를 입력하십시오." << endl;
	cin >> times;
	cout << "정수를 한번 더 입력" << endl;
	cin >> time2;
	helloCPP(times, time2);      //전달인자(알규먼트)- times, time2 : 실제로 함수를 호출할 때 사용되는 변수들 
	return 0; 
}                                                    //전달인자와 매개변수의 순서가 일대일 대응되어야하고 데이터형(type)이 일치해야 한다.

void helloCPP(int n, int m) {     //매개변수(파라미터)- int n, int m : 함수의 특성을 나타내는 매개변수 
	for (int i = 0; i < n; i++)
		cout << "Hello, C++\n";

	for (int i = 0; i < m; i++)
		cout << "!\n";
}