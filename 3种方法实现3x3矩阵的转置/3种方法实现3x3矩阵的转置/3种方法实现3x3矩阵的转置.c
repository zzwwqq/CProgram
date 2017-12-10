//3种方法实现3x3矩阵的转置

#include<stdio.h>
#include<stdlib.h>

//指针变量
void move1(int *pointer1){
	int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			t=*(pointer1 + 3*i+j);                     //正确
			*(pointer1 +3*i+j)=*(pointer1 +3*j+i);//正确
            *(pointer1+3*j+i)=t;//正确
		}
	}

}

//方法错误
void move2(int *pointer2){
    int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
	     t= *(*(&pointer2+i)+j);//错误   疑问：为什么
		 *(*(&pointer2+i)+j) = *(*(&pointer2+j)+i);//错误
		 *(*(&pointer2+j)+i)=t;//错误

		}
	}
}

//指向含三个元素的数组的指针变量
void move3(int (*pointer3)[3]){
    int i,j,t;
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
         t=*(*(pointer3+i)+j);
		 *(*(pointer3+i)+j)=*(*(pointer3+j)+i);
		 *(*(pointer3+j)+i)=t;
		}
	}
}
//下标法
void move4(int x[][3]){
   int i,j,temp;
   printf("原3阶矩阵为：\n");
   for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("%d ",x[i][j]);
	   }
	   printf("\n");//每一行元素输出完后，就输出换行
   }

   for(i=0;i<3;i++){
	   for(j=i;j<3;j++){  //必须j从i开始，如果从0开始，则第一行中交换了数的元素，在第二行中又换回了原值。
	       temp=x[i][j];
		   x[i][j]= x[j][i];
		   x[j][i]=temp;
	   }
   }
   printf("交换后的3阶矩阵为：\n");
   for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("%d ",x[i][j]);
	   }
	   printf("\n");//每一行元素输出完后，就输出换行
   }
   printf("\n");
}
void main(){
    int i;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int *p1;
	int *p2;
	int (*p3)[3];
	
//	p1=&a[0][0];
//	move1(p1);

//	p2=&a[0][0];
//	move(p2);

//	p3=a;
//	move3(p3);

	move4(a);
	
	for(i=0;i<3;i++){
	    printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
	}
}
