#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n,i,tmp,gain,d,value[6];
	scanf("%d",&n);
	for(i = 0;i < 6;i++){
		scanf("%d",&value[i]);
	}
	for(i = 0,d = 0,gain = 0;i < n;i++){
		scanf("%d",&tmp);
		if(tmp){
			d++;
			if(1<=d&&d<3)gain += value[0];
			else if(3<=d&&d<7)gain += value[1];
			else if(7<=d&&d<30)gain += value[2];
			else if(30<=d&&d<120)gain += value[3];
			else if(120<=d&&d<365)gain += value[4];
			else if(365<=d)gain += value[5];
		}
		else{
			d = 0;
		}
	}
	printf("%d",gain);
	return 0;
}

