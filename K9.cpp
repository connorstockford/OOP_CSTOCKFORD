#include <string>
#include <iostream>

#include "k9.h"

K9::K9(std::string Name, std::string Breed, std::string Color, unsigned int Age, float Weight, std::string Group):
        Name{Name}, Breed{Breed}, Color{Color}, Age{Age}, Weight{Weight}, Group{Group}
        {
            //Intentional Blank
        } 

std::string K9::getName()
{
    return Name;
}

std::string K9::getBreed()
{
    return Breed;
}

std::string K9::getColor()
{
    return Color;
}

unsigned int K9::getAge()
{
    return Age;
}

float K9::getWeight()
{
    return Weight;
}

std::string K9::getGroup()
{
    return Group;
}

void K9::setName(std::string aName)
{
    Name = aName;
}

void K9::setBreed(std::string aBreed)
{
    Breed = aBreed;
}

void K9::setColor(std::string aColor)
{
    Color = aColor;
}

void K9::setAge(unsigned int anAge)
{
    Age = anAge;
}

void K9::setWeight(float aWeight)
{
    Weight = aWeight;
}

void K9::setGroup(std::string aGroup)
{
    Group = aGroup;
}

void K9::getK9(){
    std::cout << "The name is:" << getName() << std::endl;
    std::cout << "The breed is:" << getBreed() << std::endl;
    std::cout << "The color is:" << getColor() << std::endl;
    std::cout << "The age is:" << getAge() << std::endl;
    std::cout << "The weight is:" << getWeight() << std::endl;
    std::cout << "The group is:" << getGroup() <<std::endl;

}
void K9::setK9()
{
    std::cout << "Enter the name: ";
    std::cin >> Name;
    std::cout << "Enter the breed: ";
    std::cin >> Breed;
    std::cout << "Enter the color: ";
    std::cin >> Color;
    std::cout << "Enter the age: ";
    std::cin >> Age;
    std::cout << "Enter the weight: ";
    std::cin >> Weight;
    std::cout << "Enter the group: ";
    std::cin >> Group;

}

