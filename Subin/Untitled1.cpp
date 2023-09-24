#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, mul;
    float div;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;

    cout << "The Sum is = " << sum << endl;
    cout << "The Sub is = " << sub << endl;
    cout << "The Mul is = " << mul << endl;
    cout << "The Div is = " << div << endl;
    return 0;
}
