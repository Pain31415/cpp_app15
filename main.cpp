#include "WashingMachine.h"

int main() {
    WashingMachine myWashingMachine{ "ABC", Color::WHITE, 60.0, 80.0, 100.0, 1200, 800, Temperature::WARM };

    displayWashingMachineInfo(myWashingMachine);

    return 0;
}