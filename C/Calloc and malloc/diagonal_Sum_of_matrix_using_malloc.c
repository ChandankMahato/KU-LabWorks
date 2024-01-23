#include <stdio.h>

int diagonalSum(int **data,int size){
    int i;
    int sum=0;
    for(i=0;i<size;i++){
        sum+=data[i][i];
    }
    return sum;
}

int main(){
int size;
printf("enter the size of array ");
scanf("%d",&size);
int **data = (int **) malloc(size*sizeof(int *));
for(int i=0;i<size;i++){
    data[i] = (int*) malloc(size*sizeof(int));
    for(int j=0;j<size;j++){
        scanf("%d",&data[i][j]);
    }

}
printf("%d",diagonalSum(data,size));

}
