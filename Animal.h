#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

enum Species { DOG, CAT, PARROT, TIGER, LION };

struct Animal {
    std::string name;
    Species species;
    std::string nickname;
    std::string breed;
    double weight;
};

void setTextColor(int color);
void fillAnimalData(Animal& animal);
void displayAnimalInfo(const Animal& animal);
void makeSound(const Animal& animal);