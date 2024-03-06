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
	unsigned char LEDnum=0;
	 P2=~0x01;
	
	
	while(1){
		 if(P3_0==0){ 
			 
				Delay(20);
				 while(P3_0==0);
				 Delay(20); 
			 
			 LEDnum++;
			 if(LEDnum==8)
					LEDnum=0;
			  P2=~(0x01<<LEDnum);
			 
			 }
		 
			 
			 if(P3_1==0){ 
			 
				Delay(20);
				 while(P3_1==0);
				 Delay(20); 
			 
				 if(LEDnum==0)
				 {
					  LEDnum=7;
				 }
					
				 else
				 {
						LEDnum--;
				 }
					
					P2=~(0x01<<LEDnum);
			 
			 }

	}
    
}


