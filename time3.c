#include <stdio.h>
#include <time.h>

struct tm* t;

 int main()
 {
   time_t now = time(NULL);
   t = localtime(&now);
   printf("_______________________________________________________________________________-\n");
   printf("Today is %d\n", t->tm_wday);



    return 0;
 }