//strings
/*A string is a collection of characters a string always end with NULL.
/*if strinf is defined the length of n characters only n-1 characters should be stored in order
to leave space for NULL characters
we use formate specifer is %s to define string variable*/
//Ex:1
#include<stdio.h>
int main()
{
	char str[]= {'a','b','c'};
	printf("%s",str);
}
/*EX;2*/
#include<stdio.h>
int main()
{
	char str[]="hello";
	printf("%s",str);
}
//take a string as user input
#include<stdio.h>
int main()
{
	char str[50];
	scanf("%s",str);
	printf("%s",str);
}
//this advantage of %s is while reading it will read the input default seperator
#include<stdio.h>
intmain() {
	char str[50];
	scanf("[\n]%s",str);
}
//take input until upper case letter
#include<stdio.h>
int	main{
    char str[50];
	scanf("[^A-Z]%s",str);
	printf("%s",str);
}
//take input until lower case letter
#include<stdio.h>
int main(){
    
	char str[50];
	scanf("[^a-z]%s",str);
	printf("%s",str);
}
//take input until digit numbers
#include<stdio.h>
int main(){
    char str[50];
	scanf("[&0-9]%s",str);
	printf("%s",str);
}
#include<stdio.h>
int main(){
    
	char str[50];
	scanf("%[&a-z  | ^A-Z ]",str);
	printf("%s",str);
}
#include<stdio.h>
int main(){
    
	char str[50];
	scanf("%[&a-z  | ^A-Z |0-9 ]",str);
	printf("%s",str);
}
