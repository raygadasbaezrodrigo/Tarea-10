//Piedra papel o tijera
#include<stdio.h>
int main ()
{
	int jug1, jug2;
	printf("Piedra: 1 \nPapel: 2\nTijera: 3\n\nJugador 1 Escoje: ");
	scanf("%d",&jug1);
	printf("Jugador 2: ");
	scanf("%d",&jug2);
	if (jug1==1&&jug2==2)
	  printf("Papel vence a piedra\nJugador 2 gana");
	if (jug1==2&&jug2==3)
		printf("Tijera vence a papel\nJugador 2 gana");
	if (jug1==1&&jug2==3)
		printf("Piedra vence a tijera\nJugador 1 gana");
	if (jug1==3&&jug2==1)
		printf("Piedra vence a tijera\nJugador 2 gana");
	if (jug1==2&&jug2==1)
		printf("Papel vence a piedra\nJugador 1 gana");
	if (jug1==3&&jug2==2)
		printf("Tijera vence a papel\n Jugador 1 gana");
	if (jug1==jug2)
		printf("Empate");

}

