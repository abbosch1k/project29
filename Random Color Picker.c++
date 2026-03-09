#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string colors[] = {"Red","Blue","Green","Yellow","Black","White"};

    cout << "Color: " << colors[rand()%6] << endl;

    return 0;
}
