#include<stdio.h>
#include<stdlib.h>

struct emp {
	int no;
	int age;
	//int *p;
}a;

struct stu{
	int rollno;
	char name[20];
}b;

struct add{
struct emp e;
struct stu s;
};

int main(){
	 
	 int c = 123;
	 	struct add *p = (struct add*)calloc(1,sizeof(struct add));
	
	p->e.age =12;
//	p->e.p = &c;
	//p->s->name = "pavan";
	
//	printf("p->e->age = %d, p->s->name = %s",p->e->age ,p->s->name);
printf("%d ",p->e.age);
	//	printf("p->e->p = %d ",*p->e.p);
	
	
}
