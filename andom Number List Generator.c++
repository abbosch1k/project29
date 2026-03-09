#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int n;

    cout << "How many numbers: ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << rand()%100 << " ";
    }

    cout << endl;

    return 0;
}
