
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i=0;

}

void _CYCLIC ProgramCyclic(void)
{
	if (button[0]==1){
		led[0]=!led[0];
		button[0]=0;
	}
	if (button[1]==1){
		led[1]=!led[1];
		button[1]=0;
	}
	if (button[2]==1){
		led[2]=!led[2];
		button[2]=0;
	}
	if (button[3]==1){
		led[3]=!led[3];
		button[3]=0;
	}
	if (ledchanges==1){
		led[1]=!led[1];
		if (i%2){
			led[2]=!led[2];
		}
		if (i%4){
			led[3]=!led[3];
		}
		if (i%8){
			led[4]=!led[4];
		}
		i++;
		
		
	}

		




	
}

void _EXIT ProgramExit(void)
{

}

