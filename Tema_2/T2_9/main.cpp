#include <iostream>

using namespace std;

template<typename T>
T calculSum(T primul, T doilea)
{
    return primul + doilea;
}

int main()
{
    int sumPrimul = 4, sumAldoilea = 10;
    cout << calculSum(sumPrimul, sumAldoilea) << '\n';
    return 0;
}
