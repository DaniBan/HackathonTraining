#include <iostream>
using namespace std;

class MyClass {       // The class
public:             // Access specifier
    int myNum;        // Attribute (int variable)
    char myString[100];  // Attribute (string variable)
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    strcpy(myObj.myString,"Some text");

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}