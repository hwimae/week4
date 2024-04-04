#include <iostream>
#include <cstring>

using namespace std;

/* c
char a[] = "abcd";

extern char b[];

int main() {
    cout << "Kich thuoc thuc cua mang a: " << sizeof(a) << endl;

    cout << "Kich thuoc thuc cua mang b: " << sizeof(b) << endl;

    return 0;
}*/


/* b
char outside_large[10] = "abcd";

int main() {

    char inside_large[10] = "abcd";
    cout << outside_large << endl;

    cout << inside_large << endl;

    char outside_small[3] = "ab";

    cout << outside_small << endl;

    char inside_small[3] = "ab";
    cout << inside_small << endl;

    return 0;
}*/


/* a
char string_array[20];

int main() {
    char string_main[20];

    for (int i = 0; i < 20; i++) {
        cout << string_array[i] << " ";
    }
    cout << endl;
    cout << string_array << endl;

    for (int i = 0; i < 20; i++) {
        cout << string_main[i] << " ";
    }
    cout << endl;

    cout << string_main << endl;

    return 0;
}*/
