#include<stdio.h>
void multimatrix(int rows,int columns,int matrix1[10][10],int matrix2[10][10],int multi[10][10])
{
   for(int i=0;i<rows;i++)
   {
       for(j=0;j<columns;j++)
       { multi[i][j]=0;
        for(int k=0;k<columns;k++)
        {
            multi[i][j]+=matrix1[i][k]*matrix2[k][j];
        }

       }
   }
}
void display()
