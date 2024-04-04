#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 10000) {
        return 1;
    }

    bool seen[10001] = {false};

    bool has_duplicate = false;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (seen[num]) {
            has_duplicate = true;
            break;
        }

        seen[num] = true;
    }

    if (has_duplicate) {
        cout << "Yes" << endl;
    } else {
        cout << "No" <<     endl;
    }

    return 0;
}
