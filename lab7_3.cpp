#include <iostream>
using namespace std;

char before(char x) {

    if (x < 'A' || x > 'Z') {
            return '0';
    }
        if (x == 'A') {
            return 'Z';
        }
    
        return x - 1;
    



    
    cout << before('A') << endl;  // Z
    cout << before('B') << endl;  // A
    cout << before('P') << endl;  // O
    cout << before('T') << endl;  // S
    cout << before('Z') << endl;  // Y
    cout << before('a') << endl;  // 0
    cout << before('0') << endl;  // 0
    cout << before('c') << endl;  // 0

    return 0;
}
