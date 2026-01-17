// exercise3_version2.cpp -- Chapter 9

#include <iostream>
#include <cstring>      // For strcpy()

const int BUF = 2;      // The number of elements in the 'Chaff's array
const int SIZE = 20;    // The size of struct member of char array type 

struct Chaff {
    char dross[SIZE];
    int slag;
};

void set_chaff(Chaff & r_ch, const char * dr, int sl);
void show_chaffs(const Chaff chaffs[], int n);

int main(void)
{
    using std::cout;
    using std::cin;
    Chaff * chaffs = new Chaff[BUF];
    char dr[SIZE];                              // Temporary array of char type
    int sl;                                     // Temporary variable of int type
    int i = 0;

    cout << "Enter up to " << BUF << " chaffs.\n";
    for (i = 0; i < BUF; i++)
    {
        cout << "Enter a next dross (or empty line to end it): ";
        cin.getline(dr, SIZE);
        if (!dr[0])
            break;
        
        cout << "Enter a next slag (only integer): ";
        while (!(cin >> sl))
        {
            cout << "Incorrect input. Only integer!\n";
            cout << "Try again: ";
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }
        while (cin.get() != '\n')
            continue;

        set_chaff(chaffs[i], dr, sl);
    }
    
    show_chaffs(chaffs, i);
    delete [] chaffs;
    cout << "\nBye!\n";

    return 0;
}

void set_chaff(Chaff & r_ch, const char * dr, int sl)
{
    strcpy(r_ch.dross, dr);
    r_ch.slag = sl;
}

void show_chaffs(const Chaff chaffs[], int n)
{
    using std::cout;
    using std::endl;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "#" << i + 1 << endl;
        cout << "Dross: " << chaffs[i].dross << endl;
        cout << "Slag: " << chaffs[i].slag << endl;     
    }
}
