#include <string>

enum Color { RED, BLUE, GREEN, WHITE, BLACK };
enum Temperature { COLD, WARM, HOT };

struct Box {
    std::string brand;
    Color color;
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    Temperature heatingTemperature;

    Box() = default;
};