/**
                        -- Course Name : Data Structure --
                        -- Course No   : SWE127, SWE128 --
                        -- Problem No  : 002            --
                        -- Reg Number  : 2019831062     --
        -----------------------------------------------------------------
        |  Problem Statement :                                          |
        |---------------------------------------------------------------|
        | String Processing:                                            |
        | 1. Substring                                                  |
        | 2. Indexing                                                   |
        | 3. Length                                                     |
        | 4. Insert                                                     |
        | 5. Delete                                                     |
        | 6. Replace                                                    |
        | 7. Concatenate                                                |
        -----------------------------------------------------------------
*/
#include<stdio.h>
#include<limits.h>
#include<string.h>

void Substring();
void Indexing();
void Length();
void Insert();
void Delete();
void Replace();
void Concatenate();

int main()
{

    printf("ASSIGNMENT:: 2\n\n");

    ///ASSIGNMENT 2.1
    printf("ASSIGNMENT-> 2.1:\nENTER THE MAIN STRING: ");

    char str[1000];
    scanf("%s",str);

    int ind;
    printf("ENTER THE INDEX (0 BASED): ");
    scanf("%d",&ind);

    int len;
    printf("ENTER THE LENGTH OF THE SUBSTRING: ");
    scanf("%d",&len);

    Substring(str,ind,len);


    ///ASSIGNMENT 2.2
    printf("\n\nASSIGNMENT-> 2.2:\nENTER THE MAIN STRING: ");
    scanf("%s",str);

    char sub[1000];
    printf("ENTER THE SUBSTRING: ");
    scanf("%s",sub);

    Indexing(str,sub);


    ///ASSIGNMENT 2.3
    printf("\n\nASSIGNMENT-> 2.3:\nENTER THE MAIN STRING: ");
    scanf("%s",str);

    Length(str);


    ///ASSIGNMENT 2.4
    printf("\n\nASSIGNMENT-> 2.4:\nENTER THE MAIN STRING: ");
    scanf("%s",str);

    printf("ENTER THE INDEX WHERE THE SUBSTRING WILL BE ADDED (0 BASED): ");
    scanf("%d",&ind);

    printf("ENTER THE SUBSTRING: ");
    scanf("%s",sub);

    Insert(str,ind,sub);

    ///ASSIGNMENT 2.5
    printf("\n\nASSIGNMENT-> 2.5:\nENTER THE MAIN STRING: ");
    scanf("%s",str);

    printf("ENTER THE INDEX WHERE FROM THE SUBSTRING WILL BE DELETED: ");
    scanf("%d",&ind);

    printf("ENTER THE LENGTH OF THE SUBSTRING: ");
    scanf("%d",&len);


    Delete(str,ind,len);

    ///ASSIGNMENT 2.6
    printf("\n\nASSIGNMENT-> 2.6:\nENTER THE MAIN STRING: ");
    scanf("%s",str);

    char rep[1000];
    printf("ENTER THE SUBSTRING WHICH WILL BE REPLACED: ");
    scanf("%s",sub);

    printf("ENTER THE SUBSTRING WHICH WILL BE REPLACED BY: ");
    scanf("%s",rep);

    Replace(str,sub,rep);


    ///ASSIGNMENT 2.7
    char str1[1000],str2[1000];
    printf("\n\nASSIGNMENT-> 2.7:\nENTER THE FIRST STRING: ");
    scanf("%s",str1);

    printf("ENTER THE SECOND STRING: ");
    scanf("%s",str2);

    Concatenate(str1,str2);

}

void Substring(char str[],int ind,int len)
{
    char she[1000];
    int  k =0,i;
    printf("THE SUBSTRING IS: ");
    for( i = ind,k=0; i< ind+len ; i++,k++) she[k]=str[i];
    she[k]='\0';
    printf("%s\n",she);

}

void Indexing(char str[], char sub[])
{
    int i,j;
    for( i=0; i<strlen(str)-strlen(sub); i++)
    {
        int k = i;
       for(j=0; j<strlen(sub); j++)
       {
           if(sub[j]!=str[k]) break;
           k++;
       }
       if(j==strlen(sub)) break;
    }
    if(i==strlen(str)-strlen(sub)) printf("SUBSTRING IS NOT IN THE MAIN STRING\n");
    else printf("THE INDEX  IS: %d (0 BASED)\n",i);
}

void Length(char str[])
{
    int i=0;
    for(;str[i]!='\0';) i++;
    printf("THE LENGTH OF THE ARRAY IS: %d\n",i);
}

void Insert(char str[],int ind, char sub[] )
{
   char she[1000];
   int k=0;
   printf("MAIN STRING AFTER INSERTING A SUBSTRING: ");
   for(int i=0;i<ind;i++,k++)  she[k]=str[i];
   for(int i=0;i<strlen(sub);i++,k++)  she[k]=sub[i];
   for(int i=ind;i<strlen(str);i++,k++)she[k]=str[i];
   she[k]='\0';
   printf("%s",she);
   printf("\n");
}

void Delete (char str[],int ind,int len)
{
   char she[1000];
   int k=0;
   printf("MAIN STRING AFTER DELETING A SUBSTRING: ");
   for(int i=0;i<ind;i++,k++) she[k]=str[i];
   for(int i=ind+len;i<strlen(str);i++,k++) she[k]=str[i];
   she[k]='\0';
   printf("%s\n",she);
}

void Replace(char str[], char sub[], char rep[])
{
    char she[1000];
    int k=0;
    printf("MAIN STRING AFTER HAVING A REPLACEMENT IS: ");
    int i,j;
    for( i=0; i<strlen(str)-strlen(sub); i++,k++)
    {
        int k = i;
       for(j=0; j<strlen(sub); j++)
       {
           if(sub[j]!=str[k]) break;
           k++;
       }
       if(j==strlen(sub)) break;
       else she[k]=str[i];
    }
    if(i==strlen(str)-strlen(sub)) {printf("SUBSTRING IS NOT IN THE MAIN STRING\n");return;}
    for(int o=0;o<strlen(rep);o++,k++)  she[k]=rep[o];
    for(j=i+strlen(sub);j<strlen(str);j++,k++)she[k]=str[j];
    she[k]='\0';
    printf("%s",she);
    printf("\n");
}

void Concatenate(char str1[], char str2[]){

    char new_str[2000];
    int i,j;
    for(i=0;i<strlen(str1);i++)new_str[i] = str1[i];
    for(j=0;j<strlen(str2);j++)
    {
        new_str[i] = str2[j];
        i++;
    }
    new_str[i] = '\0';
    printf("THE CONCATENATED STRING IS: %s\n", new_str);
}
