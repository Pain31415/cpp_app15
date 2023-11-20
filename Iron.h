#include <string>

enum Color { RED, BLUE, GREEN, WHITE, BLACK };

struct Iron {
    std::string brand;
    std::string model;
    Color color;
    int minTemperature;
    int maxTemperature;
    bool steamFunction;
    int power;
};

void displayIronInfo(const Iron& iron);