#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "\n";
        cout << "'''The string is a palindrome'''" << endl;
    } else {
        cout << "'''The string is not a palindrome'''" << endl;
    }
    return 0;
}
