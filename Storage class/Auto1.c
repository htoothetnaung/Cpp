/*

Storage Class
What is Storage? variable or function feature
How many types of Storage Class? 1. auto 2.extern 3.static 4.register
How did they use?

*/
#include<stdio.h>
int main(){ // 1 codeblock 
	auto int a=10; // keyword=auto; // auto int a(garbage value)
				//automatic variable or local variablev // program run pee yin di code block htel ka value ka destory twr
				// automatic variable ka thu code block htel mhr pl run loh ya tl auto destroy 
	
	{ // 2 codeblock
		auto int a=20;
		
	
		{ // 3 codeblock
			auto int a=30;
			printf("Third code block is %d\n",a);
		}
		printf("Second code block is %d\n",a);
	}
	printf("First code block is %d\n",a);

	return 0;
}
