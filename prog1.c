//calculator

#include<stdio.h>

void calculator()
{
	int choice;
	do
	{
		int a,b;
        printf("Enter the first number:\n");
		scanf("%d", &a);
		printf("Enter the second number: \n");
		scanf("%d", &b);
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for mod\n");
		printf("Press 0 to exit\n");
		printf("Enter your choice: \n");
		scanf("%d", &choice);
		

		switch (choice)
		{
		case 1:
			printf("Addition of %d and %d is: %d\n",a,b,a + b);
			break;

		case 2:
			printf("Subraction of %d and %d is: %d\n",a,b,a - b);
			break;

		case 3:
			printf("Multiplication of %d and %d is: %d\n",a,b,a * b);
			break;

		case 4:
			printf("Division of %d and %d is: %d\n",a,b,a / b);
			break;

		case 5:
			printf("Modulus of %d and %d is: %d\n",a,b,a % b);
			break;

		case 0:
			printf("Exiting\n");
			break;

		default:
			printf("Wrong choice.....");
			break;
		}
	} while (choice != 0);
}

int main(){

    calculator();
	return 0;

}