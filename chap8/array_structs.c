#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};


int main (void)
{
    struct time time_update (struct time now);
    struct time times_test[5] =  { {11, 59, 59}, {12, 45, 15}, {15, 21, 14}, {17, 12, 14}, {12, 23, 21} };

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Time : %.2i:%.2i:%.2i\n", times_test[i].hour, times_test[i].minutes, times_test[i].seconds);
        times_test[i] = time_update(times_test[i]);
        printf("Time on second later... : %.2i:%.2i:%.2i\n", times_test[i].hour, times_test[i].minutes, times_test[i].seconds);
    }

    return 0;
}



struct time time_update (struct time now)
{
    now.seconds++;

    if (now.seconds == 60)
    {
        now.seconds = 0;
        now.minutes++;

        if (now.minutes == 60)
        {
            now.minutes = 0;
            now.hour++;
        }

        if (now.hour == 24)
        {
            now.hour = 0;
        }
    }

    return now;
}