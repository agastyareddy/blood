/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void p(char dname[100][20],int k,int age[100],char addr[100][40],char mailid[100][15],char number[100][10],char g[100],char blood[100][4] )
{
    printf("enter name");
    scanf("%s",dname[k]);
    printf("enter age");
    scanf("%d",&age[k]);
    printf("enter address");
    scanf("%s",addr[k]);
    printf("enter email");
    scanf("%s",mailid[k]);
    printf("enter mobile number");
    scanf("%s",number[k]);
    printf("enter gender");
    scanf("%s",&g[k]);
    printf("enter blood group");
    scanf("%s",blood[k]);
}
int main()
{
    //printf("Hello World");
    int n,k=0,age[100];
    char dname[100][20],addr[100][40],mailid[100][15],number[100][10],g[100][6],blood[100][4];
    printf("enter a postive number for blood page n");
    scanf("%d",&n);
    while(n>0)
    {
        printf("1:application 2:need blood\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:p(dname,k,age,addr,mailid,number,g,blood);k+=1;
            break;
            case 2:
            if(n==2)
            {
            int pk;
            printf("select 1:complete data 2:specific blood group 3:mobile 4:email");
            scanf("%d",&pk);
           // printf("%d",k);
            if(pk==1)
            {
                for(int i=0;i<k;i++)
                {
                    printf("%s  %d  %s  %s  %s  %s %s ",dname[i],age[i],addr[i],mailid[i],number[i],g[i],blood[i]);
                    printf("\n");
                }
            }
            if(pk==2)
            {
                char st[4];
                printf("enter blood group");
                scanf("%s",st);
                for(int i=0;i<k;i++)
                {
                    if(strcmp(st,blood[i])==0)
                    {
                    printf("%s \t %d \t %s \t %s \t %s \t %s \t %s ",dname[i],age[i],addr[i],mailid[i],number[i],g[i],blood[i]);
                    printf("\n");
                    }
                }
            }
            if(pk==3)
            {
                char st1[10];
                printf("enter mobile number");
                scanf("%s",st1);
                for(int i=0;i<k;i++)
                {
                    printf("%s",number[i]);
                    if(strcmp(st1,number[i])==0)
                    {
                    printf("%s \t %d \t %s \t %s \t %s \t %s \t %s ",dname[i],age[i],addr[i],mailid[i],number[i],g[i],blood[i]);
                    printf("\n");
                    }
                }
            }
            if(pk==4)
            {
                char st2[15];
                printf("enter mail id");
                scanf("%s",st2);
                for(int i=0;i<k;i++)
                {
                    if(strcmp(st2,mailid[i])==0)
                    {
                    printf("%s \t %d \t %s \t %s \t %s \t %c \t %s ",dname[i],age[i],addr[i],mailid[i],number[i],g[i],blood[i]);
                    printf("\n");
                    }
                }
            }
            }
            break;
            default:printf("enter valid number");
        }
        printf("to continue press postive number else enter a negative number");
        scanf("%d",&n);
    }

    return 0;
}
