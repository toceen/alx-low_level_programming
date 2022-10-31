include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[s2] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot13key[s2] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};	   
	
while (str[indx1])
{
	for (indx2 = 0; indx < 52; indx2++)
	{
		if (str[index] == alphabet[indx2])
		{
			str[indx1] = rot13key[indx2];
			break;
		}
	}

	indx1++;
}

	return (str);
}
