#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};
void a(struct complex *c1,struct complex *c2);
int main()
{
    struct complex c1={2,3};
    struct complex c2={4,5};
    a(&c1,&c2);
    return 0;
}
void a(struct complex *c1,struct complex *c2){
    struct complex c3,*c;
    c=&c3;
    c->real=c1->real+c2->real;
    c->img=c1->img+c2->img;
    printf("%d + %di",c->real,c->img);
    
}
#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};
void a(struct complex *c1,struct complex *c2);
int main()
{
    struct complex c1={2,3};
    struct complex c2={4,5};
    a(&c1,&c2);
    return 0;
}
void a(struct complex *c1,struct complex *c2){
    struct complex c3,*c;
    c=&c3;
    c->real=c1->real+c2->real;
    c->img=c1->img+c2->img;
    printf("%d + %di",c->real,c->img);
    
}
