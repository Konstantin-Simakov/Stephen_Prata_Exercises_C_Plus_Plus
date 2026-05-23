// exercise7.h

#ifndef EXERCISE7_H_
#define EXERCISE7_H_

class Plorg {
private:
static const int LEN = 20;
    char mName[LEN];
    int mCi;             // Contentment index (CI).
public:
    Plorg(const char * name = "Plorga", int ci = 50);
    void changeCi(int newCi) {mCi = newCi;}
    void show(void) const;
};

#endif