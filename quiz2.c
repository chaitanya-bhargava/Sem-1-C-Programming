#include<stdio.h>
#include<string.h>
int main()
{
    char friend1[54];
    char friend2[54];
    char temp[54];
    char state[54];
    printf("Enter name of friend 1:\n");
    gets(friend1);
    printf("Enter name of friend 2:\n");
    gets(friend2);
    printf("%s is a friend of %s\n",friend1,friend2);
    strcpy(temp,strcat(friend1," is a friend of "));
    strcpy(state,strcat(temp,friend2));
    puts(state);
    return 0;
}