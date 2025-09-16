#include<stdio.h>
int main(){
int a;
int num=65;
scanf("%d",&a);
for(int i=65;i<=(a+65);i++){
    for(int j=65;j<=i;j++){
        printf("%c",num);
        num++;
    }

    printf("\n");
}

    return 0;
}