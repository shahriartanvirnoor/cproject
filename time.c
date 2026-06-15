#include <stdio.h>
#include <time.h>

 int main()
 {
 time_t dynamic_time;
 dynamic_time = time(NULL);
    printf("Seconds since Jan 1, 1970: %ld\n", (long) dynamic_time);
 

    return 0;
 }