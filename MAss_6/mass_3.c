#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void sort(int*m){
	int i = 0,j = 0,tmp = 0;
	for(;i < 4;i++){
		for(j = 0;j < 3-i;j++){
			if(m[j] > m[j+1]){
				tmp = m[j];
				m[j] = m[j+1];
				m[j+1] = tmp; 
			}
		}
	}
}

//为完整模拟从小到大的组合顺序，如同合成熔炼，但是其实太繁 
void clear(int*p,int i){
	for(;i < 5;i++){
		p[i] = 0;
	}
}

int syn(int*m,int*p){
	int i = 0;
	while(p[4]){//如33331情况下可以连续合成至40000 
		for(i = 4;i > 0;i--){
			if(p[i] != p[i-1])break;
		}
		for(j = 0;j < 4;j++){
			if(p[i] == m[j]){
				p[i] = m[j+1];
				clear(p,i+1);
			}
		}
	} 
	
}

int main() {
	int a = 0,b = 0,c = 0,d = 0,i = 0,s = 0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int m[4] = {a,b,c,d},p[5] = {0},r[41] = {0};
	sort(m);
	if(m[0] != 1)printf("1\n");
	else{
		for()//难以为继，很难判断填满五个和当前合成代数（此时应新填入的数据） 
	}
	return 0;
}

