#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	double w = 0,l = 0,x1 = 0,y1 = 0,x0 = 0,y0 = 0;
	double *px = &x0,*py = &y0;
	char ref[1000];
	scanf("%lf%lf%lf%lf%lf%lf",&w,&l,&x0,&y0,&x1,&y1);
	scanf("%s",ref);
	int i = 0,slen = strlen(ref);
	for(;i < slen;i++){
		switch(ref[i]){
			case 'F':
				x0 = x0;
				y0 = -y0;
				break;
			case 'L':
				x0 = -x0;
				y0 = y0;
				break;
			case 'R':
				x0 = 2*w-x0;
				y0 = y0;
				break;
			case 'B':
				x0 = x0;
				y0 = 2*l-y0;
				break;
		}
	}
	
	printf("%.4lf\n",sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)));
	return 0;
}

