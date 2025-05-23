#include <stdio.h>
int countdigit(int x){
    int c=0;
    while(x>0){
        c++;
        x/=10;
    }
    return c;
}
int main(){
    printf("%d",countdigit(12345));
}