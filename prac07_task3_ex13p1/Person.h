#pragma once

#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <iostream>
#include <format>


namespace HR
{
	class Person
	{
	public:

		Person(std::string firstName, std::string lastName)
			: Person{firstName, lastName,
			firstName.substr(0,1) + lastName.substr(0,1) 
			}
		{
			std::cout << firstName.substr(0,1) << lastName.substr(0,1) << std::endl;
		}

		Person() = default;

		Person(std::string firstName, std::string lastName, std::string initials)
			: m_firstName{ std::move(firstName) }
			, m_lastName{ std::move(lastName) }
			, m_initials{ std::move(initials) }
		{
		}

		virtual ~Person() = default; // A virtual destructor!

		virtual const std::string& getFirstName() const { return m_firstName; }
		virtual void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

		virtual const std::string& getLastName() const { return m_lastName; }
		virtual void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

		virtual const std::string& getInitials() const { return m_initials; }
		virtual void setInitials(std::string initials) { m_initials = std::move(initials); }

		virtual std::string toString() const {return m_firstName + " " + m_lastName; }

		void output() {
			std::cout << this->m_firstName << this->m_lastName << std::endl;
		}

		bool operator<(const Person& other){
			return this->m_lastName < other.m_lastName;
		}

		bool operator>(const Person& other){
			return this->m_lastName > other.m_lastName;
		}

		bool operator>=(const Person& other){
			return this->m_lastName >= other.m_lastName;
		}

		bool operator<=(const Person& other){
			return this->m_lastName <= other.m_lastName;
		}
		
		bool operator==(const Person& other){
			return this->m_lastName == other.m_lastName;
		}

		bool operator!=(const Person& other){
			return this->m_lastName != other.m_lastName;
		}
	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_initials;
	};
	
}
#endif
