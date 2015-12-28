#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int phn;
    while(1==scanf("%d",&phn))
    {
        if(phn==61)
        {
            printf("Brasilia\n");
        }
        else if(phn==71)
        {
            printf("Salvador\n");
        }
        else if(phn==11)
        {
            printf("Sao Paulo\n");
        }
        else if(phn==21)
        {
            printf("Rio de Janeiro\n");
        }
        else if(phn==32)
        {
            printf("Juiz de Fora\n");
        }
        else if(phn==19)
        {
            printf("Campinas\n");
        }
        else if(phn==27)
        {
            printf("Vitoria\n");
        }
        else if(phn==31)
        {
            printf("Belo Horizonte\n");
        }
        else
        {
            printf("DDD nao cadastrado\n");
        }

    }

    return 0;
}
