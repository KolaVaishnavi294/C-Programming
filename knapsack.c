#include<stdio.h>
int heap[100];
int size=0;
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void insert(int val)
{
	heap[size]=val;
	int c=size;
	size++;
	while(heap[c]>heap[(c-1)/2])
	{
		swap(&heap[c],&heap[(c-1)/2]);
		c=(c-1)/2;
	}
}
void delete()
{
	swap(&heap[0],&heap[size-1]);
	size--;
	int c=0;
	int r,l,max;
	while(1)
	{
		l=2*c+1;
		r=2*c+2;
		max=c;
		if(l<size&&heap[l]>heap[max])
		max=l;
		else if(r<size&&heap[r]>heap[max])
		max=r;
		else if(max==c)
		break;
		swap(&heap[c],&heap[max]);
		c=max;
	}
}
void display()
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",heap[i]);
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
	    printf("1\n2\n3\nany\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			scanf("%d",&val);
			insert(val);
			}	
		else if(ch==2)
		{
			delete();
		}
		else if(ch==3)
		{
			display();
		}
		else{
			printf("Bye-Bye");
			break;
		}
	}
}
