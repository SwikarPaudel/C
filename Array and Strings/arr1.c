//WAP to sort 
#include<stdio.h>
int main() {
    int a[5],i;
    //Read
    for(i=0;i<5;i++){
        scanf("%d",a+i);
    }
      printf("The values before sorting \n");
    for(i=0;i<5;i++){
        printf("%d\t",*(a+i));
    }
 
    //sort 
    int j,t;
    for(i=0;i<5-1;i++)
    {
    	for(j=0;j<5-1;j++)
    	{
    		if(*(a+j)>*(a+j+1))
    		{
    			t=*(a+j);
    			*(a+j)=*(a+j+1);
    			*(a+j+1)=t;
			}
		}
	}
    //Write
       printf("\nThe values after sorting \n");
    for(i=0;i<5;i++){
        printf("%d\t",*(a+i));
    }
    printf("\n");
    return 0;
}
