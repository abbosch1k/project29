#include <iostream>
using namespace std;

int main() {

    int temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if(temp > 30)
        cout << "Hot\n";
    else if(temp < 10)
        cout << "Cold\n";
    else
        cout << "Normal\n";

    return 0;
}
