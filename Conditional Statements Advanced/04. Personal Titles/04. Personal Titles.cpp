// 04. Personal Titles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double age; cin >> age;
    string gender; cin >> gender;

    if (age < 16) {
        if (gender == "f") {
            cout << "Miss" << endl;
        }
        else {
            cout << "Master" << endl;
        }
    } else {
        if (gender == "f") {
            cout << "Ms." << endl;
        } else {
            cout << "Mr." << endl;
        }
    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
