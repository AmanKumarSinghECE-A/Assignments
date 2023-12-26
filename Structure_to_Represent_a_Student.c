#include<stdio.h>

struct student{
char name[20];
char trade[20];
int rollnumber;
char gender;
};


void main()
{
  struct student student1;
  printf("Enter student name:");
  scanf("%s",student1.name);

  printf("Enter trade:");
  scanf("%s",student1.trade);

  printf("Enter rollnumber:");
  scanf("%s",&student1.rollnumber);

  printf("Enter gender (M/F):");
  scanf("%s",&student1.gender);

  printf("\n student Information:");
  printf("Name:%s\n",student1.name);
  printf("trade:%s\n",student1.trade);
  printf("rollnumber:%d\n",student1.rollnumber);
  printf("gender:%c\n",student1.gender);
  
}
