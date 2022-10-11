 // pointer + character + array and string
 
 #include<stdio.h>
 #include<conio.h>
 
 int main(){
 
 	char *str;
 	str="Wint War is an angel";   // pointer
 	char *name[4]={"Wint","War","Shwe","Yee"};  // character pointer array
 	printf("Printing name %s\n",name[1]);
 	
 	printf("My girlfriend %s\n",str);
 	printf("char pointer size on my processor %d",sizeof(str));   // 64 bit processor mhr ma loh 8 bit 
																// 32 so 4 bit
 
 	getch();
 	return 0; 
 }