#include <iostream>
using namespace std;

struct time_of_day {
    unsigned char h; // hours
    unsigned char m; // minutes
};
struct interval {
    time_of_day start; // start time
    time_of_day end;   // end time
};

void print(int d, const interval il);

int search_intervals(time_of_day t, const interval a[], int n, interval& u)
{
    u.start = t, u.end = t;
    for (int i = 0; i < n; i++)
    {
        if ((t.h > a[i].start.h && t.h < a[i].end.h) || (t.h == a[i].start.h && t.m >= a[i].start.m) || (t.h == a[i].end.h && t.m < a[i].end.m))
        {
            if ((a[i].start.h < u.start.h) || (a[i].start.h == u.start.h && a[i].start.m < u.start.m))
            {
                u.start = a[i].start;
            }

            if ((a[i].end.h > u.end.h) || (a[i].end.h == u.end.h && a[i].end.m > u.end.m))
            {
                u.end = a[i].end;
            }

            //print(i, a[i]);
        }
    }

    return (u.end.h - u.start.h) * 60 + u.end.m - u.start.m;
}

//! Prints the results.
void print(int d, const interval il)
{
    cout << d << " ["
         << (int) il.start.h << ':' << (int) il.start.m << ','
         << (int) il.end.h   << ':' << (int) il.end.m
         << "[\n";
}