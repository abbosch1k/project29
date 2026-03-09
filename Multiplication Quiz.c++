#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int a = rand()%12;
    int b = rand()%12;

    int answer;

    cout << a << " * " << b << " = ";
    cin >> answer;

    if(answer == a*b)
        cout << "Correct!\n";
    else
        cout << "Wrong! Answer: " << a*b << endl;

    return 0;
}
