#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string quotes[] = {
        "Never give up",
        "Keep learning",
        "Stay focused",
        "Work hard",
        "Believe in yourself"
    };

    int index = rand() % 5;

    cout << "Quote: " << quotes[index] << endl;

    return 0;
}
