#include<stdio.h>
union dynamic
{
    double val;
    char *p;
}
int main()
{
    union dynamic dvar;
    devar.p=(char*) &dvar;
    // devar.*p --->error
    *(devar.p)='a';
    *(devar.p+1)='b';
}