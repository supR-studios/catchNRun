#include "lib/imports.h"
#include "lib/casual.h"
#include "lib/horror.h"




int main(int argc,char** argv)
{
	int a=menu();
	if(a==1){
		casual();
	}else if(a==2){
		horror();
	}
}



