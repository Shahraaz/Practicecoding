#include<stdio.h>
int main(){
int i = 10 ;
int j = & i ;
printf("%d %d %d",i , j , *j);
}