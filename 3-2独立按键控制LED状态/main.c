#include <REGX52.H>
#include <intrins.h>


void Delay(unsigned int x)		//@12.000MHz
{
	while(x){
			unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i); 
		x--;
	}
  
}
	




void main(){
   P2=0xAA;//1010 1010
	while(1){
		
	   if(P3_1==0)
		 {
				Delay(20);
			  while(P3_1==0);
			  Delay(20);
			 
			  P2=~P2;
		 
		 }
	}




}