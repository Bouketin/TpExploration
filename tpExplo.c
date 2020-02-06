#include <stdio.h>

int main(){
	//variables
	int tamponDestination=0;
	int destination=0;
	
	
	//debut
	printf("Salut les enfants, bienvenue dans le bus de l'ecole Blingue Premier ! Alors, vous voulez aller ou ?\n Pour aller a Blinguia, tapez 1, pour aller en Afrat, tapez 2\n");
	
	scanf("%d",&destination);
	
	while(destination != 1 && destination != 2){
		printf("ah non ca c'est pas ma direction ca, choisissez autre chose\n");
		
		scanf("%d",&destination);
	}
	
	if(destination==1){
			printf("bienvenue a Blinguia, capitale historique de la magie fondee a la gloire de Blingue le Premier, tueur de l'Immortel et sauveur de l'humanite !\n");
		}
		
	if(destination==2){
		printf("bienvenue en Afrat, pays des Afraites, une contree pauvre et aride ou l'avenir se resume a un champ ou une mine. La grosse joie.\n");
	}
}