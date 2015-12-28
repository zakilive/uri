#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a,b;
while(scanf("%d %d",&a,&b)==2)
{
    if(b%a==0 || a%b==0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
     printf("Nao sao Multiplos\n");
    }
}

return 0;
}
