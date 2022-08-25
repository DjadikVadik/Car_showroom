#include "Сar_showroom.h"



int main()
{
	Сar_showroom car_showroom;
	car_showroom.set_new_sale();
	car_showroom.set_new_sale();
	car_showroom.set_new_sale();
	car_showroom.set_new_sale();
	car_showroom.set_new_sale();
	car_showroom.show_all_sale();
	car_showroom.sort_by_brend();
	car_showroom.show_all_sale();
	car_showroom.search_by_brand("mazda");
}

