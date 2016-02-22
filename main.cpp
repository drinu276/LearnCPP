#include <iostream>

using namespace std;

void printThis(int a) {
    cout << a << endl;
}

int main()
{
    int x = 0;
    cout << "Enter a value: ";
    cin >> x;
    cout << "The value entered is: ";
    printThis(x);
    return 0;
}
