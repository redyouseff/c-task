#include<stdio.h>
#include<string.h>

#define VAR 5
int main (){

    // double i=1.2;
    // char a ='a';
    // double n =1.33;
    // printf("%lf",n);
    // printf(" %lf \n",i);
    // printf(" hello there ");
    // printf("%d",sizeof(int)*4);
    // int arr[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     printf("%d \n",arr[i]);
    // }
    // printf("const : %d ",VAR);
    // const int var =5;
    // printf("const two : %d",var);

    // int a=5;
    // int b=&a;
    // printf("%d",b);
    // char name[14];
    
    // scanf("%s",name);
    // printf("%s",name);

     
    char name[7][10]={"yousef","mohamed"};
    char pass [7][10]={"yousef","123"};

  

    char n[20];
    char p[20];
    char s[20];
    char an[20];
    char ap[20];
    int c=1;
    int t;
    printf ("sign in :  (enter 1) \n ");
    scanf("%d",&t);
    printf("%d",t);

    if(t==1){
       printf ("enter the user name no space \n");
       scanf("%s",n);
       printf("\n enter the password no space \n");
       scanf("%s",p);
      
       int t1,t2,t1v=0,t2v=0;
       for(int i=0;i<7;i++){
         t1=strcmp(n,name[i]);
         t2=strcmp(p,pass[i]);
         if(t1==0){
            t1v=1;

         }
         if(t2==0){
            t2v=1;
         }
        
       }
      if(t1v==1&&t2v==1){
        printf("the name and the password are correct ");
      }
      else{
        printf("pleace try again ");
      }

      

    }
    // else{
    //     printf(" \n enter the name without space \n ");
    //     scanf("%s",an);
    //     printf("enter the password without space \n");
    //     scanf("%s",ap);
    //     if(c<7){
    //       strcpy(name[c+1],an);
    //        strcpy(pass[c+1],ap);
    //        c++;

    //     }

    // }

 



    return 0;

}