/*
 if (Me toca explicar)
    {
    printf("F en el chat. By Aritz \n");
    }
else
    printf("By Aritz. \n");
    return 0;
}
*/

#include <stdio.h>


int main()
{
	char value;
	printf("Insert a char : \n");
	scanf("%c",&value);	
	switch("%c",value)
		{
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("%c is vow ",value);
				break;
				
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("%c is vow in uppercase ",value);
				break;
			
			case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'ñ': case 'p': case 'q': case 'r': case 's': case 't': case 'w': case 'v': case 'y': case 'x': case 'z':
				printf("%c is consonant ",value);
				break;
				
			case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M': case 'N': case 'Ñ': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'W': case 'V': case 'Y': case 'X': case 'Z':
				printf("%c is consonant in uppercase ",value);
				break;
				
			default:
				printf("Not a vow or consonant");
				break;
		}
	
	return 0;	
}
