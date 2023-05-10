#include<stdio.h>   
int main(){
    int dodo,gogo;
    int total,depsit,change,rest,menu;
    int w500,w100,w50,w10;
    int cnt_dodo, cnt_gogo;
    while(1){
        printf("또또면 70원, 꽁꽁바 30입니다.\n");
        printf("각각 개수를 띄어서 입력해요\n");
        scanf("%d %d",&cnt_dodo, &cnt_gogo);
        dodo=70*cnt_dodo;
        gogo=30*cnt_gogo;
        total=dodo+gogo;
        printf("총금액은 %d입니다.\n",total);
        printf("투입금액:");
        scanf("%d",&deposit);
        if(deposit>=total){
            change=deposit-total;
            w500=change/500;
            w100=change%500/100;
            w50=change%100/50;
            w10=change/10;
            printf("##########거스름돈 최대개수##########\n");
            printf("500원개수: %d, 100원개수: %d, 50원개수: %d, 10원개수: %d\n",w500,w100,w50,w10);

        }
        else{
            printf("금액이 부족합니다");
        }
    
    }
    

    return 0;
}