#include <stdio.h>
int *intercala_vetor(int *v1, int t1, int *v2, int t2){
int comeca,i, j, dif;
int t3 = t1 + t2;
int v3[t3];
if (t1 <= t2){
comeca = 1;
dif = t2 - t1;
}
else{
comeca = 0;
dif = t1 - t2;
}
if (comeca = 1){
    for (i = 0, j = 0; i < t1 && j < t1; i += 2, j++) {
    v3[i] = v1[j];
    v3[i + 1] = v2[j];
    }
    for(i = t1*2, j = t1 ;i< t3, j <= t2 - 1;i++, j ++){
        v3[i] = v2[j];
    }
}
return *v3;
int main(){
int v1[5] = {1,2,3,4,5, i};
int v2[7] = {6,7,8,9,10,11,12};
int k = intercala_vetor(v1,5,v2,7);
for(i = 0; i < 12;i++){
    printf("%d ", k[i]);

}


}
}
