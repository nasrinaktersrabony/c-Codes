#include<iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter a character in lowercase: ";

    cin >> c;

    cout << char(c-32) << endl;
}
