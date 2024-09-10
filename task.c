#include <stdio.h>
#include <stdlib.h>
#include "task.h"


/*
int main()
{
    
    
    Student st;
        scanf("%s", st.name);
        scanf("%s", st.lastname);
   
        for(int i = 0; i < 10; i++)
        {
            printf("%d\n", rand() % (100 + 1));
        }
     Student st1; 
        scanf("%s", st1.name);
        scanf("%s", st1.lastname);
        for(int i =0; i<10; ++i)
        {
             printf("%d\n",rand() % (100 +1));
        }
    Student st2;
        scanf("%s", st2.name);
        scanf("%s", st2.lastname);
        for(int i =0; i<10; ++i)
        {
             printf("%d\n", rand() % (100 +1));
        }

   
    printf("%s %s\n", st[i].name, st[i].lastname);
}
*/
int main()
{
    Student st1;
    Student st2;
    Student st3;

    Student* students[3];
    students[0]= &st1;
    students[1]=&st2;
    students[2]=&st3;

    scanf("%s", st1.name);
    scanf("%s", st2.lastname);
    for(int i=0; i<10; ++i)
    {
        st1.avg[i]= rand() % (100 +1);
    }

    scanf("%s", st2.name);
    scanf("%s", st2.lastname);
    for(int i=0; i<10; ++i)
    {
        st2.avg[i]=rand() % (100 +1);
    }

    scanf("%s", st3.name);
    scanf("%s", st3.lastname);
    for(int i =0; i<10; ++i)
    {
        st3.avg[i]=rand() % (100 +1);
    }

    average(students, 3);
    int max = students[0]->grade;
    char* max_name = students[0]->name;
    char* max_lastnam = students[0]->lastname;
    for(int i =1; i<3;++i)
    {
        if(students[i]->grade > max)
        {
            max = students[i]->grade;
            max_name = students[i]->name;
            max_lastnam = students[i]->lastname;
        }
        printf("%s %s %d", max_name, max_lastnam,max);
    }



}





























