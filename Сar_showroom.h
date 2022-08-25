#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Ñar_showroom
{
	struct Car {
		std::string brand;
		int year_of_issue;
		int engine_volume;
		double price;

		void show_car();
	};

	std::vector<Car> cars;

public:

	void set_new_sale();
	void show_all_sale();
	void sort_by_brend();
	void sort_by_year_of_issue();
	void sort_by_engine_volume();
	void sort_by_price();
	void delete_sale();
	void search_by_brand(const char* brand);
	void search_by_year_of_issue(int year_of_issue);
	void search_by_engine_volume(int engine_volume);
	void search_by_price(double price);
};

