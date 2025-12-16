#include<stdio.h>
void *vp = 100;
unsigned int size = 1;
char mask = 0x80;

void print_bin(void *vp , unsigned int size)
{ int i;
    for(i=size-1;i>=0;i--)
    {
    unsigned mask = 0x80;
    while(mask){
        if(mask &  *((char*)vp+i)){
            printf("1");
        }
        else{
            printf("0");
        }
        mask = mask >> 1 ;
    }
    printf(" ");
    }
    printf("\n");
}

void main(void){
    char ch =10;
    print_bin(&ch,sizeof(ch));
    unsigned int c =0xFF;
   // c= 0xFA;
    print_bin(&c,sizeof(c));
}
