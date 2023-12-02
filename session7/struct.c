#include <stdio.h>
#include <string.h>

typedef struct person{
    char name[50];
    int citNo;
    float salary;
}orang; //sebagai keyword yang bisa dipanggil seperti tipe data

int main(int argc, char const *argv[])
{
    orang person1;

    strcpy(person1.name, "george");

    person1.citNo = 1999;
    person1.salary = 19000;

    printf("Name : %s\n", person1.name);
    printf("City Number : %d\n", person1.citNo);
    printf("Salary : %f\n", person1.salary);
    
    return 0;
}

