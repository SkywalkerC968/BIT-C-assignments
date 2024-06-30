#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double a1 = 0,a2 = 0,a3 = 0,a4 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,s = 0;
	scanf("%lf, %lf, %lf, %lf\n%lf, %lf, %lf, %lf",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4);
	
	if((b1>=a1 && b1<=a3) && (b3>=a1 && b3<=a3) && (b2>=a2 && b2<=a4) && (b4>=a2 && b4<=a4)){
		s = (b3-b1)*(b4-b2);
		printf("%.2lf\n",s);
	}
	else if((a1>=b1 && a1<=b3) && (a3>=b1 && a3<=b3) && (a2>=b2 && a2<=b4) && (a4>=b2 && a4<=b4)){
		s = (a3-a1)*(a4-a2);
		printf("%.2lf\n",s);
	}
	else if((b1>=a1 && b1<=a3) && (b3>=a1 && b3<=a3) && (b2>=a2 && b2<=a4) && !(b4>=a2 && b4<=a4)){
		s = (b3-b1)*(a4-b2);
		printf("%.2lf\n",s);
	}
	else if((a1>=b1 && a1<=b3) && (a3>=b1 && a3<=b3) && (a2>=b2 && a2<=b4) && !(a4>=b2 && a4<=b4)){
		s = (a3-a1)*(b4-a2);
		printf("%.2lf\n",s);
	}
	else if((b1>=a1 && b1<=a3) && (b3>=a1 && b3<=a3) && !(b2>=a2 && b2<=a4) && (b4>=a2 && b4<=a4)){
		s = (b3-b1)*(b4-a2);
		printf("%.2lf\n",s);
	}
	else if((a1>=b1 && a1<=b3) && (a3>=b1 && a3<=b3) && !(a2>=b2 && a2<=b4) && (a4>=b2 && a4<=b4)){
		s = (a3-a1)*(a4-b2);
		printf("%.2lf\n",s);
	}
	else if(!(b1>=a1 && b1<=a3) && (b3>=a1 && b3<=a3) && (b2>=a2 && b2<=a4) && (b4>=a2 && b4<=a4)){
		s = (b3-a1)*(b4-b2);
		printf("%.2lf\n",s);
	}
	else if(!(a1>=b1 && a1<=b3) && (a3>=b1 && a3<=b3) && (a2>=b2 && a2<=b4) && (a4>=b2 && a4<=b4)){
		s = (a3-b1)*(a4-a2);
		printf("%.2lf\n",s);
	}
	else if((b1>=a1 && b1<=a3) && !(b3>=a1 && b3<=a3) && (b2>=a2 && b2<=a4) && (b4>=a2 && b4<=a4)){
		s = (b1-a1)*(b4-b2);
		printf("%.2lf\n",s);
	}
	else if((b1>=a1 && b1<=a3) && !(b3>=a1 && b3<=a3) && (b2>=a2 && b2<=a4) && !(b4>=a2 && b4<=a4)){
		s = (a3-b1)*(a4-b2);
		printf("%.2lf\n",s);
	}
	else if((a1>=b1 && a1<=b3) && !(a3>=b1 && a3<=b3) && (a2>=b2 && a2<=b4) && !(a4>=b2 && a4<=b4)){
		s = (b3-a1)*(b4-a2);
		printf("%.2lf\n",s);
	}
	else if(!(b1>=a1 && b1<=a3) && (b3>=a1 && b3<=a3) && !(b2>=a2 && b2<=a4) && (b4>=a2 && b4<=a4)){
		s = (b3-a1)*(b4-a2);
		printf("%.2lf\n",s);
	}
	else if(!(a1>=b1 && a1<=b3) && (a3>=b1 && a3<=b3) && !(a2>=b2 && a2<=b4) && (a4>=b2 && a4<=b4)){
		s = (a3-b1)*(a4-b2);
		printf("%.2lf\n",s);
	}
	else printf("no intersection\n");
	return 0;
}

