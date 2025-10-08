#include<stdio.h>
int main(){

    //print odd num 1 to 10
    int i=1;
    while(i<=10){
        if(i%2!=0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");



    //print odd num 10 to 1
    int j = 10;
    while(j>=1){
        if(j%2!=0){
            printf("%d ", j);
        }
        j--;
    }
    printf("\n");



    //print 1 to k -------> take input k from user 
    int k;
    printf("enter k: ");
    scanf("%d", &k);
    int m = 1;
    while(m<=k){
        if(m%2!=0){ 
           printf("%d ", m);
        }
        m++;
    }
    printf("\n");



    //print w to 1 -------> take input w from user
    int w;
    printf("enter w: ");
    scanf("%d", &w);
    int h = 9;
    while(h>=w){
        printf("%d ", h);
        h -= 2;
    }
    printf("\n");



    //print y to z -----> take input y and z from user
    int y, z;
    printf("enter y and z: ");
    scanf("%d %d", &y, &z);
    int d = y;
    while(d<=z){
        printf("%d ", d);
        d +=2;
    }
}