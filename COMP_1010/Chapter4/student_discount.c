/*
The Students’ Corner Store in a university needs a program to implement its students’ discount policy. The program is to prompt the user to enter the purchase total and to indicate whether the purchaser is a student. Students are eligible to receive a 20% discount on all their purchases. The discount calculation, however, must be done before addition of the 5% sales tax. This is done to ensure that the discount is not applied to the sales tax. Here are two sample output files—one for a student purchaser and one for a nonstudent purchaser.

Total purchases                 $122.00
Student’s discount (20%)         24.40
Discounted total                 97.60
Sales tax (5%)                   4.88
Total                            $102.48

-------------------------------------------
Total purchases                 $24.90
Sales tax (5%)                  1.25
Total                           $26.15


Note: to display a % sign, place two % signs in the format string:
printf(“%d%%”, SALES_TAX);
*/

#include <stdio.h>
#define DISCOUNT .20
#define TAX .05

int main(void) 
{
    double purchase_total, discount, tax, grand_total;
    char is_student;
    int student_bool;

    printf("Enter purchase total: ");
    scanf("%lf", &purchase_total);
    
    printf("Is this for a student?: ");
    scanf(" %c", &is_student);

    if (is_student == 'Y' || is_student == 'y') {
        discount = purchase_total * DISCOUNT;
        student_bool = 1;
    }

    tax = (purchase_total - discount) * TAX;
    grand_total = purchase_total - discount + tax;

    if (student_bool == 1) {
        printf("Total purchases             $%.2lf\n", purchase_total);
        printf("Student’s discount (20%)     %.2lf\n", discount);
        printf("Discounted total             %.2lf\n", purchase_total - discount);
        printf("Sales tax (5%)               %.2lf\n", tax);
        printf("Total                        %.2lf\n", grand_total);
    } else {
        printf("Total purchases             $%.2lf\n", purchase_total);
        printf("Sales tax (5%)               %.2lf\n", tax);
        printf("Total                        %.2lf\n", grand_total);
    }
}

