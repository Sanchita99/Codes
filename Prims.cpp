#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

int main()
{
	int n,i,j,k,min=INT_MAX,p,q;
	
	printf("Enter no. of vertices\n");
	scanf("%d",&n);
	
	int a[n][n],s[n];
	
	printf("Enter adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
				a[i][j]=INT_MAX;
			if(a[i][j]<min)
			{
				min=a[i][j];
				p=i;
				q=j;
			}
		}
	}
	
	for(i=0;i<n;i++)	//Intialising visited vertex as 0
	{
		s[i]=0;
	}
	
	s[p]=1;
	s[q]=1;
	
	printf("%c %c\n",'A'+p,'A'+q);
	
	for(k=0;k<n-2;k++)
	{
		min=INT_MAX;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i]==1&&s[j]==0)
				{
					if(min>a[i][j])
					{
						min=a[i][j];
						p=i;q=j;
					}
				}
			}
		}
		
		printf("%c %c\n",'A'+p,'A'+q);
		 
		s[p]=1;
		s[q]=1;
		
	}
	
}
