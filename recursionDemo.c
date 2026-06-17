#include <stdio.h>
void recurs(int c,int n)
{
if(c==6){printf("-----------------\n"); return;}
    printf("<---Level %d is entering into the stack--->\n",++n);
    
    recurs(++c,n);
    printf("<---Going out level %d from the stack--->\n", --n + 1);

}
int main() {

recurs(1, 0);
    return 0;
}
