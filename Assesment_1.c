#include<stdio.h>
main()
{
	char choice;
	int n,ch,amount;
	
	
	printf("\n\n\tMenu---------------");
	printf("\n\n\t1).Dosa\t\t\tRs.100/pcs");
	printf("\n\n\t2).idli\t\t\tRs.30/pcs");
	printf("\n\n\t3).burger\t\tRs.85/pcs");
	printf("\n\n\t4).pizza\t\tRs.200/pcs");
	
	do 
	{
		printf("\n\n\tpress 1 for dosa order:");
		printf("\n\n\tpress 2 for idli order:");
		printf("\n\n\tpress 3 for burger order:");
		printf("\n\n\tpress 4 for pizza order:");
		
		printf("\n\n\tEnter your choice:");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
				case 1:
				printf("\n\n\tEnter the number of quentity dosa:");
				scanf("%d",&n);
				printf("\n\n\tAmount:%d",n*100);
				break ;
				case 2:
				printf("\n\n\tEnter the number of quentity idli:");
				scanf("%d",&n);
				printf("\n\n\tAmount:%d",n*30);
				break ;
				case 3:
				printf("\n\n\tEnter the number of quentity burger:");
				scanf("%d",&n);
				printf("\n\n\tAmount:%d",n*85);
				break ;
				case 4:
				printf("\n\n\tEnter the number of quentity pizza:");
				scanf("%d",&n);
				printf("\n\n\tAmount:%d",n*200);
				break ;
				default :
				printf("\n\n\tInvalid choice!! Enter valid choice");
				break ;
				
				
		}
		printf("\n\n\tDo you want to countinue(y/n):");
		scanf("%c", &choice);
		
		
	}while(choice== 'Y' || choice == 'y');
	
	
}
