#include <stdio.h>
#include <string.h>

struct Lieu{
	char nom[30];
	char description[300];
	int level;
	int id[2];	
};

typedef struct Lieu lieu;

int main(){
	
	lieu Lieu1={"Blinguia", "capitale historique et culturelle de la magie fondee a la gloire de Blingue le Premier, tueur de l Immortel et sauveur de l humanite\0", 1, {2,3}};
	lieu Lieu2={"Afrat", "petit pays pauvre a la frontière de l'orient et de l'Afrique du Nord. La guerre civile y est traditionelle et si vous n'etes pas militaire, vous etes fermier ou mineur point barre\0", 6, {1,3}};
	lieu Lieu3={"Etlam", "Ancienement siege d'un ordre de richissimes chevaliers, l'ile d'Etlam n'est aujourd'hui plus que ruines, depuis le passage de l'Immortel", 4, {1,2}};
	
	//variables
	char destination[30];
	char dest1[30] = "Blinguia\0";
	char dest2[30] = "Afrat\0";
	char dest3[30] = "Etlam\0";
	
	//debut
	printf("Salut les enfants, bienvenue dans le bus de l'ecole Blingue Premier ! Alors, vous voulez aller ou ?\n Pour aller a Blinguia, tapez 1, pour aller en Afrat, tapez 2\n");
	
	scanf("%s",&destination);
	
	while(strcmp(destination, dest1) !=0 && strcmp(destination, dest2) !=0 && strcmp(destination, dest3) !=0){
		printf("ah non ca c'est pas ma direction ca, choisissez autre chose\n");
		
		scanf("%s",&destination);
	}
	
	if(strcmp(destination,dest1)==0){
			printf("%s \n", Lieu1.description);
			
			printf("d'ici vous pouvez vous rendre en Afrat ou a Etlam\n");
			
			scanf("%s",&destination);
		}
		
	if(strcmp(destination,dest2)==0){
		printf("%s \n", Lieu2.description);
		
		printf("d'ici vous pouvez vous rendre a Blinguia ou a Etlam\n");
			
		scanf("%s",&destination);
	}
	
	if(strcmp(destination,dest3)==0){
		printf("%s \n", Lieu3.description);
		
		printf("d'ici vous pouvez vous rendre en Afrat ou a Blinguia\n");
		
		scanf("%s",&destination);
	}
	
	return 0;
}