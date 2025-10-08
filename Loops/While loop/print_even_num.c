#include<stdio.h>
int main(){

    //print even num 1 to 10
    int i=2;
    while(i<=10){
        if(i%2==0){
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");



    //print even num 10 to 1
    int j=10;
    while(j>=1){
        printf("%d ", j);
        j -= 2;
    }
    printf("\n");



    //print even num 1 to k ------->take input k from user 
    int k;
    printf("enter k: ");
    scanf("%d", &k);
    int l = 2;
    while(l<=k){
        printf("%d ", l);
        l += 2;
    }
    printf("\n");




    //print even num p to 1 ----------> take input p from user
    int p;
    printf("enter p: ");
    scanf("%d", &p);
    int f = 10;
    while(f>=p){
        printf("%d ", f);
        f -=2;
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