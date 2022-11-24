#include <iostream>
#include<cstring>

using namespace std;

int getSize(int b)
{
    return sizeof(b);
}
int getSize(double b)
{
    return sizeof(b);
}
int getSize(char* b)
{
    int lenght =strlen(b);
    return lenght;
}

int main()
{
    int olint = 9;
    double oldouble = 48.67;
    char olstr[] = "Ana are mere";
    cout << getSize(olint) << '\n' << getSize(oldouble) << '\n' << getSize(olstr);
    return 0;
}
