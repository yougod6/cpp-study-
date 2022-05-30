#include <iostream>

class Animal{
public:
    virtual void speak();
    virtual ~Animal()=default;
private:
    double animalData;
};

class Lion : public Animal{
public:
    virtual void speak();
private:
    double LionData;
};

int main(){
    Animal * polyAnimal = new Lion();
    polyAnimal->speak();
    delete polyAnimal;
    return 0;
}