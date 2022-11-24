#include <iostream>
#include<cmath>

using namespace std;

struct nrComplex
{
    double real, imaginar;
};
double Modulus(const nrComplex& num)
{
    return sqrt(pow(num.real, 2) + pow(num.imaginar, 2));
}

double Modulus(const double& real, const double& imaginar)
{
    return sqrt(pow(real, 2) + pow(imaginar, 2));
}


int main()
{
    nrComplex numarComplex{ 5.0,4.2 };
    double complexReal = 5.0, complexImaginar = 4.2;
    cout<< Modulus(numarComplex)<<'\n'<<Modulus(complexReal, complexImaginar)<<'\n';
    return 0;
}
