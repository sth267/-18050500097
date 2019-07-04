#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
void Morse::al_a()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}
void Morse::al_b(Morse m)
{
	m.dash();
	m.dot();
	m.dot();
	m.dot();
}
void Morse::al_c(Morse m)
{
	m.dash();
	m.dot();
	m.dash();
	m.dot();
}
void Morse::al_d(Morse m)
{
	m.dash();
	m.dot();
	m.dot();
}
void Morse::al_e(Morse m)
{
	m.dot();
}
void Morse::al_f(Morse m)
{
	m.dot();
	m.dot();
	m.dash();
	m.dot();
}
void Morse::al_g(Morse m)
{
	m.dash();
	m.dash();
	m.dot();
}
void Morse::al_h(Morse m)
{
	m.dot();
	m.dot();
	m.dot();
	m.dot();
	m.dot();
}
void Morse::al_i(Morse m)
{
	m.dot();
	m.dot();
}
void Morse::al_j(Morse m)
{
	m.dot();
	m.dash();
	m.dash();
	m.dash();
}
void Morse::al_k(Morse m)
{
	m.dash();
	m.dot();
	m.dash();
}
void Morse::al_l(Morse m)
{
	m.dot();
	m.dash();
	m.dot();
	m.dot();
}
void Morse::al_m(Morse m)
{
	m.dash();
	m.dash();
}
void Morse::al_n(Morse m)
{
	m.dash();
	m.dot();
}
void Morse::al_o(Morse m)
{
	m.dash();
	m.dash();
	m.dash();
}
void Morse::al_p(Morse m)
{
	m.dot();
	m.dash();
	m.dash();
	m.dot();
}
void Morse::al_q(Morse m)
{
	m.dash();
	m.dash();
	m.dot()
	m.dash()
}
void Morse::al_r(Morse m)
{
	m.dot();
	m.dash();
	m.dot();
}
void Morse::al_s(Morse m)
{
	m.dot();
	m.dot();
	m.dot();
}
void Morse::al_t(Morse m)
{
	m.dash();
}
void Morse::al_u(Morse m)
{
	m.dot();
	m.dot();
	m.dash();
}
void Morse::al_v(Morse m)
{
	m.dot();
	m.dot();
	m.dot();
	m.dash();
}
void Morse::al_w(Morse m)
{
	m.dot();
	m.dash();
	m.dash();
}
void Morse::al_x(Morse m)
{
	m.dash();
	m.dot();
	m.dot();
	m.dash();
}
void Morse::al_y(Morse m)
{
	m.dash();
	m.dot();
	m.dash();
	m.dash();
}
void Morse::al_z(Morse m)
{
	m.dash();
	m.dash();
	m.dot();
	m.dot();
}


