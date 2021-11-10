#include<stdio.h>
#include<stdlib.h>
int strlength(char *p)
{
   int i = 0;
   while( *(p+i) != '\0' )//no character than it 
      i++; 
   return i;
}
void reverse(char*str)//calling the string 
{
	int x ,y;
	char *xx,*yy,temp;//begin - end - temporary to swap minually
	x=	strlength(str);
	xx=str;
	yy=str;
	for (int i=0;i<x-1;i++)
	yy++;
	   for ( int i = 0 ; i < x/2 ; i++ ) 
   {        
      temp = *yy;
      *yy = *xx;
      *xx = temp;
      xx++;
      yy--;
}
}

int main()
{
	char str[100];
	printf("Enter your String :");
	gets(str);
	reverse (str);
	printf("reversed string :\n%s",str);
	return 0;
}
