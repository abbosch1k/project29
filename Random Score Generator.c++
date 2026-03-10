#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int score = rand()%101;

    cout << "Random score: " << score << endl;

    return 0;
}
