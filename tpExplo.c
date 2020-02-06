#include <stdio.h>
#include <string.h>

int main(){
	//variables
	char destination[30];
	char dest1[30] = "Blinguia\0";
	char dest2[30] = "Afrat\0";
	
	//debut
	printf("Salut les enfants, bienvenue dans le bus de l'ecole Blingue Premier ! Alors, vous voulez aller ou ?\n Pour aller a Blinguia, tapez 1, pour aller en Afrat, tapez 2\n");
	
	scanf("%s",&destination);
	
	while(strcmp(destination, dest1) !=0 && strcmp(destination, dest2) != 0){
		printf("ah non ca c'est pas ma direction ca, choisissez autre chose\n");
		
		scanf("%s",&destination);
	}
	
	if(strcmp(destination,dest1)==0){
			printf("bienvenue a Blinguia, capitale historique de la magie fondee a la gloire de Blingue le Premier, tueur de l'Immortel et sauveur de l'humanite !\n");
		}
		
	if(strcmp(destination,dest2)==0){
		printf("bienvenue en Afrat, pays des Afraites, une contree pauvre et aride ou l'avenir se resume a un champ ou une mine. La grosse joie.\n");
	}
	
	return 0;
}