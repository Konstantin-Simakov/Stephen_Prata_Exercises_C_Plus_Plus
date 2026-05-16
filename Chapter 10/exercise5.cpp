// exercise5.cpp
// Compile along with stack.cpp
// Update Stack class using.

#include "stack.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

static void setCustomer(Customer & cs);
static void showCustomer(const Customer & cs);

int main(void)
{
    Stack st;
    Item cs;
    char ch;
    double subTot = 0.0;

    cout << "Please enter A to add customer info (CI),\n"
         << "P to process CI, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }

        switch (ch) {
            case 'A':
            case 'a': {
                if (st.isFull()) {
                    cout << "Stack already full.\n";
                } else {
                    cout << "Enter CI to add.\n";
                    setCustomer(cs);
                    st.push(cs);
                }
                break;
            }
            case 'P':
            case 'p': {
                if (st.isEmpty()) {
                    cout << "Stack already empty.\n";
                } else {
                    cs = st.pop();
                    subTot += cs.payment;

                    showCustomer(cs);
                    cout << " popped.\n";
                    cout << "Subtotal payment = " << subTot << endl;
                }
                break;
            }
        }
        cout << "Please enter A to add CI,\n"
         << "P to process CI, or Q to quit.\n";
    }
    cout << "Bye!\n";
    
    return 0;
}

static void setCustomer(Customer & cs)
{
    cout << "Name: ";
    cin.getline(cs.fullname, 35);

    cout << "Payment: ";
    cin >> cs.payment;
}

static void showCustomer(const Customer & cs)
{
    cout << "Name: " << cs.fullname 
         << ", payment: " << cs.payment;
}
