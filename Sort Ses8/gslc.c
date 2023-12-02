#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Person {
    char name[50];
    int age;
    char major[50];
};



struct Person people[100];
int numberOfPeople = 0;


void input() {
    if (numberOfPeople >= 100) {
    		    printf("Total Mahasiswa sudah memenuhi batas.\n");
        return;
    }

    struct Person newPerson;

    printf("Masukkan nama: ");
    scanf("%s", newPerson.name);


   		 do	 {
       	 printf("Masukkan umur : ");
        if (scanf("%d", &newPerson.age) != 1) {
            printf("Input umur tidak valid. Masukkan kembali.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    printf("Masukkan jurusan: ");
    scanf("%s", newPerson.major);




    people[numberOfPeople++] = newPerson;
   
}


void display() {
   

    printf("Data:\n");
    for (int i = 0; i < numberOfPeople; i++) {
        printf("Nama: %s, Umur: %d, Jurusan: %s\n", people[i].name, people[i].age, people[i].major);
    	}
}


void sortUmur() {
    	struct Person temp;
    		for (int i = 0; i < numberOfPeople - 1; i++) {
       	 for (int j = 0; j < numberOfPeople - i - 1; j++) {
            if (people[j].age > people[j + 1].age) {
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
    
}


void sortNama() {
    struct Person temp;
    for (int i = 0; i < numberOfPeople - 1; i++) {
        for (int j = 0; j < numberOfPeople - i - 1; j++) {
        if (strcmp(people[j].name, people[j + 1].name) > 0) {
      temp = people[j];
            people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
   
}

int main() {
    int inp;

    while (1) {
        system("cls");

        printf("========================================\n");
        printf("	 	  Menu\n");
        printf("========================================\n");
        printf("1. Input data\n");
        printf("2. Tampilkan data\n");
        printf("3. Sortir Berdasarkan Umur\n");
        printf("4. Sortir Berdasarkan Huruf Pertama Nama\n");
        printf("5. Exit\n");
        printf(">> ");
        scanf("%d", &inp);

        switch (inp) {
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                sortUmur();
                break;

            case 4:
                sortNama();
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("error.\n");
                break;
        }
        
        printf("\nTekan tombol apapun untuk melanjutkan");
        getch(); 
    }

    return 0;
}
