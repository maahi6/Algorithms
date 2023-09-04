#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) {
        if (a > c) {
            cout << a << endl;
        } else {
            cout << c << endl;
        }
    } else {
        if (b > c) {
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
