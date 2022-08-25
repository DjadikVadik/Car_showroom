#include "Ñar_showroom.h"

void Ñar_showroom::Car::show_car()
{
	std::cout << "------------------------\n"
		<< "brand: " << brand << "\n"
		<< "year_of_issue: " << year_of_issue << "\n"
		<< "engine_volume: " << engine_volume << "\n"
		<< "price: " << price << "\n"
		<< "------------------------\n";
}

void Ñar_showroom::set_new_sale()
{
	Car car;
	std::cout << "\nEnter brand of car: ";
	std::getline(std::cin, car.brand);
	std::cout << "\nEnter year_of_issue of car: ";
	std::cin >> car.year_of_issue;
	std::cout << "\nEnter engine_volume of car: ";
	std::cin >> car.engine_volume;
	std::cout << "\nEnter price of car: ";
	std::cin >> car.price;
	std::cin.ignore(32767, '\n');

	cars.emplace_back(car);
}

void Ñar_showroom::show_all_sale()
{
	int i = 0;
	for (auto& it : cars) {
		std::cout << "\nnumber sale: " << ++i;
		it.show_car();
	}
}

void Ñar_showroom::sort_by_brend()
{
	std::sort(cars.begin(), cars.end(), [](Car& car1, Car& car2) {
		return car1.brand < car2.brand;
		});
}

void Ñar_showroom::sort_by_year_of_issue()
{
	std::sort(cars.begin(), cars.end(), [](Car& car1, Car& car2) {
		return car1.year_of_issue < car2.year_of_issue;
		});
}

void Ñar_showroom::sort_by_engine_volume()
{
	std::sort(cars.begin(), cars.end(), [](Car& car1, Car& car2) {
		return car1.engine_volume < car2.engine_volume;
		});
}

void Ñar_showroom::sort_by_price()
{
	std::sort(cars.begin(), cars.end(), [](Car& car1, Car& car2) {
		return car1.price < car2.price;
		});
}

void Ñar_showroom::delete_sale()
{
	std::cout << "\nPlease enter sales number: ";
	int i;
	std::cin >> i;
	auto it = cars.begin();
	std::advance(it, i);
	cars.erase(it);
}

void Ñar_showroom::search_by_brand(const char* brand)
{
	std::vector<Car> result;

	std::copy_if(cars.begin(), cars.end(), std::back_inserter(result), [&](Car& car) {
		return car.brand == brand;
		});

	if (!result.empty()) {
		for (auto& it : result)
			it.show_car();
	}

	else std::cout << "\nnot found!!!";
}

void Ñar_showroom::search_by_year_of_issue(int year_of_issue)
{
	std::vector<Car> result;

	std::copy_if(cars.begin(), cars.end(), std::back_inserter(result), [&](Car& car) {
		return car.year_of_issue == year_of_issue;
		});

	if (!result.empty()) {
		for (auto& it : result)
			it.show_car();
	}

	else std::cout << "\nnot found!!!";
}

void Ñar_showroom::search_by_engine_volume(int engine_volume)
{
	std::vector<Car> result;

	std::copy_if(cars.begin(), cars.end(), std::back_inserter(result), [&](Car& car) {
		return car.engine_volume == engine_volume;
		});

	if (!result.empty()) {
		for (auto& it : result)
			it.show_car();
	}

	else std::cout << "\nnot found!!!";
}

void Ñar_showroom::search_by_price(double price)
{
	std::vector<Car> result;

	std::copy_if(cars.begin(), cars.end(), std::back_inserter(result), [&](Car& car) {
		return car.price == price;
		});

	if (!result.empty()) {
		for (auto& it : result)
			it.show_car();
	}

	else std::cout << "\nnot found!!!";
}

