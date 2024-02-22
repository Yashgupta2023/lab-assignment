/*WRITE A PROGRAM IN C TO INPUT A STRING OR A CHARACTER ARRAY AND COUNT THE NUMBER OF CHARACTERS , WORDS AND SPACES USED IN THE CHARACTER ARRAY OR THE STRING*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,l=0,count,character;
    char str[20];
    printf("input string\n");
    fgets(str,20,stdin);
    l=strlen(str);
    while (str[i]!='\0')
    {
        if(str[i]==' ');
        count++;
        i++;
         printf("the number of characters are %d",character);
     printf("the number of words are %d",count+1);
      printf("the number of spaces are %d",count);
    }
   
      return 0;
}
