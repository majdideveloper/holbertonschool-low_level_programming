#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *rot13 - Function coding string
 *@s: a pointer to char string
 *Return: pointer to char
 */
char *rot13(char *s)
{

	char arrayCodage[52][3] = {"a=n", "b=o", "c=p", "d=q", "e=r", "f=s", "g=t", "h=u", "i=v", "j=w", "k=x", "l=y", "m=z", "n=a", "o=b", "p=c", "q=d", "r=e", "s=f", "t=g", "u=h", "v=i", "w=j", "x=k", "y=l", "z=m","A=N", "B=O", "C=P", "D=Q", "E=R", "F=S", "G=T", "H=U", "I=V", "J=W", "K=X", "L=Y", "M=Z", "N=A", "O=B", "P=C", "Q=D", "R=E", "S=F", "T=G", "U=H", "V=I", "W=J", "X=K", "Y=L", "Z=M"};

	int i, j, lenStr = strlen(s);
	char *newString = (char *)malloc(lenStr * sizeof(char));

	for (i = 0; i < lenStr; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == arrayCodage[j][0])
			{
				s[i] = arrayCodage[j][2];
				break;
			}
		}
	}
	newString = s;
	return (s);

}


