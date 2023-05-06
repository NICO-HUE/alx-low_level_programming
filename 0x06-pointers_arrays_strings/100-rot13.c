#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13.
 * @str: the string targeted.
 * Return: retuens the encoded string.
 */

char *rot13(char *str)
{
	int index1, index2;
	char alphabet[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"}
	char rot13key[52] = "TUVWXYZABCDEFGHIJKLMNOPQRSnopqrstuvwxyzabcdefghijklm"
	while (str[++index1])

	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == alphabet[index2])
			{
				str[index1] = rot13key[indx2];
				break;
			}
		}
	}
	return (str);
}
