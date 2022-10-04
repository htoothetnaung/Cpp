// auto variable ka outside mhr declare loke htr tae hrr ko inside mhr lr thone loh ya tl 
// !! But inside mhr declare loke htr tae hrr ko top outside mhr pyn lr thone loh m ya wo 

/*summary
	outside auto can be used in inner codeblock
	inside auto cannot be used in outer codeblock
*/
#include<stdio.h>
 
 int main(){
 
 	auto int a=10;
 	{
 		printf("Outside auto in inner codeblock is %d",a); //auto outside in inner code block `
 	}
 
 
 
 	return 0;
 }