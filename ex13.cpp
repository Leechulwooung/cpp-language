#include <iostream>

using namespace std;

int main() {
	/*
	for (int i = 0; i < 3; i++) {
		cout << "for문 입니다." << endl;
	}

	int j = 0;
	while (j < 3) {
		cout << "while문 입니다." << endl;
		j++;
	}
	*/
	bool k = false;
	do {                                    //while(cond)이 밑에 있으므로 적어도 한 번은 실행이 된다.
		cout << "while문 입니다." << endl;
	} while (k);

	/*
	string str = "chulwooung";

	int i = 0;
	bool a = true;
	bool b = false;
	while (b) {

		cout << "a" << endl;
	}
	*/
	return 0;
}