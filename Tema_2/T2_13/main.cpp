#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct persoana {
    string Name;
    int age;
};

bool comparation(persoana A, persoana B) {
    return A.age > B.age;
}

int main()
{
    vector<persoana> person;

    person.push_back({ "Agatha", 1});

    person.push_back({ "Valeria", 28});

    person.push_back({ "Eusebiu", 19});

    person.push_back({ "Maricica",42 });

    person.push_back({ "Maximilian",69 });

    person.push_back({ "Agamemnon",18 });

    sort(person.begin(), person.end(), comparation);

    cout << "list contains:" << '\n';

    for (auto i = person.begin(); i != person.end(); i++)
    {
        cout << (*i).Name << " " << (*i).age << '\n';
    }
    return 0;
}
