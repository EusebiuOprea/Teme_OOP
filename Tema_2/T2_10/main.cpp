#include <iostream>

using namespace std;

template<typename T>

void interschimbare(T& x, T& y)
{
    T aux{x};
    x = y;
    y = aux;
}

 template<size_t maxSize>

 void interschimbare(char(&x)[maxSize], char(&y)[maxSize])
{
    for (size_t i = 0; i != maxSize; ++i)
        swap(x[i], y[i]);
}
int main()
{
    int primul = 9, aldoilea = 2;
    float primulFloat = 4.2, aldoileaFloat = 6.9;
    char primulString[] = "bbb", aldoileaString[] = "lol";

    interschimbare(primul, aldoilea);
    interschimbare(primulFloat, aldoileaFloat);
    interschimbare(primulString, aldoileaString);

    cout << primul <<" "<< aldoilea <<'\n';
    cout << primulFloat << " " << aldoileaFloat <<'\n';
    cout << primulString << " " << aldoileaString <<'\n';
    return 0;
}
