// Structure 1

// initilization and declaration m tuu wo structures twy mhr
// initialization >> int a;
// Declaration >> a=10;

#include<stdio.h>
#include<conio.h>
struct collect{

	int fvalue;
	char cname;
	double age;

};
int main(){

	struct collect str_name;
	str_name.fvalue=10;
	str_name.cname='a';
	printf("Data from structure is : %d\n",str_name.fvalue);
	printf("Data from structure is : %c",str_name.cname);

getch();
return 0; 
}