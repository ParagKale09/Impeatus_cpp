// 16. Selection_if_Nested.cpp : Multiple alternative if
// Nested if

/*
Accept marks in four subjects and display the grade secured by the student
    Percentage Marks   |    Grade
    0 to  < 35         |    Fail
    >= 35 to < 50      |    Pass
    >= 50 to < 60      |    Second
    >= 60 to < 70      |    First
    >= 70              |    Distinction
*/

#include <iostream>

void multiple_alternative_if_demo1() {
    std::cout << "Marks are always out of 100 \n";
    
    int phy{};
    std::cout << "Enter marks in Physics :";
    std::cin >> phy;
   
    int math{};
    std::cout << "Enter marks in Maths :";
    std::cin >> math;
    
    int chem{};
    std::cout << "Enter marks in Chemistry :";
    std::cin >> chem;

    int bio{};
    std::cout << "Enter marks in Biology :";
    std::cin >> bio;

    int percentage = (phy + math + chem + bio) / 4;

    if (percentage < 35) {
        std::cout << "Sorry you have Failed!\n";
    }
    else if (percentage >= 35 and percentage < 50) {
        std::cout << "Work Hard! your grade is Pass Class!\n";
    }
    else if (percentage >= 50 and percentage < 60) {
        std::cout << "You can do better! your grade is Second Class!\n";
    }
    else if (percentage >= 60 and percentage < 70) {
        std::cout << "Good! your grade is First Class!\n";
    }
    else {
        std::cout << "Excellent! your grade is Distinction!\n";
    }

    return;
}


void multiple_alternative_if_demo2() {
    std::cout << "Marks are always out of 100 \n";

    int phy{};
    std::cout << "Enter marks in Physics :";
    std::cin >> phy;

    int math{};
    std::cout << "Enter marks in Maths :";
    std::cin >> math;

    int chem{};
    std::cout << "Enter marks in Chemistry :";
    std::cin >> chem;

    int bio{};
    std::cout << "Enter marks in Biology :";
    std::cin >> bio;

    int percentage = (phy + math + chem + bio) / 4;

    if (percentage < 35) {
        std::cout << "Sorry you have Failed!\n";
    }
    else if (percentage < 50) {
        std::cout << "Work Hard! your grade is Pass Class!\n";
    }
    else if (percentage < 60) {
        std::cout << "You can do better! your grade is Second Class!\n";
    }
    else if (percentage < 70) {
        std::cout << "Good! your grade is First Class!\n";
    }
    else {
        std::cout << "Excellent! your grade is Distinction!\n";
    }

    return;
}

int main()
{
  //  multiple_alternative_if_demo1();
    multiple_alternative_if_demo2();
}