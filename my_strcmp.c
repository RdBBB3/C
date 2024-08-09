// Re Création de la fonction permettant de comparer 2 chaînes de caractères strcmp()
#include "my_strcmp.h"

int mystrcmp(const char *str1, const char *str2)
{
				
				int temp = 0;
				// Tant que le pointeur vers str1 n'est pas = à \0 et que les premiers caractères des deux chaînes
				// sont les mêmes, alors on passe au carctère suivant
				while (str1[temp] && str1[temp] == str2[temp])
				{
								temp++;

				}
				// Si le résultat retourné est positif, alors la deuxième valeur est avant la première lexicographiquement
				// Si le résultat retourné est négatif, alors la première valeur est avant la deuxième lexicographiquement
				// Si le résultat retourné est 0 alors les deux chaînes de caractères sont les mêmes
				return (unsigned char)str1[temp] - (unsigned char)str2[temp];

}
