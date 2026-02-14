#include <iostream>
using namespace std;

void scambia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b;
    cin >> a;
    cin >> b;

    scambia(a, b);

    cout << "a = " << a << ", b = " << b;

    return 0;
}
