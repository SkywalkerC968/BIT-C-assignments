#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*使用数组实现链表，空间利用率较低，但是索引方式相较于链表遍历方式，快得多 
本地只能运行1e5的数组大小，提交时改为1e6即可*/ 

int main() {
//	设置表头 
	int lst[(int)1e5];//默认数组x位置代表x数值，存入下一个数值的位置（=数值） 
	lst[1] = 0; 
//	读入数据 
	int n,i;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		int op,x,y; 
		scanf("%d",&op);
		if(op == 1){//1号插入操作 
			scanf("%d%d",&x,&y);
			lst[y] = lst[x];
			lst[x] = y;
		}
		else if(op == 2){//2号查询操作 
			scanf("%d",&x);
			printf("%d\n",lst[x]); 
		}
		else if(op == 3){//3号删除操作 
			scanf("%d",&x);
			y = lst[x];
			lst[x] = lst[lst[x]];
			lst[y] = 0;//形式化释放空间 
		}
	}
	return 0;
}

