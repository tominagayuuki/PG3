#include<stdio.h>
#include<vector>
#include <iostream>
#include<list>
using namespace std;

int main() {
	list<const char*> stationList{
		"OOSAKI","GOTANDA","MEGURO","EBISU","SIBUYA",
		"HARAJUKU","YOYOGI","SINJUKU","SINOOKUBO","TAKADANOBABA",
		"MEZIRO","IKEBUKURO","OOTUKA","SUGAMO","KOMAGOME",
		"TABATA","NIPPORI","UGUISUDANI","UENO",
		"OKATIMATI","AKIHABARA","KANDA","TOUKYOU","YUURAK",
		"SINBASI","HAMAMATUTYOU","TAMATI","SINAGAWA"
	};
	printf("1970”N\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); itr++) {
		cout << *itr << " || ";
	}
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); itr++) {
		if (*itr == "NIPPORI") {
			itr = stationList.insert(itr, "-NISINIPPORI-");
			itr++;
		}
	}
	printf("\n\n");

	printf("2019”N\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); itr++) {
		cout << *itr << " || ";
	}
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); itr++) {
		if (*itr == "SINAGAWA") {
			itr = stationList.insert(itr, "-TAKANAWAGETOWEI-");
			itr++;
		}
	}
	printf("\n\n");
	printf("2022”N\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); itr++) {
		cout << *itr << " || ";
	}

	return 0;
}