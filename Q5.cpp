#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* ptr = arr;
    cout << "Accessing array elements using pointer:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " = " << *(ptr + i) << endl;
    }
}
