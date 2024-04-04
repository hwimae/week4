#include <bits/stdc++.h>

using namespace std;

void bobbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < 30; i++) {
    a[i]= rand() % 101;
        cout << a[i] << " "d;
    }
    cout << endl;
    bobbleSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
