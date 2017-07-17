
#include<stdio.h>
int wybor()
{
int wybor=0;
printf("wybierz opcje: ");
scanf("%d",&wybor);
printf("wybrano: %d\n",wybor);
return wybor;
}


void menu()
{
	printf("1.Dodaj\n2.Usun\n3.Edytuj\n4.Wyjdz\n");
}

int main(int argc, char* argv[])
{

	menu();
wybor();

}
