#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int type) {
	return (rand() % type + 1);
}

void generate(int rolls, int type) {
	int sum = 0;
	for (int i = 1; i <= rolls; i++) {
		int num = roll(type);
		printf("\n%3d.roll --> %d", i, num);
		sum += num;

	}
	printf("\n\n  Total is %d", sum);
}

int main(void) {
	//num of rolls
	int numOfroll = 1;

	//type
	int type;

	//control
	int check = 1;

	//rand generator seed
	srand(time(NULL));
	
	printf("DICE GENERATOR\n\n");

	while (check != 0) {
		//get roll number
		printf("\nEnter two number (roll - face num) ex(1 100): ");
		scanf_s("%d %d", &numOfroll, &type);
		while (numOfroll < 0) {
			printf("\nPlease a enter valid number for first number: ");
			scanf_s("%d", &numOfroll);
		}

		
		while (type < 0) {
			printf("\nPlease a enter valid number for second number: ");
			scanf_s("%d", &type);
		}

		generate(numOfroll, type);

		printf("\n\nDo you want to continue?(for no --> 0)    ");
		scanf_s("%d", &check);
			
	}
	

	system("pause");
	return(0);
}