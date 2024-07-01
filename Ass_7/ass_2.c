#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void sort(int* p,int len){//ц╟ещеепР 
	int i = 0,j = 0,tmp = 0;
	for(;i < len-1;i++){
		for(j = 0;j < len-i-1;j++){
			if(p[j] > p[j+1]){
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
	}
}

int main() {
	int i = 0,j = 0,n = 0,m = 0,sum = 0,a[106] = {0},b[106] = {0};
	scanf("%d%d",&n,&m);
	
	for(i = 0;i < n;i++)scanf("%d",a+i);
	for(i = 0;i < m;i++)scanf("%d",b+i);
	
	sort(a,n);
	sort(b,m);

	for(i = 0,j = 0;i < n && j < m;i++,j++){
		if(a[i] <= b[j])sum += b[j];
		else i--;
	}
	if(i < n)printf("bit is doomed!\n");
	else printf("%d\n",sum);

	return 0;
}

