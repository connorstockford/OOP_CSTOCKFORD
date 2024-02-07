#include <string>

class K9 
{
    private:
        std::string Name;
        std::string Color;
        std::string Breed;
        unsigned int Age;
        float Weight;
        std::string Group;

    public:
        explicit K9(std::string Name, std::string Breed, std::string Color, unsigned int Age, float weight, std::string group);

        std::string getName();
        std::string getBreed();
        std::string getColor();
        unsigned int getAge();
        float getWeight();
        std::string getGroup();
        void getK9();


        void setName(std::string aName);
        void setBreed(std::string aBreed);
        void setColor(std::string aColor);
        void setAge(unsigned int anAge);
        void setWeight(float aWeight);
        void setGroup(std::string aGroup);
        void setK9();
};
