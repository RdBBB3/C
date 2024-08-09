#include "my_strcat.h"


char* mystrcat(char *str1, char *str2)
{
				char *ptr = str1;
				int temp=0;
				

				while (*ptr != '\0'){
								ptr++;
				}

				while (str2[temp] != '\0')
				{
								*ptr = str2[temp];
								ptr++;
								temp++;
				}

				*ptr = '\0';

				
				return str1;



}
