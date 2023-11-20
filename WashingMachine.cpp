#include "WashingMachine.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int BLUE_TEXT = 9;
const int RED_TEXT = 12;
const int GREEN_TEXT = 10;
const int RESET_TEXT = 7;

void displayWashingMachineInfo(const WashingMachine& machine) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE_TEXT);
    cout << "Brand: " << machine.brand << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RESET_TEXT);
    cout << "Color: " << static_cast<int>(machine.color) << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE_TEXT);
    cout << "Dimensions: " << machine.width << "x" << machine.length << "x" << machine.height << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED_TEXT);
    cout << "Power: " << machine.power << " W" << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN_TEXT);
    cout << "Spin Speed: " << machine.spinSpeed << " rpm" << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RESET_TEXT);
    cout << "Heating Temperature: ";

    switch (machine.heatingTemperature) {
    case Temperature::COLD:
        cout << "COLD";
        break;
    case Temperature::WARM:
        cout << "WARM";
        break;
    case Temperature::HOT:
        cout << "HOT";
        break;
    }

    cout << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RESET_TEXT);
}