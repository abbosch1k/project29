#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string food[] = {"Pizza","Burger","Pasta","Sushi","Salad","Steak"};

    cout << "Food: " << food[rand()%6] << endl;

    return 0;
}
