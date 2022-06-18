#include <stdio.h>
int p1(int a[],int low,int high,int start,int end);
void quicksort(int a[],int low,int high);
int partition(int a[],int low,int high);
 int p1(){
			int t,a[30],start,end;
			t=a[start];
			a[start]=a[end];
			a[end]=t;
		}
	int p2(){
	int t,a[30],low,end;
	t=a[low];
	a[low]=a[end];
	a[end]=t;
	
	return end;
}
		int main()
{
	int a[30],n,i;
	printf("Enter the no elements: \n");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("The sorted array is  \n");
	for(i=0;i<n;i++)
    printf("%d",a[i]);
   
  
	return 0;	
}

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int start =low;
	int end=high;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end){
	p1();	
}
    p2();
	}

}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int location=partition(a,low,high);
		quicksort(a,low,location-1);
		quicksort(a,location,high);
	}
}

