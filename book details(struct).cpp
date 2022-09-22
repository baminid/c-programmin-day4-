#include<stdio.h>
#define SIZE 20

struct bookdetail

{

          char title[20];

          char author[20];

          char subject[20];

          int id[10];

};

void output(struct bookdetail v[],int n);

int main()

{

          struct bookdetail b[SIZE];

          int n,i;

          printf("Enter the Numbers of Books:");

          scanf("%d",&n);

          printf("\n");

          for(i=0;i<n;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the title:\n");

                   scanf("%s",&b[i].title);

                   printf("Enter the Author of Book:\n");

                   scanf("%s",&b[i].author);

                   printf("Enter the subject:\n");

                   scanf("%s",&b[i].subject);

                   printf("Enter the id of Book:\n");

                   scanf("%d",&b[i].id);

          }

          output(b,n);


}

void output(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

                    printf("\n");

                   printf("Book No.%d\n",t);

                   printf("\t\tBook %d title is=%s \n",t,v[i].title);

                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);

                   printf("\t\tBook %d subject is=%s \n",t,v[i].subject);

                   printf("\t\tBook %d id is=%d \n",t,v[i].id);

                    printf("\n");

          }

}
