/*#include<stdio.h>
int main(){
    int Phy,Chem,Math,sum,total,total_mp;


    printf("Enter the marks of Physics:");
    scanf("%d",&Phy);

    printf("Enter the marks of Chemistry:");
    scanf("%d",&Chem);

    printf("Enter the marks of Math:");
    scanf("%d",&Math);

    total=Math+Phy+Chem;
    total_mp=Phy+Math;
    if(Phy>=50 && Chem>=40 && Math>=60 && total>=200) {


        printf("The candidate is eligible for the admission");

    }
   else if(Phy>=50 && Chem>=40 && Math>=60 && (Math+Physics>=150)) {


        printf("The candidate is eligible for the admission");

    }


    else{

    printf("The candidate is not eligible for the admission");

    }


    }*/

    #include <stdio.h>

int main() {
    int math_marks,physics_marks, chem_marks;
    printf("Enter marks in mathematics: ");
    scanf("%d", &math_marks);
    printf("Enter marks in physics: ");
    scanf("%d",&physics_marks);
    printf("Enter marks in chemistry: ");
    scanf("%d",&chem_marks);
    int total_marks = math_marks + physics_marks + chem_marks;
    if (math_marks >= 60 && physics_marks >= 50 && chem_marks >= 40 && total_marks >= 200) {
        printf("Eligible for admission.\n");
    } else if (math_marks + physics_marks >= 150 && math_marks >= 60 && physics_marks >= 50) {
        printf("Eligible for admission.\n");
    } else {
        printf("Not eligible for admission.\n");
    }
    return 0;
}

