#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int mat1[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    int sum[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=mat[i][j]+mat1[i][j];
            printf("%d ",sum[i][j]);
        }
       for(i=0;i<r;i++){ for(j=0;j<c;j++)
	   printf("\n \n");}
    }
    return 0;
}
