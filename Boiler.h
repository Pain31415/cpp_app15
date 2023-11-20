#include <string>

enum Color { RED, BLUE, GREEN, WHITE, BLACK };

struct Boiler {
    std::string brand;
    Color color;
    int power;
    double volume;
    int heatingTemperature;
};

void displayBoilerInfo(const Boiler& boiler);