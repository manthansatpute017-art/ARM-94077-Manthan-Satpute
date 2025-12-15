#include<stdio.h>

int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("character is an alphabet.\n");
        ch=ch^32;
        printf("result after XOR with 32: %c\n",ch);
    }
    else{
        printf("character is not an alphabet.\n");
    }
    return 0;
}
