#include <stdio.h>

int main() {
	int rollno;
	int sub1,sub2,sub3,total;
	float perct;
	char name[10];
	
	printf("Enter student name");
	scanf("%s",&name);
	
	printf("Enter rollno");
	scanf("%d",&rollno);
	
	printf("Enter marks of sub1,sub2,sub3");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	total=sub1+sub2+sub3;
	
	perct=total/3;
	
	printf("\nTotal : %d",total);
		printf("\nPercentage : %.2f",perct);
	
	//if((sub1<=40)&&(sub2<=40)&&(sub3<=40)){
	      if(perct<=40){
		  
          printf("Your result is fail");
          
	}
	else if((sub1>=40)&&(sub2>=40)&&(sub3>=40)){
		printf("\nyou are Pass");
	
	    if ((perct>40)&&(perct<50)){
		printf("\nGrade C ");
		}
	    else if ((perct>=50)&&(perct<70)){
		  printf("\nGrade B");
		}
        else{
		 printf("\nGread A");
		}
    }
	//	printf("Total : %d",total);
	//
		//printf("Percentage : %.2f",perct);
		
	return 0;
}
