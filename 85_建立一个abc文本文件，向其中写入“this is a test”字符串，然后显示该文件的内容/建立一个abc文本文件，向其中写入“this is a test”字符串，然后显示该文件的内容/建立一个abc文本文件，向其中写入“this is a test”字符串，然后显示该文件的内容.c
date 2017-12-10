//建立一个abc文本文件，向其中写入“this is a test”字符串，然后显示该文件的内容

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char string[]="this is a test";
	char buf[20];
	FILE *fp;
	if((fp=fopen("abc","w+")) == NULL){   //'+'表示既能读也能写，w表示文件不存在时就建立新文件
        printf("不能建立abc文件\n");
	    exit(1);
	}
	//因为strlen函数测得的是有效长度，不包含字符串结束符，要包含字符串结束符时应该加1
    fwrite(string,strlen(string)+1,1,fp);//以二进制方式向文件写数据，写完后文件位置标记到了文件尾
	fseek(fp,0L,0);//将文件位置标记移动到文件头
	fread(buf,strlen(string)+1,1,fp);//从文件中读数据
	printf("%s\n",buf);
	fclose(fp);
	return 0;
}