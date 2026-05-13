// exercise2.h

#ifndef EXERCISE2_H_
#define EXERCISE2_H_

#include <string>
using std::string;

class Person {
private:
    static const int LIMIT = 25;
    string lname;                   // Name
    char fname[LIMIT];              // Surname
public:
    Person() {lname = ""; fname[0] = '\0';}
    Person(const string & ln, const char * fn = "Heyyou");
    
    void show(void) const;          // Format: Name Surname
    void formalShow(void) const;    // Format: Surname, Name
};

#endif
