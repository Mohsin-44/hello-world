#include<stdio.h>

int main()
{
	
	int s1=0,s2=0,s3=0,s4=0,child1=0,child2=0,child3=0,ppid=0,sum=0;

	child1=fork();
 	if(child1>0)
	{
		for(int j=1;j<=25;j++)
		{
			s1=s1+j;
		}
		printf("Sum calculated by Parent : %d\n",s1);
		sum=sum+s1;
		
	
		
		child2=fork();
		if(child2>0)
		{
			
			child3=fork();
			if(child3>0)
			{
				printf("Parent\n");
				
			}
			else if(child3==0)
			{
				for(int k=26;k<=50;k++)
				{
					s4=s4+k;
				}
				sum=sum+s4;
				printf("Sum calculated by Child  : %d\n",s4);
				printf("Total Sum : %d\n",sum);
			}
		}
		else if(child2==0)
		{
			for(int k=51;k<=75;k++)
			{
				s3=s3+k;
			}
			sum=sum+s3;
			printf("Sum calculated by Child  : %d\n",s3);
			
			
				
		}			
	}
	else if(child1==0)
	{
		for(int k=76;k<=100;k++)
		{
			s2=s2+k;
		}
		sum=sum+s2;
		printf("Sum calculated by Child  : %d\n",s2);
		
		

	}
	
	
		
}
