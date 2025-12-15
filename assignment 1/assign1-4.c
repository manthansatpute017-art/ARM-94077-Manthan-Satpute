#include<stdio.h>

int count(int num){
    int count = 0;
    while(num>0){
            count +=(num&1);
    num>>=1;
}
return count;
}
int parity(int num){
    int m;
    if(count(num)%2!=0){
        printf("\ngiven byte has odd parity.");
        num |=0x80;
    }
    else{
        printf("\ngiven byte has even parity");
    }
    return num;
}
int main()
{
 int num;
 printf("enter decimal number:");
 scanf("%d",&num);
 printf("total number of 1's = %d",count(num));
 printf("\nfinal decimal number = %d",parity(num));

 return 0;
}
