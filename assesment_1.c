//food billing system
#include<stdio.h>
main()
{
	int choice,price=0,quntity,amount,totalamount;
	char ch;
	
	do
	{
	printf("\n---------------------------------------\n");
	printf("1.pizza=180\n");
	printf("2.burger=100\n");
	printf("3.dosa=120\n");
	printf("3.idli=50\n");
	printf("\n---------------------------------------\n");
	
	printf("\n\nenter the choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			
			printf("you have select pizaaa\n");
			price=180;
			printf("\nprice:%d",price);
			printf("\n\nenter the quntity oreder:");
	  		scanf("%d",&quntity);
	  		amount=price*quntity;
	  		printf("\namount:%d",amount);
	  		totalamount=totalamount+amount;
			printf("\ntotal amount:%d",totalamount);
			break;
			
		case 2:
			
			printf("you have select burger\n");
			price=100;
			printf("\nprice:%d",price);
			printf("\n\nenter the quntity oreder:");
	  		scanf("%d",&quntity);
	  		amount=price*quntity;
	  		printf("\namount:%d",amount);
	  		totalamount=totalamount+amount;
			printf("\ntotal amount:%d",totalamount);
			break;
			
		case 3:
			
			printf("you have select dosa\n");
			price=120;
			printf("\nprice:%d",price);
			printf("\n\nenter the quntity oreder:");
	  		scanf("%d",&quntity);
	  		amount=price*quntity;
	  		printf("\namount:%d",amount);
	  		totalamount=totalamount+amount;
			printf("\ntotal amount:%d",totalamount);
			break;
			
		case 4:
			
			printf("you have select idli\n");
			price=50;
			printf("\nprice:%d",price);
			printf("\n\nenter the quntity oreder:");
	  		scanf("%d",&quntity);
	  		amount=price*quntity;
	  		printf("\namount:%d",amount);
	  		totalamount=totalamount+amount;
			printf("\ntotal amount:%d",totalamount);
			break;
			
		default:
			
			printf("\ninvalid choice");
	}
	
	printf("\nenter the continue press (y or Y):");
	scanf(" %c",&ch);
		
	}	while(ch=='y'||ch=='Y');
	
}
