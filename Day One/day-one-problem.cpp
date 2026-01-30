#include <iostream>

using namespace std;

int main()
{
    // 🧩 1️⃣ Print Output
    cout << "Welcome to C++ Programming" << endl;

    // 🧩 2️⃣ Variables & Data Types
    int num1;

    cout << "Enter a integer number: ";

    cin >> num1;

    double num2;

    cout << "Enter a decimal number: ";

    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << "= " << num1 + num2 << endl;

    // 🧩 3️⃣ User Input (String)

    string name;

    cout << "Enter your name: " << endl;

    cin >> name;

    cout << "Hello " << name << endl;

    // 🧩 4️⃣ Operators

    int x;
    cout << "Enter a number: ";
    cin >> x;
    int y;
    cout << "Enter another number: ";
    cin >> y;

    cout << "Sum of " << x << " and " << y << " is " << x + y << endl;
    cout << "Subtraction of " << x << " and " << y << " is " << x - y << endl;
    cout << "Multiplication of " << x << " and " << y << " is " << x * y << endl;
    cout << "Division of " << x << " and " << y << " is " << x / y << endl;
    cout << "Modulus of " << x << " and " << y << " is " << x % y << endl;

    // 🧩 5️⃣ Boolean
    bool isLoggedIn = true;

    cout << (isLoggedIn ? "Login Successful" : "Login Failed") << endl;

    // 🧩 6️⃣ Condition(if - else)
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are adult" << endl;
    }
    else
    {
        cout << "You are a minor" << endl;
    }

    // 🧩 7️⃣ Grade Calculator
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "Congratulations! You got A+ grade" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "You got A grade" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "You got B grade" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "You got C grade" << endl;
    }
    else if (marks >= 40 && marks < 50)
    {
        cout << "You got D grade" << endl;
    }
    else if (marks >= 33 && marks < 40)
    {
        cout << "You got E grade" << endl;
    }
    else if (marks >= 0 && marks < 33)
    {
        cout << "You are Fail" << endl;
    }
    else
    {
        cout << "Invalid marks!";
    }

    // 🧩 8️⃣ String + Condition
    string role;

    cout << "Enter your role: ";
    cin >> role;

    cout << (role == "admin" ? "Welcome admin" : "You are not admin") << endl;

    return 0;
}