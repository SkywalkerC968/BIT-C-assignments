#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Poker{
	char type;
	int idx;
};

int gate(int*n){
	int i = 0,flag = 0;
	for(;i < 4;i++){
		if(n[i] != 0)flag = 1;
	}
	return flag;
}

//int have(struct Poker*n,int len,char type,int idx){
//	int i = 0,flag = 0;
//	for(;i < len;i++,n++){
//		if((*n).type == type && (*n).idx == idx)flag = 1;
//	}
//	return flag;
//}

void read(struct Poker* a,char ch){
	while(ch != '\n'){
		int flag = 0,idx = 0;
		ch = getchar();
		for(;'A' <= ch && ch <= 'Z';(*a).type = ch,ch = getchar());
		for(;'0' <= ch && ch <= '9';(*a).idx = idx,ch = getchar()){
			idx = (idx<<1)+(idx<<3)+(ch^48);
			flag = 1;
		}
		if(flag)a++;
	}

}

int main() {
	int i = 0,j = 0,k = 0,num[4] = {0},sco[4] = {0};
	struct Poker card[4][16] = {0};
	char tmp;
	while(1){
		for(i = 0;i < 4;i++){
			num[i] = 0;
			sco[i] = 0;
			for(tmp = getchar();'0'<=tmp && tmp<='9';num[i] = (num[i]<<1)+(num[i]<<3)+(tmp^48),tmp = getchar());
			read(card[i],tmp);
		}
		if(gate(num)==0)break;
		int H[13] = {-50,-2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40};
		for(i = 0;i < 4;i++){
			int D = 0,S = 0,C = 0;
			for(j = 0;j < num[i];j++){
				switch(card[i][j].type){
					case 'D':
						D = 1;
						break;
					case 'S':
						S = 1;
						break;
					case 'C':
						C = 1;
						break;
					case 'H':
						sco[i] += H[card[i][j].idx-1];
						break;
				}
			}
			if(sco[i] == -194){
				if(D == 1 && S == 1)sco[i] = 500;
				else if(D == 1 && S != 1)sco[i] = 300;
				else if(D != 1 && S == 1)sco[i] = 100;
				else sco[i] = 200;
				if(C == 1)sco[i] *= 2;
			}
			else{
				if(D == 1 && S != 1)sco[i] += 100;
				else if(D != 1 && S == 1)sco[i] -= 100;
				if(C == 1){
					if(sco[i] == 0)sco[i] = 50;
					else sco[i] *= 2;
				}
			}
		}
		for(i = 0;i < 3;i++){
			if(sco[i] <= 0)printf("%d ",sco[i]);
			else printf("+%d ",sco[i]);
		}
		if(sco[i] <= 0)printf("%d\n",sco[i]);
		else printf("+%d\n",sco[i]);
	}
	
	return 0;
}

