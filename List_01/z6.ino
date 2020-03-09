#define LED 13

volatile char serialInput;
volatile int LD;
volatile int SD;
volatile int MD;


void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  SD = 200;
  MD = 600;
  LD = 800;
}

void loop() {
  while(Serial.available())
  {
    serialInput = Serial.read();
    switch(serialInput)
    {
      case 'a' : la();
                  break;
      case 'b' : lb();
                  break;
      case 'c' : lc();
      			  break;
      case 'd' : ld();
      			  break;
      case 'e' : le();
      			  break;
      case 'f' : lf();
      			  break;
      case 'g' : lg();
      			  break;
      case 'h' : lh();
      			  break;
      case 'i' : li();
      			  break;
      case 'j' : lj();
      			  break;
      case 'k' : lk();
      			  break;
      case 'l' : ll();
      			  break;
      case 'm' : lm();
      			  break;
      case 'n' : ln();
      			  break;
      case 'o' : lo();
      			  break;
      case 'p' : lp();
      			  break;
      case 'q' : lq();
      			  break;
      case 'r' : lr();
      			  break;
      case 's' : ls();
      			  break;
      case 't' : lt();
      			  break;
      case 'u' : lu();
      			  break;
      case 'v' : lv();
      			  break;
      case 'w' : lw();
      			  break;
      case 'x' : lx();
      			  break;
      case 'y' : ly();
      			  break;
      case 'z' : lz();
      			  break;
      case '1' : l1();
      			  break;
      case '2' : l2();
      			  break;
      case '3' : l3();
      			  break;
      case '4' : l4();
      			  break;
      case '5' : l5();
      			  break;
      case '6' : l6();
      			  break;
      case '7' : l7();
      			  break;
      case '8' : l8();
      			  break;
      case '9' : l9();
      			  break;
      case '0' : l0();
      			  break;
      
      default  : Serial.println("Only small letters and numbers.!");
    }
  }
  delay(1000);
  Serial.println("Listening...");
  delay(1000);

}

void dot(){
    delay(MD);
    digitalWrite(LED, HIGH);
    delay(SD);
    digitalWrite(LED, LOW);    
}
void lin(){
  	delay(MD);
    digitalWrite(LED, HIGH);
    delay(LD);
    digitalWrite(LED, LOW);   
}
void la(){dot();lin();}
void lb(){lin();dot();dot();dot();}
void lc(){lin();dot();lin();dot();}
void ld(){lin();dot();dot();}
void le(){dot();}
void lf(){dot();dot();lin();dot();}
void lg(){lin();lin();dot();}
void lh(){dot();dot();dot();dot();}
void li(){dot();dot();}
void lj(){dot();lin();lin();lin();}
void lk(){lin();dot();lin();}
void ll(){dot();lin();dot();dot();}
void lm(){lin();lin();}
void ln(){lin();dot();}
void lo(){lin();lin();lin();}
void lp(){dot();lin();lin();dot();}
void lq(){lin();lin();dot();lin();}
void lr(){dot();lin();dot();}
void ls(){dot();dot();dot();}
void lt(){lin();}
void lu(){dot();dot();lin();}
void lv(){dot();dot();dot();lin();}
void lw(){dot();lin();lin();}
void lx(){lin();dot();dot();lin();}
void ly(){lin();dot();lin();lin();}
void lz(){lin();lin();dot();dot();}

void l1(){dot();lin();lin();lin();lin();}
void l2(){dot();dot();lin();lin();lin();}
void l3(){dot();dot();dot();lin();lin();}
void l4(){dot();dot();dot();dot();lin();}
void l5(){dot();dot();dot();dot();dot();}
void l6(){lin();dot();dot();dot();dot();}
void l7(){lin();lin();dot();dot();dot();}
void l8(){lin();lin();lin();dot();dot();}
void l9(){lin();lin();lin();lin();dot();}
void l0(){lin();lin();lin();lin();lin();}


