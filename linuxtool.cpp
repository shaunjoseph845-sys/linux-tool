#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int choice;

    cout << "=== Linux System Info Tool ===\n";
    cout << "1. Show current user\n";
    cout << "2. Show system date & time\n";
    cout << "3. Show disk usage\n";
    cout << "4. Show running processes\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            system("whoami");
            break;
        case 2:
            system("date");
            break;
        case 3:
            system("df -h");
            break;
        case 4:
            system("ps aux | head");
            break;
        default:
            cout << "Invalid option!\n";
    }

    return 0;
}
