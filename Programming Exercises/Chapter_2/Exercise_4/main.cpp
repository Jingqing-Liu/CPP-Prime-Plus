// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:
//  Enter your age: 29
//  Your age in months is 384.

#include <iostream>

using namespace std;

void twoTimes(void);
void oneTime(void);

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in month is " << age * 12 << "." << endl;
    return 0;
}