#include <iostream>
using namespace std;

int main() {

    int number, reversed = 0;

    cout << "Enter number: ";
    cin >> number;

    while(number != 0){
        reversed = reversed*10 + number%10;
        number /= 10;
    }

    cout << "Reversed: " << reversed << endl;

    return 0;
}
