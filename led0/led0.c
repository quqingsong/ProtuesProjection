#include"reg51.h"

sbit led0=P2^0;
sbit led1=P2^1;
sbit led2=P2^2;
sbit led7=P2^7;



//延时函数
void delay(unsigned int n)
{
    unsigned int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<10000;j++);
		}
}
void main(){
	while(1){
		
		led0=0;
		led1=1;
		led2=1;
		led7=1;
		delay(20);
		led0=1;
		led1=0;
		led2=0;
		led7=0;
		delay(20);


	}
}