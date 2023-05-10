#include<stdio.h>   
int main(){
    char string[30];
    gets(string);
    printf("input:%s",string);
    gets(string);
    printf("input2:%s",string);
    return 0;
}