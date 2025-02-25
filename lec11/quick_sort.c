#include<stdio.h>
int partition(int array[], int l, int h);
void quickSort(int array[], int l, int h);
void swap(int *a, int *b);
void print(int array[], int size);

int partition(int array[], int l, int h)
{
int i=l-1;
int x=array[h];
int j;
for (j=l;j<=h-1;j++){
	if (array[j]<=x)
	{
		i++;
                swap(&array[i], &array[j]);
                
	}

}
swap(&array[i+1], &array[h]);
return (i+1);

}


void quickSort(int array[], int l, int h)
{
	int stack[h-l+1];
	int tos=-1;

	stack[++tos]=l;
	stack[++tos]=h;

	while(tos>=0)
	{
		h=stack[tos--];
                l=stack[tos--];
		int p=partition(array, l, h);
                
		if ((p-1)>l)
		{
			stack[++tos]=l;
			stack[++tos]=p-1;

		}

		if((p+1)<h)
		{
			stack[++tos]=p+1;
			stack[++tos]=h;
		}

	}

}

void swap(int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

void print(int array[], int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("%d ", array[i]);
		printf("\n");
}

int main()
{
	int size=8;
	int l=0;
	int h=size-1;
	int array[8]={10, 20, 80, 30,100, 90, 15, 40};
        quickSort(array,l,h);
	print(array, size);
	return 0;

}


