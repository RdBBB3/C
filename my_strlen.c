#include "my_strlen.h"


int mystrlen(const char *string)
{
				// Tant que la chaine de caractère n'est pas égale à \0, on incrémente un compteur qui va retourner la taille de la 
				// string.
				int temp = 0;
				while (string[temp])
				{
								temp ++;
				}
				return temp;


}
