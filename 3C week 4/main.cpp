#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str;
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

int countPalindromicNumbers(int a, int b) {
    int count = 0;
    for (int num = a; num <= b; ++num) {
        if (isPalindrome(num)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; t <= t; ++i) {
        int a, b;
        cout << i;
        std::cin >> a >> b;

        int result = countPalindromicNumbers(A, B);
        cout << result << endl;
    }

    return 0;
}
