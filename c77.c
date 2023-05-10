#include<stdio.h>
int main(){
    int total;
    char grade;
    scanf("%d",&total);
    while(getchar() !='\n');
    scanf("%c",&grade);
    printf("입력값:%d,%c\n",total,grade);
    return 0;
}