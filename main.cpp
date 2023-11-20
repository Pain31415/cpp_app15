#include "Iron.h"

int main() {
    Iron myIron{ "XYZ", "Model123", Color::BLUE, 120, 220, true, 1500 };

    displayIronInfo(myIron);

    return 0;
}