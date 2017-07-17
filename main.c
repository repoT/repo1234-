#include<stdio.h>
int wybor()
{
int wybor=0;
printf("wybierz opcje: ");
scanf("%d",&wybor);
printf("wybrano: %d\n",wybor);
return wybor;
}

int main()
{
wybor();
return 0;
}
