#include <SMorse.h>



SMorse morse(13);
int incomingByte = 0;
void setup()
{
  Serial.begin(9600);
}

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
        morse.al_a();
        break;
      case 98:
        morse.al_b();
        break;
      case 99:
        morse.al_c();
        break;
      case 100:
        morse.al_d();
        break;
      case 101:
        morse.al_e();
        break;
      case 102:
        morse.al_f();
        break;
      case 103:
        morse.al_g();
        break;
      case 104:
        morse.al_h();
        break;
      case 105:
        morse.al_i();
        break;
      case 106:
        morse.al_j();
        break;
      case 107:
        morse.al_k();
        break;
      case 108:
        morse.al_l();
        break;
      case 109:
        morse.al_m();
        break;
      case 110:
        morse.al_n();
        break;
      case 111:
        morse.al_o();
        break;
      case 112:
        morse.al_p();
        break;
      case 113:
        morse.al_q();
        break;
      case 114:
        morse.al_r();
        break;
      case 115:
        morse.al_s();
        break;
      case 116:
        morse.al_t();
        break;
      case 117:
        morse.al_u();
        break;
      case 118:
        morse.al_v();
        break;
      case 119:
        morse.al_w();
        break;
      case 120:
        morse.al_x();
        break;
      case 121:
        morse.al_y();
        break;
      case 122:
        morse.al_z();
        break;
      case 13:
        morse.w_space();
        break;
      case 32:
        morse.c_space();
        break;
    }
    delay(50);
  }

}
