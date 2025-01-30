#include<stdio.h>

int main()
{
	printf("\t MULTIPLICATION TABLE GENERATOR \n");
	int a,b;
	printf("\nEnter no of multiples numbers: ");
	scanf("%d", &b);
	int num;
	printf("enter no of base number: ");
	scanf("%d", &num);
	int tables[num][b];
	int numbers[num];
	for(int i = 0; i < num; i++){
		printf("enter base number %d = ", i+1);
		scanf("%d", &numbers[i]);
	}
	for(int i = 0; i < num; i++){
		for(int j = 0; j < b; j++){
			tables[i][j] = numbers[i] * (j + 1);
		}
	}
	for(int i = 0; i < num; i++){
		printf("\t multiplication table of %d \n",numbers[i]);
		for(int j = 0; j < b; j++){
		printf("%d x %d = %d \n",numbers[i] , j + 1, tables[i][j]);
		}
		printf("\n");
	}		
	
	return 0;
}
