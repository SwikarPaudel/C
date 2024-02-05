
//Structure within Structure
#include <stdio.h>


    struct student{
       char name[10];
       int marks;
             struct dob{
              int year;
              int month;
          }d;
   };

int main()
{  
  struct student s1={"Ram",10,{11,12}};
  printf("%d",s1.d.month);
 
    return 0;
}
