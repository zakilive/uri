#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int start,endt,remng;
    while(2==scanf("%d %d",&start,&endt))
    {
        remng=endt-start;
        if(remng<0)
        {
            remng=24+endt-start;
        }
        if(start==endt)
        {
            printf("O JOGO DUROU 24 HORA(S)\n");
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S)\n",remng);
        }

    }

    return 0;
}
