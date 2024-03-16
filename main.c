/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Student {
    int id,age;
    char name[100];
    int marks[5];
};

void readStudentDetails(struct Student obj[],int n) {
   
    for (int i=0;i<n;i++) {
        printf("Enter student ID: ");
        scanf("%d", &obj[i].id);
        printf("Enter student name: ");
        scanf("%s",&obj[i].name);
        printf("Enter student age: ");
        scanf("%d", &obj[i].age);
        printf("Enter marks for each subject:\n");
        
        for(int j=1;j<=5;j++){
            printf("Enter Your Subject Marks %d = ",j);
            scanf("%d",&obj[i].marks[j]);
        }
    }
    
    for (int i=0;i<n;i++) {
        printf("Your ID: %d\n",obj[i].id);
        printf("Your name: %s\n",obj[i].name);
        printf("Your age: %d\n",obj[i].age);
        printf("Your marks for each subject:\n");
        
        for(int j=1;j<=5;j++){
            printf("Your Subject Marks %d = %d\n",j,obj[i].marks[j]);
        }
    }
    
}

void searchStudent(struct Student obj[],int n){
    int i;
    int id;

    printf("\n\n::searching::\n\n");
    
    printf("Search Student id = ");
    scanf("%d",&id);

    for(i=0;i<n;i++)
    {
        if(obj[i].id==id)
        {
            printf("Student Id =  %d\n",obj[i].id);
            printf("Student Name = %s\n",obj[i].name);
            printf("Student Age = %d\n",obj[i].age);
            for(int j=1;j<=5;j++){
            printf("Student Subject Marks %d = %d\n",j,obj[i].marks[j]);
        }

        }
    }

}

int main()
{
    int numberOfStudent;
    
    printf("Enter Number Of Student = ");
    scanf("%d",&numberOfStudent);
    
    struct Student s1[100];
    
    readStudentDetails(s1,numberOfStudent);

}
