#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[40];
    int _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
    _0=_1=_2=_3=_4=_5=_6=_7=_8=_9=0;
    int i=0;
    printf("Enter an expression(Don't use space): ");
    scanf("%39s", str);
    while(str[i]!='\0')
    {
        if(isdigit(str[i]))
        {
          switch(str[i]){
            case '0': _0++; break;
            case '1': _1++; break;
            case '2': _2++; break;
            case '3': _3++; break;
            case '4': _4++; break;
            case '5': _5++; break;
            case '6': _6++; break;
            case '7': _7++; break;
            case '8': _8++; break;
            case '9': _9++; break;
            
          }
        }
        ++i;
    }


    printf("%d %d %d %d %d %d %d %d %d %d\n",_0, _1, _2, _3, _4, _5, _6, _7, _8, _9);

    return 0;
}