#include <iostream>

#include <string>

#include <vector>


// Diet.h 
#ifndef DIET_H_
#define DIET_H_

class Diet {
    std::string type;
public:
    Diet(const std::string& type) : type(type) {}
    std::string getType() const { return type; }
};

#endif // DIET_H_


// Habitat.h 
#ifndef HABITAT_H_
#define HABITAT_H_

class Habitat {
    std::string description;
public:
    Habitat(const std::string& description) : description(description) {}
    std::string getDescription() const { return description; }
};

#endif // HABITAT_H_


// Animal.h 
#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
protected:
    std::string name;
    int age;
    const std::string species;
    Diet diet;
    Habitat habitat;

public:
    Animal(const std::string& name, int age, const std::string& species,
           const Diet& diet, const Habitat& habitat)
        : name(name), age(age), species(species), diet(diet), habitat(habitat) {}

    virtual ~Animal() = default;

    virtual void makeSound() const = 0;
    virtual void eat() const = 0;

    void displayInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age
                  << "\nSpecies: " << species
                  << "\nDiet: " << diet.getType()
                  << "\nHabitat: " << habitat.getDescription()
                  << "\n-------------------------\n";  // For better readability
    }
};

#endif // ANIMAL_H_


// Lion.h 
#ifndef LION_H_
#define LION_H_

class Lion : public Animal {
public:
    Lion(const std::string& name, int age, const Diet& diet, const Habitat& habitat)
        : Animal(name, age, "Lion", diet, habitat) {}

    void makeSound() const override {
        std::cout << name << " roars!\n";
    }

    void eat() const override {
        std::cout << name << " eats meat.\n";
    }
};

#endif // LION_H_


// Elephant.h 
#ifndef ELEPHANT_H_
#define ELEPHANT_H_

class Elephant : public Animal {
public:
    Elephant(const std::string& name, int age, const Diet& diet, const Habitat& habitat)
        : Animal(name, age, "Elephant", diet, habitat) {}

    void makeSound() const override {
        std::cout << name << " trumpets!\n";
    }

    void eat() const override {
        std::cout << name << " eats grass and fruits.\n";
    }
};

#endif // ELEPHANT_H_


// Gnu.h 
#ifndef GNU_H_
#define GNU_H_

class Gnu : public Animal {
public:
    Gnu(const std::string& name, int age, const Diet& diet, const Habitat& habitat)
        : Animal(name, age, "Gnu", diet, habitat) {}

    void makeSound() const override {
        std::cout << name << " grunts!\n";
    }

    void eat() const override {
        std::cout << name << " grazes on grass.\n";
    }
};

#endif // GNU_H_


// Aardvark.h 
#ifndef AARDVARK_H_
#define AARDVARK_H_

class Aardvark : public Animal {
public:
    Aardvark(const std::string& name, int age, const Diet& diet, const Habitat& habitat)
        : Animal(name, age, "Aardvark", diet, habitat) {}

    void makeSound() const override {
        std::cout << name << " snuffles!\n";
    }

    void eat() const override {
        std::cout << name << " eats ants and termites.\n";
    }
};

#endif // AARDVARK_H_


// Main Program 
void makeAllAnimalsSound(const std::vector<Animal*>& zoo) {
    for (const auto& animal : zoo) {
        animal->makeSound();
    }
}

int main() {
    std::vector<Animal*> zoo;

    Diet carnivore("Carnivore");
    Diet herbivore("Herbivore");
    Diet insectivore("Insectivore");

    Habitat savannah("Savannah");
    Habitat jungle("Jungle");
    Habitat grasslands("Grasslands");
    Habitat burrow("Burrows");

    zoo.push_back(new Lion("Leo", 5, carnivore, savannah));
    zoo.push_back(new Lion("Nala", 4, carnivore, savannah));
    zoo.push_back(new Elephant("Dumbo", 10, herbivore, jungle));
    zoo.push_back(new Elephant("Ella", 8, herbivore, jungle));
    zoo.push_back(new Gnu("Garry", 6, herbivore, grasslands));
    zoo.push_back(new Aardvark("Arnold", 3, insectivore, burrow));

    makeAllAnimalsSound(zoo);

    std::cout << "\nAnimal Details:\n";
    for (const auto& animal : zoo) {
        animal->displayInfo();
        animal->eat();
    }

    for (auto animal : zoo) {
        delete animal;
    }

    return 0;
}