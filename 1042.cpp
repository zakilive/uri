#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a,b,c;
while(scanf("%d %d %d",&a,&b,&c)==3)
{
if(a<b && c<a)
{
    printf("%d\n %d\n %d\n",c,a,b);
    printf("\n");
    printf("%d\n %d\n %d\n",a,b,c);
}
else if(a<b && b>c)
{
    printf("%d\n %d\n %d\n",a,c,b);
    printf("\n");
    printf("%d\n %d\n %d\n",a,b,c);
}

}

return 0;
}

