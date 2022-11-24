#include <iostream>
#include <string>
using namespace std;

struct Student{
    string st_name;
    unsigned int st_grade;
};

template <typename T>
    T Max(T x, T y){
        if(x.st_grade < y.st_grade)
            return y;
        return x;
    }

int main(){
    Student x,y;
    x.st_grade=8;
    y.st_grade=10;
    cout<<Max(x,y).st_grade;
    return 0;
}
