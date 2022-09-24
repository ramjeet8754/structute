#include<stdio.h>
#include <stdlib.h>
/*void main(){
int a[] = {1,2,3,4};
unsigned char *ptr;
ptr = a;
int i;
for(i=0;i<5;i++)
{
    printf("%d\n",*(ptr+i));
}
}*/


/*void main(){
int a[2][3] = {{1,2,3},{4,5,6}};
int (* ptr)[3];
ptr = a;
for (int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
        {
        printf("%d\n",*(*(ptr+i)+j));
        }

}
}*/
void main(){
int *ptr;
ptr = (int*)malloc(sizeof(double)*10);
for(int i=0;i<20;i++){
    *(ptr +i) = i;

}
//printf("%d\n",sizeof(*ptr));
for(int j=0;j<80;j++){

    printf("%d\n",*(ptr+j));
}
}


