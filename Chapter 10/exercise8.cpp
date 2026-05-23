// exercise8.cpp
// List class realization.
// Compile along with list.cpp.

#include "list.h"
#include <iostream>

static void showItem(Item & it);

int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;
    List list;
    Item number;
    char choice;

    cout << "Enter an action.\n";
    cout << "a. Add item    s. Show list    q. Quit\n";
    cin >> choice;
    while (choice != 'q' && choice != 'Q') {
        switch (choice) {
            case 'A':
            case 'a': {
                cout << "Enter a new number: ";
                cin >> number;
                list.add(number);            
                break;
            }
            case 's':
            case 'S': {
                if (list.isEmpty()) {
                    cout << "The list is empty.\n";
                } else {
                    cout << endl;
                    list.visit(showItem);
                }
                break;
            }
        }
        cout << "\nEnter an action.\n";
        cout << "a. Add item    s. Show list    q. Quit\n";
        cin >> choice;
    }
    list.empty();
    cout << "\nBye!\n";
    
    return 0;
}

static void showItem(Item & it)
{
    std::cout << "Item: " << it << std::endl;
}
