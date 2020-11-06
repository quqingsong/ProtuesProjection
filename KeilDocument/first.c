#include"reg51.h"

unsigned int s[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};



void segLightUp();
void delay(unsigned int n);



void main(){
	while(1){
		segLightUp();	
	}
}

//数码管显示数字
void segLightUp()
{
	unsigned int i=0;
	for(i=0;i<10;i++){
		P2=s[i];
		delay(10);
	}
}


//延时函数
void delay(unsigned int n)
{
    unsigned int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<10000;j++);
		}
}