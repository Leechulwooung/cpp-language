#include <iostream>
#include <cstring>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main(){
    
    int a;
    cout << "하나 수 입력" << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이" << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << "이다" << endl;

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