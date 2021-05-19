#include <stdio.h>
void inputMatrix(int matrix[][3]);
void printMatrix(int matrix[][3]);
void diagonalsum(int matrix[][3]);
int main()
{
	int matrix[3][3];
    int i, j;

    
    printf("Enter elements in 3X3 matrix.\n");
    inputMatrix(matrix);



    printf("Elements of 3X3 matrix.\n");
    printMatrix(matrix);
    
    printf("Sum of Diagonal Elements of 3X3 matrix.\n");
    diagonalsum(matrix);
    return 0;

	
}

void inputMatrix(int matrix[][3])

{
    int i, j;


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
        	printf("element - [%d],[%d] : ",i,j);
            scanf("%d", (*(matrix + i) + j));
        }
    }
}

void printMatrix(int (*matrix)[3])

{
    int i, j;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        
            printf("%d ", *(*(matrix + i) + j));
        }

        printf("\n");
    }
}


	

void diagonalsum(int (*matrix)[3])

{
    int result=0,i;
    for(i=0;i<3;i++)
    {
	    
    result=result+ *(*(matrix + i) + i);
}
    printf("%d",result);
}
