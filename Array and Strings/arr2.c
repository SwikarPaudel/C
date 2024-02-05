#include <stdio.h>
int read(int *a)
{
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        
        scanf("%d",a+i);
	}
}

int sort(int *a)
{
    int i,j,temp;
        for(i=0;i<5;i++){ 
	        for(j=i+1;j<5;j++ ){
	            if(*(a+i)>*(a+j)) {
	            	temp = *(a+i);
		            *(a+i)=*(a+j);
		            *(a+j)=temp;
				}   
	        }
    }
}

int display(int *a)
{
        int i;
        for(i=0;i<5;i++){
        printf("%d\t",*(a+i));
    }
    return 0;
}
