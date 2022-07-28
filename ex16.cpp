#include<iostream>

using namespace std;

int main() {

	//논리합 || : 좌항 || 우항 - 둘중 하나만 true이면 결과는 true이다.
	//논리곱 && : 두 개의 표현식이 다 true일 때만 결과가 true가 된다.
	//논리부정 연산자 !(표현식)

	int age;
	cout << "당신의 나이를 입력하시오. ";
	cin >> age;

	if (0 > age || age > 100) {
		cout << "거짓말 ㄴㄴ\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "당신은 20대 이군요.\n";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}

	return 0;
}