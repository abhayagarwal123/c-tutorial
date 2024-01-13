#include<stdio.h>
#include<string.h>

int main(){
/*1 length
char a[20];
fgets(a,20,stdin);
int i=0;
while(a[i]!='\0'){
i++;

}
printf("%d",i);*/

//2concatenate

/*char a[20];
char b[15];
gets(a);gets(b);
int k=strlen(a);
int i=0;
while (b[i]!='\0')
{a[k]=b[i];
k++;i++;
  
}
a[k]='\0';
puts(a);*/


// 3compare
/*char a[20];
char b[20];int flag=1;
gets(a);gets(b);int i=0;

if(strlen(a)!=strlen(b)){printf("not equal");}else{
while(a[i]!='\0'&&b[i]!='\0'){
    //not using j because if number of element are different then not same
if ((int)(a[i])!=(int)(b[i])){flag = 0;break;}
i++;
}
if (flag==0){printf("not equal");}
else{printf("equal");}}*/


//4reverse
/*char a[20];
gets(a);
int i=0;
int k=strlen(a);
for(int i=0;i<k/2;i++){
char x=a[i];
char y=a[k-i-1];
a[i]=y;
a[k-i-1]=x;

}
puts(a);
*/

//5copy
/*char a[20];
char b[20];
gets(a);
int i=0;
while(a[i]!='\0'){
b[i]=a[i];
i++;
}
b[i]='\0';
puts(a);
printf("\n");
puts(b);*/

}