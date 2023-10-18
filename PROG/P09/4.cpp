#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename T1, typename T2>
class Pair {
    public:
        Pair(T1 first, T2 second): first_(first), second_(second) {}
        T1 get_first() const { return first_; }
        T2 get_second() const { return second_; }
        void show() const { cout << '{' << first_ << ',' << second_ << '}';}
    private:
        T1 first_;
        T2 second_;
};

void sort_by_first(vector< Pair <string, int> > &v) {
    sort(v.begin(), v.end(), [](const Pair <string, int> &p1, const Pair <string, int> &p2) {
        return p1.get_first() < p2.get_first();
    });
}

void sort_by_second(vector< Pair <string, int> > &v) {
    sort(v.begin(), v.end(), [](const Pair <string, int> &p1, const Pair <string, int> &p2) {
        return p1.get_second() < p2.get_second();
    });
}

void show(vector< Pair <string, int> > v) {
    cout << '{';
    for(size_t i = 0; i < v.size(); i++) {
        v[i].show();
    }
    cout << '}';
}