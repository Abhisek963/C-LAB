#include <iostream>
#include<cmath>
using namespace std;

struct Distance {
    int feet;
    float inches;
};
Distance addDistances(Distance d1, Distance d2) {
    Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;
    if (result.inches >= 12.0) {
        result.feet += int(result.inches / 12);
        result.inches = fmod(result.inches, 12.0);
    }
    return result;
}
int main() {
    Distance d1, d2, result;
    cout << "Enter the first distance:\n";
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;
    cout << "\nEnter the second distance:\n";
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;
    result = addDistances(d1, d2);
    cout << "\nTotal Distance = " << result.feet << " feet " << result.inches << " inches" << endl;
}

