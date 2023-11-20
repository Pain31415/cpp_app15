#include "Animal.h"
#include <iostream>
#include <windows.h>

using namespace std;

const int BLUE_TEXT = 9;
const int RED_TEXT = 12;
const int GREEN_TEXT = 10;
const int RESET_TEXT = 7;

void setTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void fillRandomData(Animal& animal) {
    static const char* randomNames[] = { "Buddy", "Fluffy", "Charlie", "Max", "Luna" };
    static const char* dogBreeds[] = { "Labrador", "German Shepherd", "Golden Retriever", "Bulldog", "Beagle" };
    static const char* catBreeds[] = { "Persian", "Siamese", "Maine Coon", "Ragdoll", "Sphynx" };
    static const char* parrotBreeds[] = { "Cockatiel", "Budgerigar", "Lovebird", "African Grey", "Macaw" };
    static const char* tigerBreeds[] = { "Bengal", "Siberian", "Malayan", "Indochinese", "Sumatran" };
    static const char* lionBreeds[] = { "African", "Asiatic", "Barbary", "Cape", "Sinhalese" };

    int randomNameIndex = rand() % (sizeof(randomNames) / sizeof(randomNames[0]));
    animal.name = randomNames[randomNameIndex];

    animal.species = static_cast<Species>(rand() % 5);

    switch (animal.species) {
    case Species::DOG:
        animal.breed = dogBreeds[rand() % (sizeof(dogBreeds) / sizeof(dogBreeds[0]))];
        animal.weight = 10.0 + static_cast<double>(rand() % 40);
        break;
    case Species::CAT:
        animal.breed = catBreeds[rand() % (sizeof(catBreeds) / sizeof(catBreeds[0]))];
        animal.weight = 3.0 + static_cast<double>(rand() % 15);
        break;
    case Species::PARROT:
        animal.breed = parrotBreeds[rand() % (sizeof(parrotBreeds) / sizeof(parrotBreeds[0]))];
        animal.weight = 0.2 + static_cast<double>(rand() % 1);
        break;
    case Species::TIGER:
        animal.breed = tigerBreeds[rand() % (sizeof(tigerBreeds) / sizeof(tigerBreeds[0]))];
        animal.weight = 50.0 + static_cast<double>(rand() % 150);
        break;
    case Species::LION:
        animal.breed = lionBreeds[rand() % (sizeof(lionBreeds) / sizeof(lionBreeds[0]))];
        animal.weight = 100.0 + static_cast<double>(rand() % 200);
        break;
    default:
        break;
    }

    animal.nickname = "RandomNickname" + to_string(rand() % 1000);
}

void fillAnimalData(Animal& animal) {
    fillRandomData(animal);
    cout << "Animal created successfully!\n";
}

void displayAnimalInfo(const Animal& animal) {
    setTextColor(BLUE_TEXT);
    cout << "Name: " << animal.name << RESET_TEXT << endl;

    setTextColor(GREEN_TEXT);
    cout << "Species: ";
    switch (animal.species) {
    case Species::DOG:
        cout << "Dog";
        break;
    case Species::CAT:
        cout << "Cat";
        break;
    case Species::PARROT:
        cout << "Parrot";
        break;
    case Species::TIGER:
        cout << "Tiger";
        break;
    case Species::LION:
        cout << "Lion";
        break;
    default:
        break;
    }
    cout << RESET_TEXT << endl;

    setTextColor(RED_TEXT);
    cout << "Nickname: " << animal.nickname << RESET_TEXT << endl;

    if (animal.species == Species::DOG || animal.species == Species::CAT || animal.species == Species::PARROT) {
        setTextColor(RED_TEXT);
        cout << "Breed: " << animal.breed << RESET_TEXT << endl;
        setTextColor(GREEN_TEXT);
        cout << "Weight: " << animal.weight << " kg" << RESET_TEXT << endl;
    }
}

void makeSound(const Animal& animal) {
    setTextColor(GREEN_TEXT);
    cout << "The " << RED_TEXT << animal.species << RESET_TEXT << " named " << GREEN_TEXT << animal.nickname << RESET_TEXT << " makes a sound." << endl;
}