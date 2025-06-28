//write a code print vowels in a given string
#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^\n]",str);
    int count=0;
    for(int ind=0;str[ind]!='\0';ind++){
        char ele=str[ind]|32;
        if(ele=='a'||ele=='e'|| ele=='i'||ele=='o',ele=='u')
        count++;
    }
     printf("%d",count);
}