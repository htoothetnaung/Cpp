// Structure 3(Multiple student data)

#include<stdio.h>
#include<conio.h>
#define STUDENTS 5
	
struct student{

	char name[20];
	int roll;
	float marks;


}stu[STUDENTS]	;
	
	
int main(){
	
	int i=0;
	for(i=0; i<STUDENTS; i++){
	
		stu[i].roll=i+1;
		printf("********************************\n");
		printf("For Roll Number %d\n",stu[i].roll);
		
		printf("Please enter student name: ");
		scanf("%s",&stu[i].name);
		
		printf("Please enter your marks: ");
		scanf("%f",&stu[i].marks);
	}
	
	for (i=0; i<STUDENTS; i++){
	
		printf("___________________________________\n");
		printf("Roll Number %d\n",i+1);
		printf("Student Name: %s\n",stu[i].name);
		printf("Marks: %f\n",stu[i].marks);
	}
	
	


getch();
return 0; 
}