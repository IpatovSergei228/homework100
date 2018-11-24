/*Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.*/\
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	int z, x = 100, y = 10;
	z = x * y;
	printf("%d\n", z);
	system("pause");
}*/
/*Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	int z, x = 0, a = 200, b = 0;
	z = a * x + b;
	printf("%d\n", z);
	system("pause");
}*/
/*С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	int n = 2000, min;
	min = n / 60;
	printf("%d\n", min);
	system("pause");
}*/
/*Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили первоначально движутся навстречу друг другу. Данное расстояние равно модулю разности начального расстояния и общего пути, проделанного автомобилями; общий путь = время · суммарная скорость*/
/**//*
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	int v1 = 100, v2 = 200, s, t = 10;
	s = v1 * v2 + t;
	printf("%d\n", s);
	system("pause");
}*/
/*Даны длины сторон прямоугольного параллелепипеда. Найти его объем и площадь боковой поверхности*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int a = 3, b = 4, c = 8, v, s;
	v = a * b * c;
	s = (a * b) + (b * c) + (a * c) * 2;
	printf("обьем: %d\nплощадь: %d\n", v, s);
	system("pause");
}*/
/*Известны координаты на плоскости двух точек. Составить программу вычисления расстояния между ними.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	setlocale(LC_ALL, "");
	int x1 = 5, x2 = 20, y1 = 25, y2 = 35, r;
	r = sqrt(sqrt(x2 - x1) + sqrt(y2 - y1));
	printf("растояние: %d\n", r);
	system("pause");
}*/
/*Известны объем и масса тела. Определить плотность материала этого тела*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	float v = 20, m = 10, p;
	p = m / v;
	printf("%f\n", p);
	system("pause");
}*/
/*вычисления значения функции z= x3 – 2.5xy+1.87x2+1 при любых значениях х и y;*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	float z, x = 20, y = 10;
	z = pow(x, 3) - (2.5 * (x * y)) + (1.87 * (pow(x, 2) + 1));
	printf("%f\n", z);
	system("pause");
}*/
/*вычисления значения функции x= 3.56 a+b3-5.8b2+3.8a-1.5 при любых значениях a и b.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	float a = 28, b = 36, x;
	x = (3.56 * a + pow(b, 3)) - (5.8 * pow(b, 2)) + (3.8 * a - 1.5);
	printf("%f\n", x);
	system("pause");
}*/
/*Дана сторона квадрата. Найти его периметр*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	int a = 10, p;
	p = 10 * 4;
	printf("%d\n", p);
	system("pause");
}*/
/*Дан радиус окружности. Найти ее диаметр.*/
/*#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
int main() {
	float pi = 3.14;
		int r = 25, l;
	l = r * pi;
	printf("%d\n", l);
	system("pause");
}*/