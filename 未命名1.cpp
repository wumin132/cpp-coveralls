#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-----------------三角形形状判断程序--------------\n");
    double a,b,c;
    printf("请在下方输入三条边的长度：\n");
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    //scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        printf("该三条边能组成三角形\t");
        if(a==b||a==c||b==c){
            if(a==b&&a==c&&b==c){
                printf("且此三角形为等边三角形");
            }else{
                 printf("且此三角形为等腰三角形");
            }
        }
        else if(a*a+b*b==c*c||a*a+c*c==b*b||a*a==b*b+c*c){
        	printf("且此三角形为直角三角形");
			}
		else {printf("且此三角形为普通三角形"); 
		} 
        }


    else{
        printf("该三条边不能构成三角形！");
    }
    return 0;
}


