#include "Animal.h"

const int MAX_ANIMALS = 10;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    Animal animals[MAX_ANIMALS];
    int animalCount = 0;

    for (int i = 0; i < MAX_ANIMALS; ++i) {
        fillAnimalData(animals[i]);
        animalCount++;
    }

    for (int i = 0; i < animalCount; ++i) {
        displayAnimalInfo(animals[i]);
        makeSound(animals[i]);
        cout << endl;
    }

    return 0;
}