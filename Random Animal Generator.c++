#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string animals[] = {"Dog","Cat","Tiger","Lion","Elephant","Wolf"};

    cout << "Animal: " << animals[rand()%6] << endl;

    return 0;
}
