// exericse2.cpp -- Chapter 9
#include <iostream>
#include <string>           // For std::string type, size() method

void str_count(const std::string & str);

int main(void)
{
    using namespace std;
    string input;

    cout << "Enter a line (empty line to quit):\n";
    getline(cin, input);
    while (input != "")
    {
        str_count(input);

        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye!\n";

    return 0;
}

void str_count(const std::string & str)
{
    using namespace std;
    static int total;
    int count = str.size();

    total += count;

    cout << "\"" << str << "\" contains "
         << count << " characters\n";
    cout << total << " characters total\n";
}
