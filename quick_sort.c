#include <stdio.h>
#include <conio.h>

void quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main(){
	int i,n,key,*a;
	printf("\nEnter array length: ");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	printf("\nEnter array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	printf("\nSorted Array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	free(a);
	getch();
	return 0;
}

void quickSort(int a[], int low, int high){
	int p;
	if(low<high){
		p = partition(a,low,high);
		quickSort(a,low,p-1);
		quickSort(a,p+1,high);
	}
}

int partition(int a[], int low, int high){
	int pivot,i,j,temp;
	pivot = a[low];
	i = low;
	j = high;
	while(i<j){
		while(a[i]<=pivot){
			i++;
		}
		while(a[j]>pivot){
			j--;
		}
		if(i<j){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	a[low]=a[j];
	a[j]=pivot;
	return j;
}
