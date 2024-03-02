#include <cctype>
#include <iostream>
void print_pass_fail(char grade){
   //
   char lowercase_grade;
   lowercase_grade = std::tolower(grade);
   //
   char grade_array[5] = {'a', 'b', 'c', 'd', 'e'};
   //
   for(int i = 0; i < 5; i++){
        if(lowercase_grade == grade_array[i] && i <= 2){
            std::cout << "Pass" << std::endl;
            return;
        }else if(lowercase_grade == grade_array[i] && i > 2){
            std::cout << "Fail" << std::endl;
            return;
        }
   }
    std::cout << "Nothing" << std::endl;
    return;   
}