#include "my_strcpy.h"

void mystrcpy(char *str1, char *str2)
{
				int temp = 0;
				while (str2[temp])
				{
								str1[temp] = str2[temp];
								temp++;
				}
}
