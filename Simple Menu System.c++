#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "1. Start\n";
    cout << "2. Settings\n";
    cout << "3. Exit\n";

    cout << "Choose option: ";
    cin >> choice;

    if(choice == 1)
        cout << "Game started\n";

    else if(choice == 2)
        cout << "Settings opened\n";

    else if(choice == 3)
        cout << "Exit program\n";

    else
        cout << "Invalid choice\n";

    return 0;
}
