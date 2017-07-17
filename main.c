
#include <stdio.h>
#include <string.h>

int wybor()
{
int wybor=0;
printf("wybierz opcje: ");
scanf("%d",&wybor);
printf("wybrano: %d\n",wybor);
return wybor;
}



int ChooseLang (char* opt) {
	if (strcmp(opt,"en")==0) {
	printf("Hello Mr. Smith.\n");
	}
	else if (strcmp(opt,"pl")==0) {
	printf("Witaj Panie Jerzyna.\n");
	}
	return 0;
}


int main (int argc, char* argv[]) {
	ChooseLang(argv[1]);

	menu();
	wybor();


}
