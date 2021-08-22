#include <stdio.h>
#include <stdlib.h>
//first struct for course, Credit Hours and Student Score 
struct Courses {
	int Credit_Hours  ;
	float Score ;
};
//the second struct for student course and GPA
struct Student {
	struct Courses Arr_of_Courses [10];
	float GPA;
};
void acum_GPA (struct Student student);
int main() {
     //create struct student 
     struct Student student ;
     student.Arr_of_Courses[0].Credit_Hours =3;
     student.Arr_of_Courses[1].Credit_Hours=4; 
     //ask student for his score
    printf("Enter your score of in math: (out of 4) \n");
   	scanf("%f", &student.Arr_of_Courses[0].Score);
   	printf("Enter your score of Programming: (out of 4) \n");
   	scanf("%f", &student.Arr_of_Courses[1].Score);
   	//call function that calculate GPA
   	acum_GPA(student);
   	
   	system("pause");
   	return 0;
   }
//create function to calculate the GPA and print it
void acum_GPA (struct Student student){
    int sum_credit=0;
	float sum_GPA=0; 
    for (int i=0;i<=1;i++){
      sum_GPA+=(student.Arr_of_Courses[i].Credit_Hours*student.Arr_of_Courses[i].Score);
	  sum_credit+=student.Arr_of_Courses[i].Credit_Hours;
	  }
	  student.GPA=sum_GPA/sum_credit;
	printf("Your GPA is %f \n",student.GPA);
}
