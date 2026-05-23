// exercise6.h
// Compile along with exercise6.cpp

#ifndef EXERCISE6_H_
#define EXERCISE6_H_

class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showMove(void) const;
    Move add(const Move & m);
    void reset(double a = 0, double b = 0);
};

#endif
