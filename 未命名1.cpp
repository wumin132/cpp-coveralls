#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-----------------��������״�жϳ���--------------\n");
    double a,b,c;
    printf("�����·����������ߵĳ��ȣ�\n");
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    //scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        printf("�������������������\t");
        if(a==b||a==c||b==c){
            if(a==b&&a==c&&b==c){
                printf("�Ҵ�������Ϊ�ȱ�������");
            }else{
                 printf("�Ҵ�������Ϊ����������");
            }
        }
        else if(a*a+b*b==c*c||a*a+c*c==b*b||a*a==b*b+c*c){
        	printf("�Ҵ�������Ϊֱ��������");
			}
		else {printf("�Ҵ�������Ϊ��ͨ������"); 
		} 
        }


    else{
        printf("�������߲��ܹ��������Σ�");
    }
    return 0;
}


