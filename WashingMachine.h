#include <string>

enum Color { RED, BLUE, GREEN, WHITE, BLACK };
enum Temperature { COLD, WARM, HOT };

struct WashingMachine {
    std::string brand;
    Color color;
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    Temperature heatingTemperature;
};

void displayWashingMachineInfo(const WashingMachine& machine);