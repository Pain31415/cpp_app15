#include "Iron.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int BLUE_TEXT = 9;
const int RED_TEXT = 12;
const int RESET_TEXT = 7;

void setTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displayIronInfo(const Iron& iron) {
    setTextColor(BLUE_TEXT);
    cout << "Brand: " << iron.brand << endl;

    setTextColor(BLUE_TEXT);
    cout << "Model: " << iron.model << endl;

    setTextColor(static_cast<int>(iron.color));
    cout << "Color: " << static_cast<int>(iron.color) << endl;

    setTextColor(RESET_TEXT);
    cout << "Temperature Range: " << iron.minTemperature << "C - " << iron.maxTemperature << "C" << endl
        << "Steam Function: " << (iron.steamFunction ? "Yes" : "No") << endl;

    setTextColor(RED_TEXT);
    cout << "Power: " << iron.power << " W" << endl;

    setTextColor(RESET_TEXT);
}