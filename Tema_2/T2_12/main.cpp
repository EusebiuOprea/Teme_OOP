#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
};

struct Cat
{
    string name;
    int age;
    Person* owner;
};

struct Car
{
    string producer, licenseNumber;
    int age;
};

template<typename A, typename B>

int MinAge(A first, B second)
{
    return min(first.age, second.age);
}

template<typename A, typename B>

bool EqualAge(A first, B second)
{
    if(first.age == second.age)
        return true;
    return false;
}

int main()
{
    Person persoana{ "Eusebiu", 19 };
    Cat pisic{ "Mitzi", 3, &persoana };
    Car masina{ "Mazda Miata", "DJ15EBI", 2 };
    cout << MinAge(persoana, masina) << '\n'<< EqualAge(pisic, persoana);
}
