#include <stdio.h>

struct Employee {
    char name[25],department[20],email[50];
    int id;
    float salary;

}Employee;

int main() {
  strcpy(Employee.name,"John Doe");
  strcpy(Employee.department,"Human Resources");
  strcpy(Employee.email,"john.doe@company.com");
  Employee.salary =55000.50;
  Employee.id = 12345;

    

    // Display the employee information
    printf("your name:%s\n", Employee.name);
    printf("Department: %s\n",Employee.department );
    printf("ID: %d\n", employee.id);
    printf("Salary: %.2f\n", Employee.salary);
    printf("Email: %s\n", Employee.email);

    return 0;
}
