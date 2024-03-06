#include <REGX52.H>


void Delay(unsigned int x)		//@12.000MHz
{
	while(x--){
		unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
	
	}
	

void main(){
	
	unsigned char LED_num=0;

	while(1){
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			
			LED_num++;
			P2=~LED_num;
			
			
		}
	
	}


}