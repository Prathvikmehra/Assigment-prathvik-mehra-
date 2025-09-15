#include<stdio.h>
int main(){
  int a;
scanf("%d",&a);
for(int i=65;i<(a+65);i++){
    for(int j=65;j<(a+65);j++){
        printf("%c",j);
    }
printf("\n");
    
}
    return 0;
}