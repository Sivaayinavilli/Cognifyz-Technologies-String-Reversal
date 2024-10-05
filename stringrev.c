#include<stdio.h>
#include<string.h>
char s[] = "SIVA GOPI";
void reverse(int);
int main()
{
printf("%s",s);
reverse(0);
printf("\n");
printf("%s",s);
return 0;

}
void reverse(int pos)
{
if(pos<strlen(s)/2)
{
		char ch ;
		ch = s[pos];
		s[pos]=s[strlen(s)-1-pos];
		s[strlen(s)-1-pos] = ch;
		reverse(pos+1);
}
}
