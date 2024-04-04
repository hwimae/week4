#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &str) {
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
