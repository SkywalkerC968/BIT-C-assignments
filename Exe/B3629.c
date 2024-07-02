#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int Test(int x,int n){//检测当前数量是否足量 
	int i,tot = x,flag = 0;
	while(x/3){
		tot += x/3;
		x = x/3+x%3;
	}
	if(tot >= n)flag = 1;
	return flag;
}

int main() {
	int n = 0;
	scanf("%d",&n);
	int btm = 0,cel = n;//设区间上下界，便于后续二分操作 
	while(cel-btm > 1){
		if(Test((cel+btm)/2,n))cel = (cel+btm)/2;
		else btm = (cel+btm)/2;
	}
	printf("%d",cel);
	return 0;
}

