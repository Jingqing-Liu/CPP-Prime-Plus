// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)

#include <iostream>

using namespace std;

int main()
{
    int distance;
    cout << "Enter a distance in furlongs: ";
    cin >> distance;
    cout << "Convert to yards: " << distance * 220 << endl;
    return 0;
}