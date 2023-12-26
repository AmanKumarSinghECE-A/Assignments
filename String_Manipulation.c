#include<stdio.h>
#include<string.h>

void main()
{
  char str1[]="Hello";
  char str2[]="Aman";

  int a;
  a=strcmp(str1,str2);
  printf("%d\n",a);

 //if strings will be having same  words it will print 0 .
 //otherwise it will print any other number.

  strcat(str1,str2);
  printf("concatenated string=%s\n",str1);

  int len1,len2;
  len1=strlen(str1);
  len2=strlen(str2);

  if(len1%len2==0)
  {
    printf("strings have equal length\n");
  }
  else
  {
    printf("strings do not have equal length\n");
  }
  int i,j;
  for(i=0,j=len1-1;i<j;i++,j--)
    {
    char t= str1[i];
    str1[i]=str1[j];
    str1[j]=t;
    }
  printf("reversed string=%s\n",str1);
}
