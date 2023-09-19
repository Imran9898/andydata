#include <stdio.h>
int main()
{
    int x,y,z,sum;
    printf("Enter angle value : ");
    scanf("%d",&x);//0<value<180
    printf("Enter angle value : ");
    scanf("%d",&y);//0<value<180
    printf("Enter angle value : ");
    scanf("%d",&z);//0<value<180
    sum = x+y+z;
    if(sum==180 && x>0 && x<180 && y>0 && y<180 && z>0 && z<180)
    {
         printf("The triangle is valid");
    }
    else{
        printf("The triangle is not valid");
    }
    return 0;
}
