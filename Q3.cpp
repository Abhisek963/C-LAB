#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (char ch : str) {
        ch = tolower(ch);
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowels++;
                break;
            default:
                if (isalpha(ch))
                    consonants++;
        }
    }
    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << endl;
}
