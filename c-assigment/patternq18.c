#include<stdio.h>
int main(){
  int a;
scanf("%d",&a);
for(int i=1;i<=(65+a);i++){
    for(int j=65;j<(65+a-i+1);j++){
        printf("%c",j);
    }
    printf("\n");
}

    return 0;
}