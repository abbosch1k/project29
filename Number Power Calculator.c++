#include <iostream>
using namespace std;

int main() {

    int base, power, result = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;

    for(int i=0;i<power;i++){
        result *= base;
    }

    cout << "Result: " << result << endl;

    return 0;
}
