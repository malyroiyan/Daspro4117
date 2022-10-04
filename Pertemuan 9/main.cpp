#include <iostream>

using namespace std;

int main()
{
    /*
    cin >> x;
    if (x % 2 ==0) {
        cout << "Genap" << endl;
    }
    if else (x % 2 ==1) {
        cout << "Ganjil" << endl;
    }
    switch (x) {
    case 1 : cout << "Satu" << endl; break;
    case 2 : cout << "Dua" << endl; break;
    case 3 : cout << "Tiga" << endl; break;
    }
    */
    int x = 1;
    /*
    while (x < 5) {
        cout << x << "\n"; x++;
    }
    do {
        cout << x << "\n"; x++;
    }
    while (x < 5);
    */
    for (int x = 5; x <= 1000; x = x+5) {
        cout << x << "\n";
    }
    return 0;
}
