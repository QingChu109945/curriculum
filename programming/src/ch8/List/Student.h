#pragma once

#include <string>
#include <iostream>

class Student
{
public:
	Student(unsigned int i, std::string n, unsigned s, float h) : id(i),
		name(n), score(s), hight(h) {}

	void show()
	{
		std::cout << id << "(" << name << "," << score << "," << hight << ")" <<std::endl;
	}

	bool operator < (const Student & other) const
	{
		return this->hight < other.hight;
		//return this->score < other.score;		
	}
private:
	unsigned int id;
	std::string name;
	unsigned int score;
	float hight;
};