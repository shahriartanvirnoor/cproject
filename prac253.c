#include<stdio.h>
typedef struct{
    char fname[30];
    char lname[30];
}names;
typedef struct{
    char village[30];
    char upazila[40];
    char district[30];
}addr;
typedef struct{
    names name;
    int age;
    addr address;
}Person;
int main()
{
    Person p1 = {{"Shahriar", "Tanvir"}, 22, {"Kalibazail", "Fulbaria", "Mymensingh"}};
    printf("Name : %s %s, Age : %d, Address : %s, %s, %s", p1.name.fname, p1.name.lname, p1.age, p1.address.village, p1.address.upazila, p1.address.district);
    return 0;
}
/* suppose I have 2 brothers whose address are similar to mine. If I don;t want to tell them
their location is there any option where I can just reference the address? */
/*yes. by using a pointer at the address you can avoid writting it multiple times. or you
can just copy the address. this is another wadys of implementation. ithink you understand it right?*/