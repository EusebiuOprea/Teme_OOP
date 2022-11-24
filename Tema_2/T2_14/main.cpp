#include <iostream>
#include<cstdlib>

using namespace std;

double axb(double& a,double& b){
    try{
        if (a == 0.0)
            throw "Can't divide by 0!";
                return -b/a;
        }
    catch ( char* exceptie)
    {
          cout << exceptie;
          exit(EXIT_FAILURE);
    }
}
int main()
{
    double a = 5.0, b = 2.0;
    cout <<axb(a, b);
    return 0;
}
