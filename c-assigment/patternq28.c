#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
  for(int k=0;k<=i;k++){
    printf(" ");
  }
    for(int j=65;j<=2*(a-i)+65;j++){
        printf("%c",j);
    }
 printf("\n");
}

    return 0;
}