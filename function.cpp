#include <iostream>
#include <cstring>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main(){
    
    int a;
    cout << "�ϳ� �� �Է�" << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "���� ������ ����" << endl;
    cin >> b;
    float c = circle(b);
    cout << "���� ���̴� " << c << "�̴�" << endl;

    return 0;
}

void cheers(int n){
    for(int i = 0; i < n; i++){
        cout << "Cheers!" << endl;
    }
}

float circle(int x){
    return x * x * PIE;
}