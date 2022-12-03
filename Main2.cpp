#include <iostream>
using namespace std;

void pattern(int left, int length); //helper function
void init_asterisk_pattern(int k); //caller function

int main() {
    cout<<"Enter number: ";
    int num;
    while(!(cin>>num) || num < 1) {
        cout<<"Error! Input must be integer >=1: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    init_asterisk_pattern(num);
    return 0;
}
""
// 1. Pattern of astricks and blanks
void init_asterisk_pattern(int k) {
    cout << "\n\t1. Pattern of asterisks and blanks\n\n";
    for(int i=0; i<k; i++) {
        pattern(0, 8);
    }
//    pattern(0, 8);
}

void pattern(int left, int length) {
    if (length == 0)
        return;         // STOP or BASE case

    pattern(left, length / 2);  // recursive call

    cout << '\t';

    for (int i = 0; i < left; ++i)
        cout << "  ";

    for (int i = 0; i < length; ++i)
        cout << "* ";

    cout << '\n';

    pattern(left + length / 2, length / 2);
}
