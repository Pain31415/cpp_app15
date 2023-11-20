#include "box.h"
#include <iostream>

using namespace std;

void displayBoxInfo(const Box& box) {
    cout << "Brand: " << box.brand << endl;
    cout << "Color: " << static_cast<int>(box.color) << endl;
    cout << "Dimensions: " << box.width << "x" << box.length << "x" << box.height << endl;
    cout << "Power: " << box.power << " W" << endl;
    cout << "Spin Speed: " << box.spinSpeed << " rpm" << endl;
    cout << "Heating Temperature: ";

    switch (box.heatingTemperature) {
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
}