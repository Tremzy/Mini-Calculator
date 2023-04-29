#include <iostream>
#include <math.h>
using namespace std;

int strlen(string x);
int plusone(int x);
int adder(int x, int y);
int multi(int x, int y);
int expon(int x, int y);

int main() {
    int num, num2;
    string str;
    char inpt = '0';
    char* mem = &inpt;
    cout << "What do you want? String length -> 's' | Adder -> 'a' | Multiplier -> 'm' | Add 1 -> 'p' | Exponentiation -> 'e'\n - ";
    cin >> inpt;
    switch (inpt)
    {
    case 's':
        cout << "What is your string? \n - ";
        cin >> str;
        cout << strlen(str);
        break;
    case 'a':
        cout << "What is your number 1? \n - ";
        cin >> num;
        cout << "What is your number 2? \n - ";
        cin >> num2;
        cout << adder(num, num2);
        break;
    case 'm':
        cout << "What is your number 1? \n - ";
        cin >> num;
        cout << "What is your number 2? \n - ";
        cin >> num2;
        cout << multi(num, num2);
        break;
    case 'p':
        cout << "What is your number? \n - ";
        cin >> num;
        cout << plusone(num);
        break;
    case 'e':
        cout << "What is your number 1? \n - ";
        cin >> num;
        cout << "What is your number 2? \n - ";
        cin >> num2;
        cout << expon(num, num2);
        break;
    default:
        cout << "Error at " << &mem;
        break;
    }
    return 0;
}
int strlen(string x) {
    int result;
    result = x.length();
    return result;
}
int adder(int x, int y) {
    int result;
    result = x + y;
    return result;
}
int plusone(int x) {
    int result;
    result = x + 1;
    return result;
}
int multi(int x, int y) {
    int result;
    result = x * y;
    return result;
}
int expon(int x, int y) {
    int result;
    result = pow(x, y);
    return result;
}