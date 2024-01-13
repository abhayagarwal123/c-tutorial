#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main()
{

/*
  int a[10];
  int n;
  printf("enter the number of element");
  scanf("%d",&n);
  for (int i = 0; i <n; i++)
  {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i <n; i++)
  {
    printf("%d\t ",a[i]*a[i]);
  }
  */


/*
int a[10];
  int n;
  int sum=0;
  printf("enter the number of element");
  scanf("%d",&n);
  for (int i = 0; i <n; i++)
  {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i <n; i++)
  {
    sum=sum+a[i];
  }
printf("average is %d ",sum/n);*/



/*
int a[10];
int n;
printf("enter the number of element");
scanf("%d",&n);
int counter=1;
for (int i = 0; i <n; i++)
  {
    scanf("%d",&a[i]);
  }
while(n>=counter){
for (int i = 0; i < n-counter; i++)
{
if (a[i]>a[i+1]){

  int temp=a[i];
  a[i]=a[i+1];
  a[i+1]=temp;
}
}

counter ++;

}
 for (int i = 0; i <n; i++)
  {
    printf("%d\t ",a[i]);
  }*/




/*
int search(int a[],int n,int key)
{
  int s,e;
s=0;e=n-1;
int m=(s+e)/2;
while(e>=s){
if(a[m]==key){return m+1;}
else if(key>a[m]){ s=m+1; }
else if(key<a[m]){ e=m-1; }
m=(s+e)/2;


}
return 0;
}
int main(){
int a[10];
int n,key;
printf("enter the number of element");
scanf("%d",&n);

for (int i = 0; i <n; i++)
  {
    scanf("%d",&a[i]);
  }printf("enter the key");
scanf("%d",&key);
int p=search(a,n,key);
if (p)
{
  printf("found at %d position ",p);

}

else{ printf("not found");}

}*/



// 6th 
/*int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows  ");
  scanf("%d", &r);
  printf("Enter the number of columns ");
  scanf("%d", &c);

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      
      scanf("%d", &a[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  
  printf("sum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
     
      
    }printf("\n");

  return 0;}*/



/**
int r, c, a[100][100], b[100][100], sum[100][100], i, j,multi[100][100];
  printf("Enter the number of rows  ");
  scanf("%d", &r);
  printf("Enter the number of columns ");
  scanf("%d", &c);

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      
      scanf("%d", &a[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      multi[100][100]=0;
      for (int k = 0; k<c; k++)
      {
       multi[i][j]+=a[i][k]*b[k][j];
      }
      
    }
for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", multi[i][j]);
  }
  printf("\n");
  */
  
  /**
  int r, c, a[100][100];
  printf("Enter the number of rows  ");
  scanf("%d", &r);
  printf("Enter the number of columns ");
  scanf("%d", &c);

  
  for (int i= 0; i < r; i++)
    for (int j  = 0; j < c; j++) {
      
      scanf("%d", &a[i][j]);
    }
    for (int i= 0; i < r; i++){
    for (int j  = 0; j < c; j++) {
      
      printf("%d ", a[j][i]);
    }printf("\n");
    }*/


/**
 int r, c, a[100][100],sum,sum1,sum2;
  printf("Enter the number of rows  ");
  scanf("%d", &r);
  printf("Enter the number of columns ");
  scanf("%d", &c);
sum=0;
  
  for (int i= 0; i < r; i++){
    for (int j  = 0; j < c; j++) {
      
      scanf("%d", &a[i][j]);
    }}

    for (int i= 0; i < r; i++){sum1=0;
    for (int j  = 0; j < c; j++) {
      
     sum1+=a[i][j];
    } printf("row wise sum is %d \n",sum1);}
for (int j= 0; j < c; j++){ sum2=0;
    for (int i = 0; i < r; i++) {
      
     sum2+=a[i][j];
    }printf("coloumn wise sum is %d \n",sum2);}
for (int i= 0; i < r; i++){
    for (int j  = 0; j < c; j++) {
      
     sum+=a[i][j];
    }}

printf("array sum is %d \n",sum);*/






/**
   int r, c, a[100][100];
  printf("Enter the number of rows  ");
  scanf("%d", &r);
  printf("Enter the number of columns ");
  scanf("%d", &c);

  
  for (int i= 0; i < r; i++){
    for (int j  = 0; j < c; j++) {
      if(i==j){a[i][j]=0;}
      else{scanf("%d", &a[i][j]);}
    }}

    for (int i= 0; i < r; i++){
    for (int j  = 0; j < c; j++) {
      printf("%d ",a[i][j]);
    
    } printf("\n");
    }*/
  }
