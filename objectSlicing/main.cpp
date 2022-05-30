#include <iostream>

class Animal{
public:
    Animal()=default;
    Animal& operator=(Animal other) = delete;
    Animal(const Animal & other) = default;
    virtual void speak(){
        std::cout<<"Animal"<<std::endl;
    }
    virtual ~Animal()=default;
// private:
public:
    double animalData = 0.0f;
};

bool operator==(const Animal & lhs, const Animal& rhs){
    std::cout<<"animal comp"<<std::endl;
    return lhs.animalData == rhs.animalData;
};

class Cat : public Animal{
public:
    Cat(double d): catData{d}{};
    void speak() override{
        std::cout<<"meow~"<<std::endl;
    }
// private:
public:
    double catData;

};

bool operator==(const Cat & lhs, const Cat& rhs){
    std::cout<<"Cat comp"<<std::endl;
    return lhs.catData == rhs.catData;
};

int main(){
    Cat kitty{1.0};
    Cat nabi{2.0};

    if(kitty==nabi){
        std::cout<<"same !"<<std::endl;
    }
    // kitty.speak();
    // Animal & animalRef = kitty;
    // animalRef.speak();

    // std::cout<<"--------------------"<<std::endl;
    // Animal animalObj = kitty;
    // animalObj.speak();

    return 0;
}