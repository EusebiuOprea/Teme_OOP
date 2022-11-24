#include <iostream>
#include <string>

using namespace std;

int Sum(int& n1, char& sign , int& n2)
{
    if (sign == '+')
        return n1 + n2;
    else
        if (sign == '-')
            return n1 - n2;
}

int main()
{
    char sign;

    int  n, m;

    cin >> n >> sign >> m;

    cout << Sum(n, sign, m);

    return 0;
}
