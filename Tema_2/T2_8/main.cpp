#include <iostream>

using namespace std;

template<typename T>
T getNr(T primulItem, T aldoileaItem, T altreileaItem) {
    if (primulItem >= aldoileaItem && primulItem >= altreileaItem)
        return primulItem;
    else if (aldoileaItem >= primulItem && aldoileaItem >= altreileaItem)
        return aldoileaItem;
    else
        return altreileaItem;
}

int main()
{
    int primul = 6, aldoilea = 8, altreilea = 9;
    float primulFloat = 4.0, aldoileaFloat = 7.6, altreileaFloat = -1.8;
    char primulString[] = "bbb", aldoileaString[] = "mnp", altreileaString[] = "btw";
    cout << getNr(primul, aldoilea, altreilea) << '\n';
	cout << getNr(primulFloat, aldoileaFloat, altreileaFloat) << '\n';
	cout << getNr(primulString, aldoileaString, altreileaString) << '\n';

    return 0;
}
