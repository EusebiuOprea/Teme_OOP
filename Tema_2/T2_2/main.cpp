#include <iostream>

using namespace std;

int f(const float& n, const bool& isRoundedTo100 = false)
{
    if (isRoundedTo100)
    {
        int no;
        no=n;
        if(no % 100 < 50)
            return no - (no%100);
        else
            return no + 100 - (no%100);
    }
    return n;
}

int main()
{
    float x = 78.34;
    cout << f(x) << '\n';
    cout << f(x, true)<< '\n';
    return 0;
}
