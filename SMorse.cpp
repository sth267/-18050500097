#include "Arduino.h"
#include "SMorse.h"

SMorse::SMorse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void SMorse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void SMorse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void SMorse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void SMorse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
void SMorse::al_a()
{
	dot();
	dash();
}
void SMorse::al_b()
{
	dash();
	dot();
	dot();
	dot();
}
void SMorse::al_c()
{
	dash();
	dot();
	dash();
	dot();
}
void SMorse::al_d()
{
	dash();
	dot();
	dot();
}
void SMorse::al_e()
{
	dot();
}
void SMorse::al_f()
{
	dot();
	dot();
	dash();
	dot();
}
void SMorse::al_g()
{
	dash();
	dash();
	dot();
}
void SMorse::al_h()
{
	dot();
	dot();
	dot();
	dot();
	dot();
}
void SMorse::al_i()
{
	dot();
	dot();
}
void SMorse::al_j()
{
	dot();
	dash();
	dash();
	dash();
}
void SMorse::al_k()
{
	dash();
	dot();
	dash();
}
void SMorse::al_l()
{
	dot();
	dash();
	dot();
	dot();
}
void SMorse::al_m()
{
	dash();
	dash();
}
void SMorse::al_n()
{
	dash();
	dot();
}
void SMorse::al_o()
{
	dash();
	dash();
	dash();
}
void SMorse::al_p()
{
	dot();
	dash();
	dash();
	dot();
}
void SMorse::al_q()
{
	dash();
	dash();
	dot();
	dash();
}
void SMorse::al_r()
{
	dot();
	dash();
	dot();
}
void SMorse::al_s()
{
	dot();
	dot();
	dot();
}
void SMorse::al_t()
{
	dash();
}
void SMorse::al_u()
{
	dot();
	dot();
	dash();
}
void SMorse::al_v()
{
	dot();
	dot();
	dot();
	dash();
}
void SMorse::al_w()
{
	dot();
	dash();
	dash();
}
void SMorse::al_x()
{
	dash();
	dot();
	dot();
	dash();
}
void SMorse::al_y()
{
	dash();
	dot();
	dash();
	dash();
}
void SMorse::al_z()
{
	dash();
	dash();
	dot();
	dot();
}


