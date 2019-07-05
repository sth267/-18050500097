int dottime=250;

void dot()
{
	digitalWrite(2,HIGH);
	delay(dottime);
	digitalWrite(2,LOW);
	delay(dottime);
}

void dash()
{
	digitalWrite(2,HIGH);
	delay(dottime*4);
	digitalWrite(2,LOW);
	delay(dottime);
}

void c_space()
{
	digitalWrite(2,LOW);
	delay(dottime*3);
}

void w_space()
{
	digitalWrite(2,LOW);
	delay(dottime*7);
}
void al_a()
{
	dot();
	dash();
}
void al_b()
{
	dash();
	dot();
	dot();
	dot();
}
void al_c()
{
	dash();
	dot();
	dash();
	dot();
}
void al_d()
{
	dash();
	dot();
	dot();
}
void al_e()
{
	dot();
}
void al_f()
{
	dot();
	dot();
	dash();
	dot();
}
void al_g()
{
	dash();
	dash();
	dot();
}
void al_h()
{
	dot();
	dot();
	dot();
	dot();
	dot();
}
void al_i()
{
	dot();
	dot();
}
void al_j()
{
	dot();
	dash();
	dash();
	dash();
}
void al_k()
{
	dash();
	dot();
	dash();
}
void al_l()
{
	dot();
	dash();
	dot();
	dot();
}
void al_m()
{
	dash();
	dash();
}
void al_n()
{
	dash();
	dot();
}
void al_o()
{
	dash();
	dash();
	dash();
}
void al_p()
{
	dot();
	dash();
	dash();
	dot();
}
void al_q()
{
	dash();
	dash();
	dot();
	dash();
}
void al_r()
{
	dot();
	dash();
	dot();
}
void al_s()
{
	dot();
	dot();
	dot();
}
void al_t()
{
	dash();
}
void al_u()
{
	dot();
	dot();
	dash();
}
void al_v()
{
	dot();
	dot();
	dot();
	dash();
}
void al_w()
{
	dot();
	dash();
	dash();
}
void al_x()
{
	dash();
	dot();
	dot();
	dash();
}
void al_y()
{
	dash();
	dot();
	dash();
	dash();
}
void al_z()
{
	dash();
	dash();
	dot();
	dot();
}
void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

int incomingByte=0;

void loop()
{
  if (Serial.available() > 0) 
  {
    incomingByte = Serial.read();
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    switch (incomingByte)
    {
      case 97:
        al_a();
        break;
      case 98:
        al_b();
        break;
      case 99:
        al_c();
        break;
      case 100:
        al_d();
        break;
      case 101:
        al_e();
        break;
      case 102:
        al_f();
        break;
      case 103:
        al_g();
        break;
      case 104:
        al_h();
        break;
      case 105:
        al_i();
        break;
      case 106:
        al_j();
        break;
      case 107:
        al_k();
        break;
      case 108:
        al_l();
        break;
      case 109:
        al_m();
        break;
      case 110:
        al_n();
        break;
      case 111:
        al_o();
        break;
      case 112:
        al_p();
        break;
      case 113:
        al_q();
        break;
      case 114:
        al_r();
        break;
      case 115:
        al_s();
        break;
      case 116:
        al_t();
        break;
      case 117:
        al_u();
        break;
      case 118:
        al_v();
        break;
      case 119:
        al_w();
        break;
      case 120:
        al_x();
        break;
      case 121:
        al_y();
        break;
      case 122:
        al_z();
        break;
      case 13:
        w_space();
        break;
      case 32:
        c_space();
        break;
    }
    }
    delay(50);
  
}