#pragma once
#include<iostream>
#include<string>
using namespace std;
class AcademicAdministrator {
	string name;
	int id;
public:
	AcademicAdministrator() {
		name = '\0';
		id = 0;
	}
	AcademicAdministrator(int i, char n) {
		name = n;
		id = i;
	}
	void SetName(string n) {
		name = n;
	}
	string GetName() {
		return name;
	}
	void SetId(int i) {
		id = i;
	}
	int GetID() {
		return id;
	}
};