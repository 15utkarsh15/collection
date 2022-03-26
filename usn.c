#include<stdio.h>
int main()
{
struct student
{
char usn;
char stuname;
int sem;
float m1,m2,m3,m4,m5,avg;
}
struct student s[10];
int i,n;
printf("Enter no of students recors");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Student usn");
scanf("%s",s[i]usn);
printf("Enter student name");
scanf("%s",s[i]stuname);
printf("Enter student semester");
scanf("%d",s[i]sem);
printf("Enter marks in 5 subjects");
scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
}
for(i=0;i<n;i++)
{
s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}
printf("Student scored above avg");
printf("\nusn\tstudentname\taverage");
for(i=0;i<n;i++)
{
if(s[i]avg>50.0)
{
printf("\n%s\t%s\t%f\n",s[i].usn,s[i].stuname,s[i].avg);
}
}
printf("student scored below average");
printf("\nusn\tstudentname\taverage");
for(i=0;i<n;i++)
{
if(s[i].avg<50.0)
{
printf("\n%s\t%s\t%f",s[i].usn,s[i].stuname,s[i].avg);
}
}
return 0;
}
