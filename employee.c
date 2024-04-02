#include<stdio.h>
#include<stdlib.h>
struct employee {
    int id;
    char name[10];
    float salary;
};
void main(){
    int i,n,searchid,ch;
    struct employee emp[10];
    printf("enter the number of employeed\n");
    scanf("%d",&n);
    printf("enter the employee detaiols");
    for(i=0;i<n;i++){
            printf("employee id");
            scanf("%d",&emp[i].id);
            printf("\nemployee name:");
            scanf("%s",emp[i].name);
            printf("\nemployee salary");
            scanf("%f",&emp[i].salary);
        
    }
while(i){
    printf("1.display 2.search 3.exit");
    scanf("%d",&ch);
    switch(ch){
        case 1:for(i=0;i<n;i++){
            printf("id:%d,name:%s,salary:%f\n",emp[i].id,emp[i].name,emp[i].salary);
        }
        break;
        
        case 2:printf("enter id to be searched");
        scanf("%d",&searchid);
        for(i=0;i<n;i++){
            if(emp[i].id=searchid){
                 printf("id:%d,name:%s,salary:%f",emp[i].id,emp[i].name,emp[i].salary);
            }
        break;
                
           }
        if(i==n){
            printf("id not found");
        }
        break;
        case 3:exit(0);
        
        }
    }
    
}