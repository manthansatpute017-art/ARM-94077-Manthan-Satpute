#include<stdio.h>
void swap(int *a,int *b){
   int temp ;
   temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2nd number:");
    scanf("%d",&b);
    printf("numbers before swapping: a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("numbers after swapping: a=%d,b=%d\n",a,b);
    return 0;


}
