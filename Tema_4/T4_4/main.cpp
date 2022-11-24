#include <iostream>
using namespace std;
class Driver {
public:
    string name;
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};

class Car {
public:

    Driver driver;
    Car(string driverName) {
        this->driver.setName(driverName);
    }
    void setDriver(Driver driverName) {
        this->driver=driverName;
    }

    Driver getDriver() {

        return this->driver;
    }
    void swapDrivers(Car x, Car y) {
        auto t = x.getDriver();
        x.setDriver(y.getDriver());
        y.setDriver(t);
        cout << "Name: " << x.getDriver().getName() << endl;
        cout << "Name: " << y.getDriver().getName() << endl;}
};

int main() {

    Car x("Ebi");
    cout << "Name: " << x.getDriver().getName() << endl;
    Car y("Ana");
    cout << "Name: " << y.getDriver().getName() << endl;
    x.swapDrivers(x,y);


    return 0;
}
