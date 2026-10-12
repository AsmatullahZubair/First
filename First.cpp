#include <iostream>
using namespace std;

// Function Declaration
void BirthYear(string name, int age);

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    BirthYear(name, age);

    system("pause");
    return 0;
}

// Function Definition
void BirthYear(string name, int age) {
    cout << "Hi! " << name << " You were born in: " << 2025 - age;
}
