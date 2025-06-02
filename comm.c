#include <stdio.h>
int comm(int n, int k){
if (k == 0 || k == n)
    return 1;
else{
    return comm(n-1,k) + comm(n-1,k-1);
}

}
int main(){
printf("%d", comm(4,3));

}
