//Convert 
#include<stdio.h>
#include<conio.h>
int main(){
	int y,m,d;
	printf("Enter year, month ,date in BS");
	scanf("%d%d%d",&y,&m,&d);
	if(d>25){d=d-25;
	}
	else{d=d+30;
	--m;
	d=d-25;
	}
	if(m>8){m=m-8;
	}
	else{m=m+12;
	--y;
	m=m-8;
	}
		y=y-56;
	printf("The date in AD is %d/%d/%d",y,m,d);
}
