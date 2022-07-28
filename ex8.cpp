#include<iostream>

using namespace std;

int main() {
	/*
	열거체(enum) : 기호 상수를 만드는 것에 대한 또 다른 방법.
	*/
	enum spectrum {
		red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet //초기화는 정수, 초기화 하지 않은 열거자는 마지막으로 초기화한 열거자의 값에서 1씩 더한 값이 된다.
	};
	/*
	* 1. spectrum을 새로운 데이터형 이름으로 만든다.
	* 2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.
	열거체를 새로 선언 할 때는 열거채 내의 열거자들만 선언할 수 있다.
	열거체 내의 인덱스 순서에 대한 값이 결과로 나온다.
	열거형 내의 열거자가 정수로 나오지만 열거자 들끼리의 산술연산은 불가능하다.
	*/
	spectrum a = orange;
	cout << a << endl;
	/*
	int형 변수에 그 값을 대입하고자 할 때는 열거자들의 값은 int형 정수로 계산되어 대입 된다.
	*/
	int b;
	b = blue;
	b = b + 3;
	cout << b << endl;


	/*
	공용체(union)는 한 번에 한 가지의 데이터만 보관할 수 있다. 
	여러 가지 데이터형을 사용할 수 있지만 동시에 사용할 수는 없다. 
	메모리를 절약할 수 있는 장점을 가지고 있다.
	
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