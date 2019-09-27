#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int existFile(const char* path){
        FILE* fp=fopen(path,"r");
        if(fp==NULL){
		printf("NULL\n");
                return 0;
        }
        fclose(fp);
        return 1;
}
int main(){
	FILE *fp;
	char text[20],*pa;
	char filename[]={"Hello.txt"};
	fp=fopen(filename,"r");
	if (existFile(filename)){
        	puts("存在します。");
        	pa=fgets(text,20,fp);
        	printf("%s\n",text);
        	fclose(fp);
        }
        else{
        	puts("存在しません。");
        }
	pa=fgets(text,18,fp);
	printf("%s\n",text);
	fclose(fp);
	printf("--< while > -------------------\n");
	int i = 0;
	while (i < 10) {
		printf("Hello,World!!\n");
		i++;
	}
	printf("--< for > -------------------\n");
	int j;
	for(j=0;j<10;j++){
		printf("Hello,World!!\n");
	}
	time_t timer;
        struct tm *local;
        struct tm *utc;

        /* 現在時刻を取得 */
        timer = time(NULL);

        local = localtime(&timer); /* 地方時に変換 */

       /* 地方時 変換後表示 */
        printf("%4d/", local->tm_year + 1900);
        printf("%2d/", local->tm_mon + 1);
        printf("%2d ", local->tm_mday);
        printf("%2d:", local->tm_hour);
        printf("%2d:", local->tm_min);
        printf("%2d", local->tm_sec);
        printf(" %d\n", local->tm_isdst);
	return (0);
}
