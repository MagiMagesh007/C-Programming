#include <stdio.h>
int main(){
	FILE*fp;
	fp=fopen("C:\cfiles\test.txt","w");
	fprintf("This Is Printing For Fprintf...\n");
	fputs("This is Testing For fputs...\n",fp);
	fclose(fp);
}
