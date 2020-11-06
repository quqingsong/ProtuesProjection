#include"reg51.h"

sbit key0=P1^0;
unsigned int s[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
unsigned int num=0,flag=0;

void key();
void seg();
// void delay(unsigned int n);



void main(){
	while(1){
		key();
		seg();		
	}
}

//键盘控制数码管
void key()
{
	if(key0==0&&flag==0){
		flag=1;
	}
	if(key0==1&&flag==1){
		num++;
		flag=0;
	}
}

//数码管显示
void seg(){
	P2=s[num];
	if(num==10){
		num=0;
	}
}

//延时函数
// void delay(unsigned int n)
// {
    // unsigned int i=0,j=0;
    // for(i=0;i<n;i++){
        // for(j=0;j<100;j++);
		// }
// }