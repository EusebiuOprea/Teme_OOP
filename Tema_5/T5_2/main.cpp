#include <iostream>

using namespace std;

class Forms {
    protected:
    string name;
    public:

    Forms(){
        cout << "Formularul a fost creat" << '\n';
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }

    ~Forms(){
        cout << "Formularul a fost distrus" << '\n';
    }
};
class Rectangle:public Forms {
    protected:
    int width;
    int height;
    public:

    Rectangle(){
        cout << "Dreptunghi creat" << '\n';
    }

    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }

    ~Rectangle(){
        cout << "Dreptunghi distrus" << '\n';
    }
};
int main()
{
    Forms f;
    Rectangle r;

    return 0;
}
