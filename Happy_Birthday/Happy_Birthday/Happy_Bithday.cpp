#include <bits/stdc++.h>

using namespace std;

void delay()
{
	for(int i =0; i<1000; i++)
	for(int j =0; j<3000; j++){
	}
}
void delay1()
{
	for(int i=0; i<10000; i++)
	for(int j=0; j<3000; j++){
	}
}
void ChangeColor()
{
	system("COLOR 8"); delay1();
	system("COLOR D"); delay1();
	system("COLOR 5"); delay1();
	system("COLOR B"); delay1();

}
int main(void)
{

	FILE *in=fopen("Happy_Bithday.txt","r");
    char c;
    c=fgetc(in);
	while(c!=EOF){
		if(c!=' ')
		delay();
		putwchar(c);
		c=fgetc(in);
	}
	fclose(in);
	while(1)
	{
		ChangeColor();
	}
}











