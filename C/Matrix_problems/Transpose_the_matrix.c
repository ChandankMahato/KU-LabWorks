#include <stdio.h>
int n,r,c;
int transposeMatrix(int x[100][100],int r,int c);
int main()
{
    int x[n][n],r,c,i,j;
    printf("enter the size of two dimensional array:");
    scanf("%d",&n);
  printf("ENTER THE ROWS AND COLUMN OF MATRIX:\n");
    scanf("%d%d",&r,&c);
    printf("ENTER THE ELEMENT OF  MATRIX:\n");
    for(i=0;i<r;i++)
  {
       for(j=0;j<c;j++)
       {
           printf("ENTER THE x%d%d=",i+1,j+1);
           scanf("%d",&x[i][j]);
       }
  }
  printf("\nENTERED MATRIX:\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d  ",x[i][j]);
          if(j==(c-1))
          {
              printf("\n");
          }
      }
  }
  transposeMatrix(x,r,c);
  return 0;

}
int transposeMatrix(int x[100][100],int r,int c)
{
    int i,j;
    int transpose[n][n];
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            transpose[j][i]=x[i][j];
        }
    }
    printf("\nTHE TRANSPOSE MATRIX:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  ",transpose[i][j]);
            if(j==(r-1))
             printf("\n");
        }
    }
}
