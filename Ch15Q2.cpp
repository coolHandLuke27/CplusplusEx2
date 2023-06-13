#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:
	string name;
	int number;
	string hireDate;
public:
	Employee();
	void setName(string);
	void setNumber(int);
	void setHireDate(string);
	string getName();
	int getNumber();
	string getHireDate();
};
Employee:: Employee()
{
	name = "";
	number = 0;
	hireDate = "";
}
void Employee::setName(string n)
{
	name = n;
}
void Employee::setNumber(int nu)
{
	number = nu;
}
void Employee::setHireDate(string h)
{
	hireDate = h;
}
string Employee::getName()
{
	return name;
}
int Employee::getNumber()
{
	return number;
}
string Employee::getHireDate()
{
	return hireDate;
}



class ShiftSupervisor : public Employee
{
private:
	int salary;
	int bonus;
public:
	ShiftSupervisor();
	void setSalary(int);
	void setBonus(int);
	int getSalary();
	int getBonus();
	void print();
};
ShiftSupervisor::ShiftSupervisor()
{
	salary = 0;
	bonus = 0;
}
void ShiftSupervisor::setSalary(int s)
{
	salary = s;
}
void ShiftSupervisor::setBonus(int b)
{
	bonus = b;
}
int ShiftSupervisor::getSalary()
{
	return salary;
}
int ShiftSupervisor::getBonus()
{
	return bonus;
}
void ShiftSupervisor::print()
{
	cout << "Employee Info" << endl;
	cout << "Name: " << name << endl;
	cout << "Number: " << number << endl;
	cout << "Hire Date: " << hireDate << endl;
	cout << "Salary: $" << salary << endl;
	cout << "Bonus: $" << bonus << endl;
}

int main()
{
	ShiftSupervisor pog;
	int sal;
	int bon;
	pog.setName("Brad Maddox");
	pog.setNumber(32022);
	pog.setHireDate("June 12, 2017");

	cout << "Enter salary for " << pog.getName() << ":" << endl;
	cin >> sal;
	pog.setSalary(sal);
	cout << "Enter bonus for " << pog.getName() << ":" << endl;
	cin >> bon;
	pog.setBonus(bon);
	pog.print();

	
}