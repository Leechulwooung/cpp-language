#include <iostream>

using namespace std;
/*
void countDown(int);

int main()
{
    countDown(5);

    return 0;
}

void countDown(int n)
{
    cout << "Counting..." << n << endl;
    if(n>0)
        countDown(n-1);
    cout << n << "번째 재귀함수" << endl;

}
*/
int func(int);

int main()
{
    int (*pf)(int);
    pf = func;

    cout << (*pf)(3) << endl;

    return 0;
}

int func(int n) {
    return n + 1;
}