#include <stdio.h>
#include <string.h>

#define MAX_NAME 30
#define MAX_LECT 100
#define MAX_STUD 100

typedef struct {
  char code[MAX_NAME];
  char name[MAX_NAME];
  char gender[MAX_NAME];
  int numStudents;
} Lecturer;

typedef struct {
  char code[MAX_NAME];
  char name[MAX_NAME]; 
  char gender[MAX_NAME];
  char fatherName[MAX_NAME];
  char motherName[MAX_NAME];
  int siblings;  
} Student;

Lecturer lecturers[MAX_LECT];
Student students[MAX_LECT][MAX_STUD];

int main() {
  
  int N;
  scanf("%d", &N);
  
  for(int i=0; i<N; i++) {
    scanf("%s", lecturers[i].code);
    scanf("%s", lecturers[i].name);
    scanf("%s", lecturers[i].gender);
    scanf("%d", &lecturers[i].numStudents);
    
    for(int j=0; j<lecturers[i].numStudents; j++) {
      scanf("%s", students[i][j].code);
      scanf("%s", students[i][j].name);
      scanf("%s", students[i][j].gender);
      scanf("%s", students[i][j].fatherName);
      scanf("%s", students[i][j].motherName);
      scanf("%d", &students[i][j].siblings);
    }
  }
  
  int K;
  scanf("%d", &K);
  
  printf("Kode Dosen: %s\n", lecturers[K-1].code);
  printf("Nama Dosen: %s\n", lecturers[K-1].name);
  printf("Gender Dosen: %s\n", lecturers[K-1].gender);
  printf("Jumlah Mahasiswa: %d\n", lecturers[K-1].numStudents);

  for(int i=0; i < lecturers[K-1].numStudents; i++) {
    printf("Kode Mahasiswa: %s\n", students[K-1][i].code);
    printf("Nama Mahasiswa: %s\n", students[K-1][i].name);
    printf("Gender Mahasiswa: %s\n", students[K-1][i].gender);  
    printf("Nama Ayah: %s\n", students[K-1][i].fatherName);
    printf("Nama Ibu: %s\n", students[K-1][i].motherName);
    printf("Jumlah Saudara Kandung: %d\n", students[K-1][i].siblings);
  }

  return 0;
}