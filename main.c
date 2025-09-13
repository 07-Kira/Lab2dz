#include <stdio.h>
#include <locale.h>
int main()
{
	const int HEIGHT = 6000;
	const int AIRCRAFT_SPEED = 250;
	const int ROCKET_SPEED = 800;
	const int DISTANCE = 1000;

	setlocale(LC_CTYPE, "");

	float TIMEc = DISTANCE / AIRCRAFT_SPEED;
	float TIMEp = HEIGHT / ROCKET_SPEED;
	float TIME1 = HEIGHT / ROCKET_SPEED + DISTANCE / AIRCRAFT_SPEED;

	printf("Расчет времени до поражения цели.\n");
	printf("---------------------------------\n");
	printf("Условие:\n");
	printf("Высота на которой летит самолет %d\n", HEIGHT);
	printf("Скорость самолета %d\n", AIRCRAFT_SPEED);
	printf("Скорость ракеты %d\n", ROCKET_SPEED);
	printf("Расстояние до столкновения %d\n\n", DISTANCE);
	
	printf("Расчет:\n");
	printf("Время самолета TIMEc = DISTANCE / AIRCRAFT_SPEED = 1000 / 250 = %d\n", DISTANCE / AIRCRAFT_SPEED);
	printf("Время ракеты TIMEp = HEIGHT / ROCKET_SPEED = 6000 / 800 = %d\n", HEIGHT / ROCKET_SPEED);
	printf("---------------------------------\n");
	printf("Время столкновения TIME1 = TIMEc + TIMEp = %d\n", HEIGHT / ROCKET_SPEED + DISTANCE / AIRCRAFT_SPEED);
	return 0;
}