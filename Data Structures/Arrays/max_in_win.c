#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[] = {5,2,7,3,8,3,9,1,4,6,3};
    int n = 3, max, size = sizeof(a) / sizeof(a[0]);
    printf("%d\n",size);
    for(int i = 0; i < size - n; i++){
        max = 0;
        for(int j = i; j < n + i; j++){
            if(max < a[j])
                max = a[j];
        }
        printf("%d\t", max);
    }
}