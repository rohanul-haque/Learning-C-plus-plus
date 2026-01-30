#include <iostream>

using namespace std;

int main()
{
    string firstName = "MD";
    string lastName = "Rohan";

    string fullName = firstName.append(lastName);

    cout << fullName << endl;
    cout << fullName.length() << endl;
    cout << fullName[0] << endl;
    cout << fullName[fullName.length() - 1] << endl;

    string name;

    cout << "Enter your name: ";

    cin >> name;

    cout << "Your name is " << name << endl;

    char greeting2[] = "Hello";

    cout << greeting2 << endl;

    return 0;
}