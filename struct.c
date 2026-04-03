#include<stdio.h>
#include<string.h>
typedef struct{
    char village[50];
    char postoffice[50];
    char upazila[50];

}adress;
typedef struct{
    char name[50];
    int age;
    adress address;
}Person;
int main(void)
{
    Person p1 ={"Shahriar Tanvir Noor", 22, {"Kalibazail"," Fulbaria mymensingh", "Bangladesh"}};
printf("Name : %s, Age : %d, Address : %s", p1.name, p1.age, p1.address.village);
return 0;
}
/*suppose I have 2 nested structure inside one main structure. Do I need to declare all three strurchture
insdie main method?*/
/*no. you don't need to declare all three structures inside the main method. You can declare the nested structures outside the main method and then use them within the main structure. In this example, we have declared the 'adress' structure and the 'Person' structure outside the main method, and then we can create an instance of 'Person' in the main method without needing to declare the 'adress' structure again.*/