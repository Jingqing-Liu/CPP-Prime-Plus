// myfirst.cpp -- displays a message

/* a C-style comment */

#include <iostream>                           // a PREPROCESSOR directive
int main()                                    // function header
{                                             // start of function body
    using namespace std;                      // make definitions visible       //using std::cout       //make cout available
    cout << "Come up and C++ me some time.";  // message
    cout << endl;                             // start a new line
    cout << "You won't regret it!" << endl;   // more output

    cout << "The Good, the";
    cout << "Bad, ";
    cout << "and the Ukulele";
    cout << endl;

    cout << "What's next?\n";

    cout << "Pluto is a dwarf planet.\n";
    cout << "Pluto is a dwarf planet." << endl;

    cout << "\n";
    cout << endl;
    
    // If the output window closes before you can read it,
    // add the following code:
    cout << "Press any key to continue." <<endl;
	cin.get();                                                  
    
    return 0;                                 // terminate main()
}                                             // end of function body

