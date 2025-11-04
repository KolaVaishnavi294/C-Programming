#include<stdio.h>
int main(){
    char str[101];
    int i,c=0;
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++){
        c++;
        }
        printf("%d",c);
}