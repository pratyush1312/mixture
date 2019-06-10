#include<stdio.h>
main()
{
	printf("Enter your name:\n\n");
	char name[10];
	scanf("%S",&name);
	printf("You said your name is:%S\n\n",name);
	
	printf("Enter your age:\n\n");
	int age=0;
	scanf("%d",&age);
	if(age<18)
	{
		printf("You cannot vote \n\n");
	}
	else if(age>=18)
	{
		printf("You can vote \n\n");
	}
	else
	{
		printf("You can vote \n\n");
	}
	
	printf("Enter your mobile number:\n\n");
	int number=0;
	scanf("%d",&number);
	printf("Your mobile number is:%d\n\n",number);
	
	printf("Pick an item To give : \n1.Pen\n2. Pencil\n3. Eraser\n4. Book");
	int choice=0;
	scanf("%d",choice);
	
	switch (choice)
	{
		case 1:
			printf("You picked pen.");
			break;
			
		case 2:
			printf("You picked Pencil.");
			break;
			
		case 3:
			printf("You picked Eraser.");
			break;
			
		case 4:
			printf("You picked Book.");
			break;
			
		default: printf("Invalid choice.");
		
	}
}
