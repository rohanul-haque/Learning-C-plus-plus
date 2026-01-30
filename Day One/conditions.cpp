#include <iostream>
using namespace std;

int main()
{
    // Adult check
    if (30 > 18)
    {
        cout << "You are adult\n";
    }
    else
    {
        cout << "You are not adult\n";
    }

    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "Congratulations! You got A+ grade" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Congratulations! You got A grade" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Congratulations! You got B grade" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "Congratulations! You got C grade" << endl;
    }
    else if (marks >= 40 && marks < 50)
    {
        cout << "Congratulations! You got D grade" << endl;
    }
    else if (marks >= 33 && marks < 40)
    {
        cout << "Congratulations! You got E grade" << endl;
    }
    else if (marks >= 0 && marks < 33)
    {
        cout << "You are Fail" << endl;
    }
    else
    {
        cout << "Invalid marks!";
    }

    // nested if

    bool isMale = true;

    cout << (isMale ? "You are Male" : "You are Female") << endl;

    return 0;
}
