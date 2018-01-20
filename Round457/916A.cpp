#include <bits/stdc++.h>
using namespace std;

int hour, minute, hh, mm, x;

int main()
{
    cin >> x >> hh >> mm;
    int num = 0;
    hour = hh, minute = mm;
    while(7 != hour % 10 && 7 != minute % 10)
    {
        minute -= x;
        if(minute < 0)
        {
            minute += 60;
            hour--;
        }

        if(hour < 0)
        {
            hour += 24;
        }

        num++;
    }

    cout << num;

    return 0;
}
