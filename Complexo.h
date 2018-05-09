#include <math.h>

class Complexo {
private :
	float im, real;
public :
	Complexo(float xs, float ys) {
		real = xs;
		im = ys;
	};

	float Modulo();
	Complexo Conjugado();
	Complexo Soma(Complexo);
	Complexo Diferenca(Complexo);
	Complexo Produto(Complexo);
	Complexo Divisao(Complexo);
};