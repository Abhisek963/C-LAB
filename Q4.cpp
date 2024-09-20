#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], str3[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    strcpy(str3, str1);
    cout << "\nAfter copying, str3 = " << str3 << endl;
    strcat(str1, str2);
    cout << "After concatenating, str1 = " << str1 << endl;
    int result = strcmp(str1, str2);
    if (result == 0)
        cout << "Strings are equal." << endl;
    else if (result > 0)
        cout << "str1 is greater than str2." << endl;
    else
        cout << "str1 is smaller than str2." << endl;
}
