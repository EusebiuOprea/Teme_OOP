#include <iostream>

using namespace std;

void swap_Elements(int &a, int &b)
{
    int aux=a;
    a=b;
    b=aux;
}

int main()
{
   int a, b;
    cin >>a >> b;
    swap_Elements(a,b);
    cout << a << " " << b;
    return 0;
}
