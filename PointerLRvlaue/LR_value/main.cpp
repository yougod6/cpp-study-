#include <string>

void storeByValue(std::string s)
{
    std::string b = s;
};

void stordByLRef(std::string & s)
{
    std::string b = s;
};

void storeByRRef(std::string && s)
{
    std::string b = std::move(s); 
};

int main()
{
    std::string a = "abc";
    storeByValue(a);
    stordByLRef(a);
    storeByRRef(std::move(a));
}