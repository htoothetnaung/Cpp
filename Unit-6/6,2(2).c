//username and password program 


#include<stdio.h>
#include<string.h> //dr htae pay ya ml strcmp ko tonne yin 
int main(){

	char usrname[]="Wint War";   // orginial username in system  
	char pass[]="passcode";     // original password in system
	char user_name[20];
	char passcode[20];
	printf("Please enter your user name: ");
	gets(user_name);
	printf("Please enter your password: ");
	gets(passcode);
	
	if (strcmp(usrname,user_name)==0 && (strcmp(passcode,pass)==0 )){
	
		printf("Access granted!");	
	}
	else{
	
		printf("Access denied!");	
	}

	return 0;
}