// Structure 2 (Student data program)

#include<stdio.h>
#include<conio.h>
struct collect{

	char *student_name;
	int student_id;
	int student_age;

}student_data;
int main(){

	char string[20];
	char *name=string;
	
	
	printf("Please enter your name : ");
	scanf("%s",name);
	student_data.student_name=name;
	printf("Your name is %s\n",student_data.student_name);

	
	printf("Please enter your ID: ");
	scanf("%d",&student_data.student_id);
	printf("Student ID is %d\n",student_data.student_id);
	
	printf("Please enter your age : ");
	scanf("%d",&student_data.student_age);
	printf("Student age is %d\n",student_data.student_age);

getch();
return 0; 
}