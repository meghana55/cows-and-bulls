#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int rep[4],n[4];
void check();
void main()
{
	int j,i,flag =0,k,m,p;
	textcolor(RED);	
	srand(time(NULL));
	for(m=0,i=0;i<4;m++)
	{
		j = rand()%9;
		//printf("%d\n",j);
		for(k=0;k<4;k++)
		{
			if(j!=n[k])
			{
			flag =1;
			}
			else
			{
				flag =0;
				break;
			}
		}
		if (flag ==1)
		{
			n[i] = j;
			i++;
		}
	}
	//for(i=0;i<4;i++)
	//	printf("%d",n[i]);
	
	 check();
	
}
void check()
{
	int i,j,k,l,cows=0,bulls=0;
	printf("\nenter your guess\n");
	for(i=0;i<4;i++)
		scanf("%d",&rep[i]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(rep[j] == n[i])
			{
				if(i==j){
					bulls++;
				}
				else{
					cows++;
				}
			}
		
		}
	}
printf("cows = %d\n bulls = %d\n",cows,bulls);
if(bulls == 4)
	printf("HURRAH you WIN!! \n");
else
	check();
//else return 1;

}
