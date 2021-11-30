// KinematicEquationsCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float finalV;
    float initV;
    float acceleration;
    float seconds;
    int choice;

    cout << "Equation: V(f)=V(i)+at\n";
    cout << "1-Final Velocity\n2-Initial Velocity\n3-Acceleration\n4-Time\n";
    cout << "What value do you not have?:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Initial Velocity:";
        cin >> initV;
        cout << "Acceleration:";
        cin >> acceleration;
        cout << "Time:";
        cin >> seconds;
        finalV = initV + (acceleration * seconds);
        cout << "Your final velocity is " << finalV << endl;
        break;
    case 2:
        cout << "Final Velocity:";
        cin >> finalV;
        cout << "Acceleration:";
        cin >> acceleration;
        cout << "Time:";
        cin >> seconds;
        initV = finalV - (acceleration * seconds);
        cout << "Your Initial velocity is " << initV << endl;
        break;
    case 3:
        cout << "Final Velocity:";
        cin >> finalV;
        cout << "Initial Velocity:";
        cin >> initV;
        cout << "Time:";
        cin >> seconds;
        acceleration = (finalV - initV) / seconds;
        cout << "Your Acceleration is " << acceleration << endl;
        break;

    case 4:
        cout << "Final Velocity:";
        cin >> finalV;
        cout << "Initial Velocity:";
        cin >> initV;
        cout << "Acceleration:";
        cin >> acceleration;
        seconds = (finalV - initV) / acceleration;
        cout << "Your Time is " << seconds << endl;
        break;
    }
    return 0;
}