#include"reg51.h"

sbit led0=P2^0;
sbit led8=P1^0;



//延时函数
void delay(unsigned int n)
{
    unsigned int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<10000;j++);
		}
}

//led灯
void led(){
	int i=0;
	for(i;i<8;i++){
		P2=~(0x01<<i);
		P1=0x01<<i;
		delay(20);
	}
}


void main(){
	while(1){
		led();

	}
}
