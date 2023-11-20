#include "Boiler.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int BLUE_TEXT = 9;
const int RED_TEXT = 12;
const int RESET_TEXT = 10;

void setTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displayBoilerInfo(const Boiler& boiler) {
    setTextColor(BLUE_TEXT);
    cout << "Brand: " << boiler.brand << RESET_TEXT << endl;

    setTextColor(static_cast<int>(boiler.color));
    cout << "Color: " << static_cast<int>(boiler.color) << endl;

    setTextColor(RED_TEXT);
    cout << "Power: " << boiler.power << " W" << RESET_TEXT << endl;

    setTextColor(BLUE_TEXT);
    cout << "Volume: " << boiler.volume << " liters" << endl;

    setTextColor(RED_TEXT);
    cout << "Heating Temperature: " << boiler.heatingTemperature << "C" << RESET_TEXT << endl;

    setTextColor(RESET_TEXT);
}