#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
while(1==scanf("%d %d",&a,&b)){
    if(a>b){
        printf("O JOGO DUROU %d HORA(S)",a-b);
    }else if(a<b)
    {
        printf("O JOGO DUROU %d HORA(S)",b-a);
    }
    else if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
}
    return 0;
}
