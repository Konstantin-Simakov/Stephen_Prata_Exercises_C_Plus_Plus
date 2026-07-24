// exercise6.h -- Chapter 11.
#ifndef EXERCISE6_H_
#define EXERCISE6_H_

class Stonewt {
private:
    static const int LbsPerStn = 14;
    int stone;
    double pdsLeft;
    double pounds;
public:
    explicit Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void showLbs() const;
    void showStn() const;
    // Inline difinitions.
    bool operator<(const Stonewt & st) const {return pounds < st.pounds;}
    bool operator<=(const Stonewt & st) const {return pounds <= st.pounds;}
    bool operator>(const Stonewt & st) const {return pounds > st.pounds;}
    bool operator>=(const Stonewt & st) const {return pounds >= st.pounds;}
    bool operator==(const Stonewt & st) const {return pounds == st.pounds;}
    bool operator!=(const Stonewt & st) const {return pounds != st.pounds;}
};

#endif
