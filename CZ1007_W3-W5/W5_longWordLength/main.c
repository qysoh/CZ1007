#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
 char str[80], *p;

 printf("Enter a string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("longWordLength(): %d\n", longWordLength(str));
 return 0;
}
int longWordLength(char *s)
{
int i=0, counter=0, size=strlen(s), max=0;
while (i<size){
    if((s[i]>= 'a' && s[i]<= 'z') || (s[i]>='A' && s[i]<='Z')){
        counter++;
        if (counter>=max){
            max=counter;
        }
        i++;
    }
    else{
        counter=0;
        i++;
    }
}
return max;
}
