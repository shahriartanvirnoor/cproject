/* 
    *This is an example of Herbert schild's book.
    *That demonstrates how to pass a structure in a function
    *so that it can run efficiently.
*/
#include <stdio.h>

#define DELAY 128000
typedef struct my_time {
    int hours;
    int minutes;
    int seconds;
} my_time;

void display(my_time *t);
void update(my_time *t);
void delay(void);

int main() {
    my_time systime;
    systime.hours = 0;
    systime.minutes = 0;
    systime.seconds = 0;
    for(int i = 1;i<=10;++i) {
        update(&systime);
        display(&systime);


    }
    return 0;
}

void update(my_time *t) {
    t->seconds++;
    if(t->seconds==60) {
        t->seconds = 0;
        t->minutes++;
    }
    if(t->minutes==60) {
        t->minutes = 0;
        t->hours++;
    }

    if(t->hours==24) {
        t->hours=0;
    }
    delay();
}

void display(my_time *t) {
    printf("%02d: ", t->hours);
    printf("%02d: ", t->minutes);
    printf("%02d: ", t->seconds);
    printf("\n");
}

void delay(void) {
    long int t;
    for ( t=1; t<DELAY; ++t) ;
}