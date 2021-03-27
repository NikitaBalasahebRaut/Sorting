//program to perform bubble sort
#include<stdio.h>

void BubbleSort(int arr[],int iSize)
{
  int pass = 0;
  int j = 0;
  int temp = 0;
  int no = 0;
  int k = 0;
  
  for(pass  = 0; pass < iSize-1; pass++)
  {
    for(j = 0; j < iSize-1; j++)
	{
	   if(arr[j] > arr[j+1])
	   {
	      temp = arr[j];
		  arr[j] = arr[j+1];
		  arr[j+1] = temp;
        }
    }
	
	no = pass+1;
	printf("\n array after pass %d :- \t",no);
	for(k = 0; k < iSize; k++)
	{
		printf("%d\t",arr[k]);
	}
	printf("\n");
}
}
int main()
{
  int iSize = 0;
  int i = 0;
  
  printf("Enter the size of the array\n");
  scanf("%d",&iSize);
  int arr[iSize];
  
  printf("Enter the elements of the array\n");
  for(i = 0; i < iSize; i++)
  {
     scanf("%d",&arr[i]);
  }
   
  printf("Entered data is\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \n",arr[i]);
  }
  
  BubbleSort(arr,iSize);
  
  printf("\n Array after complete sorting\n");
  for(i = 0; i < iSize; i++)
  {
     printf("%d \t",arr[i]);
  }
  
return 0;
}

/*
D:\ProgramTopicWise\DS>myexe
Enter the size of the array
89
Enter the elements of the array
74
12
45
11
^C
D:\ProgramTopicWise\DS>myexe
Enter the size of the array
5
Enter the elements of the array
89
74
12
45
11
Enter data is
89
74
12
45
11

 array after pass 1 :-  74      12      45      11      89

 array after pass 2 :-  12      45      11      74      89

 array after pass 3 :-  12      11      45      74      89

 array after pass 4 :-  11      12      45      74      89

 Array after complete sorting
11      12      45      74      89

*/