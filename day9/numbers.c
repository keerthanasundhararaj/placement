#include <stdio.h>
void numbers(int x){ //declaration
    if(x==0)return; //base condition
    printf("%d ",x);
    numbers(x-1);
    // while(x>0){
    //     printf("%d ",x);
    //     x-=1;
    // }
}

    numbers(10);
}



void numbers(int x){ //declaration
    if(x==0) return; //base condition
    printf("%d",x);
    numbers(x-1);//
}
void numbersdesc(int x){
    if(x==0) return;
    numbers(x-1);
    printf("%d",x);
}

{
    numbers(10);
    printf("\n");
    numbersdesc(10);

}


void multiple(int x, int y) {
    if (x>y)
        return;

    if (x% 2 == 0) {
        printf("%d ",x);
    }

    multiple(x + 1, y);
}

int main() {
    int y;

    printf("Enter the limit: ");
    scanf("%d", & y); 

    printf("Multiples of 2 up to %d:\n",y);
    multiple(1, y);  

    return 0;
}



