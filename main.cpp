#include "Boiler.h"

int main() {
    Boiler myBoiler{ "XYZ", Color::WHITE, 2000, 50.0, 80 };

    displayBoilerInfo(myBoiler);

    return 0;
}