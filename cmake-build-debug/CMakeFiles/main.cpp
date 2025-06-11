#include <iostream>
#include <cmath>
#include <string>
 int baseSalary=1000;
 float yearsWorked;
 float bonus1;
 float bonus2;
 float totalSales;
 double commission;
 float totalSalary;
 int main()
 {
     std::cout << "CSM 158 CHALLENGE 1" << std::endl;
     std::cout << "Enter number of years worked." << std::endl;
     std::cin >> yearsWorked;
     std::cout << "Enter your total sales for the month" << std::endl;
     std::cin >> totalSales;

     if (yearsWorked<= 5)
     {
         bonus1=10*yearsWorked;
     } else
     {
         bonus2=20*yearsWorked;
     }

     if (totalSales >= 5000 && totalSales < 10000)
     {
         commission= 0.03 * totalSales;
     } else if (totalSales >= 10000)
     {
         commission= 0.06 * totalSales;
     }
     //calculate total salaryy
     totalSalary= baseSalary + commission + bonus1 + bonus2;
     std::cout << "Your total salary is:  " << totalSalary <<  std::endl;

     return 0;
 }
