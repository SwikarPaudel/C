//Create A STRUCTURE Bike membervariable: companyName, manfdYear write
//into file and read and display
#include<stdio.h>
struct Bike{
    char bname[100];
    int year;
};
int main(){
    struct Bike b[5];
    int i;
    for(i=0;i<2;i++){
        fflush(stdin);
        gets(b[i].bname);
        scanf("%d",&b[i].year);

    }

    FILE *fp;
    fp=fopen("Bike.txt","r");
    fwrite(&b,sizeof(b),1,fp);
    fread(&b,sizeof(b),1,fp);
    for(i=0;i<2;i++){
        puts(b[i].bname);
    }
    fclose(fp);
    return 0;
}
