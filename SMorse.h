#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
    void al_a();
    void al_b();
    void al_c();
    void al_d();
    void al_e();
    void al_f();
    void al_g();
    void al_h();
    void al_i();
    void al_j();
    void al_k();
    void al_l();
    void al_m();
    void al_n();
    void al_o();
    void al_p();
    void al_q();
    void al_r();
    void al_s();
    void al_t();
    void al_u();
    void al_v();
    void al_w();
    void al_x();
    void al_y();
    void al_z();

  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/
