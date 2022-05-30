#include <iostream>
class Cat{
public:
    void speak();
private:
    int mAge;
};

int main(){
    std::cout<< sizeof(Cat) <<std::endl;
    return 0;
}