/*********************************************************************************************************************
** Program: perosn.cpp
** Author: Sangyun Lee
** Date: Oct 23 2019
** Description: This is specfriciation file of university class. And it is bass class of other classes.
**********************************************************************************************************************/
#include "person.hpp"

/*********************************************************************************************************************
** Program: person::person()
** Description: This is constructor for person class, it accepts two parameter which are int and string.
**********************************************************************************************************************/
person::person(int ag, std::string nm)
{
	age = ag;
	name = nm;
}

/*********************************************************************************************************************
** Program: person::~person()
** Description: This is destructor
**********************************************************************************************************************/
person::~person()
{

}

/*********************************************************************************************************************
** Program: person::setAge()
** Description: This is setter function for age variable  
**********************************************************************************************************************/
void person::setAge(int x)
{
	age = x;
}


/*********************************************************************************************************************
** Program: person::setName()
** Description: This is setter function for name variable, accepts string
**********************************************************************************************************************/
void person::setName(std::string n)
{
	name = n;
}

/*********************************************************************************************************************
** Program: person::getAge()
** Description: This is getter function, it returns value in age variable
**********************************************************************************************************************/
int person::getAge()
{
	return age;
}

/*********************************************************************************************************************
** Program: person::getName()
** Description: This is getter function, it returns string value in name instance
**********************************************************************************************************************/
std::string person::getName()
{
	return name;
}

/*********************************************************************************************************************
** Program: person::doWork()
** Description: This is virtual function (polymorphic), will be overrided
**********************************************************************************************************************/
//void person::do_work()
//{

//}

/*********************************************************************************************************************
** Program: person::proRdnum()
** Description: This is virtual function (polymorphic), will be overrided
**********************************************************************************************************************/
//double person::proRdnum()
//{

//}

/*********************************************************************************************************************
** Program: person::printInfo()
** Description: This is void function that print variables of the class object
**********************************************************************************************************************/
void person::printInfo()
{
	std::cout << name << " (" << age << ")";
}