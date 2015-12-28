#include<iostream>
#include<cstdio>
using namespace std;
int main(){
double a,b,c;
while(scanf("%lf %lf %lf",&a,&b,&c)==3)
if(a+b>c && b+c>a && c+a>b)
{
    printf("Perimetro = %.1f\n",a+b+c);
}
else
{
    printf("Area = %.1f\n",(a+b)*c/2);
}

    return 0;
}
