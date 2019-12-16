#include <Bounce.h> // učitavanje biblioteke Bounce.h

//INICIJALIZACIJA TIPKI "Bounce"
Bounce button0 = Bounce(0,50);
Bounce button1 = Bounce(1,50);
Bounce button2 = Bounce(2,50);
Bounce button3 = Bounce(3,50);
Bounce button4 = Bounce(4,50);
Bounce button5 = Bounce(5,50);
Bounce button6 = Bounce(6,50);
Bounce button7 = Bounce(7,50);
Bounce button8 = Bounce(8,50);
Bounce button9 = Bounce(9,50);
Bounce button10 = Bounce(10,50);

// VOID SETUP SE POKREĆE JEDNOM NA POČETKU PROGRAMA
void setup() 
{
  //POSTAVLJANJE PINOVA SA PULLUP OTPORNICIMA NA HIGH
  pinMode(0,INPUT_PULLUP);      //
  pinMode(1,INPUT_PULLUP);      //
  pinMode(2,INPUT_PULLUP);      //
  pinMode(3,INPUT_PULLUP);      //
  pinMode(4,INPUT_PULLUP);      //    PINOVE OD 0 DO 10 KORISTIMO ZA TIPKE
  pinMode(5,INPUT_PULLUP);      //
  pinMode(6,INPUT_PULLUP);      //
  pinMode(7,INPUT_PULLUP);      //
  pinMode(8,INPUT_PULLUP);      //
  pinMode(9,INPUT_PULLUP);      //
  pinMode(10,INPUT_PULLUP);     //
  pinMode(14,INPUT_PULLUP);//PIN 14 KORISTIMO ZA  PROFIL 1
  pinMode(15,INPUT_PULLUP);//PIN 15 KORISTIMO ZA PROFIL 2
  pinMode(16,INPUT_PULLUP);//PIN 16 KORISTIMO ZA PROFIL 3
 }

// VOID LOOP NAM JE DIO PROGRAMA KOJI CE NAM SE NEPRESTALNO IZVRŠAVATI
void loop()
{
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
   
/*----------------PROFIL 1-----------------------*/  
  if (digitalRead(14)==LOW)
  {
  if (button0.fallingEdge())
  {
    Keyboard.press(KEY_Q);
    Keyboard.release(KEY_Q);    
  }
  if (button1.fallingEdge())
  {
    Keyboard.press(KEY_W);
    Keyboard.release(KEY_W);
  }
  if (button2.fallingEdge())
  {
    Keyboard.press(KEY_E);
    Keyboard.release(KEY_E);
  }
  if (button3.fallingEdge())
  {
    Keyboard.press(KEY_R);
    Keyboard.release(KEY_R);
  }
  if (button4.fallingEdge())
  {
    Keyboard.press(KEY_1);
    Keyboard.release(KEY_1);
  }
  if (button5.fallingEdge())
  {
    Keyboard.press(KEY_2);
    Keyboard.release(KEY_2);
  }
  if (button6.fallingEdge())
  {
    Keyboard.press(KEY_3);
    Keyboard.release(KEY_3);
  }
  if (button7.fallingEdge())
  {
    Keyboard.press(KEY_4);
    Keyboard.release(KEY_4);
  }
  if (button8.fallingEdge())
  {
    Keyboard.press(KEY_A);
    Keyboard.release(KEY_A);
  }
  if (button9.fallingEdge())
  {
    Keyboard.press(KEY_F1);
    Keyboard.release(KEY_F1);
  }
  if (button10.fallingEdge())
  {
    Keyboard.println("JA SAM: ");
  }
  }
/*-------------------PROFIL 2--------------------------------*/
if (digitalRead(15)==LOW)
  {
  if (digitalRead(0)==LOW)
  {
    Keyboard.press(KEY_Q);
    Keyboard.release(KEY_Q);
      }
  if (button1.fallingEdge())
  {
    Keyboard.press(KEY_W);
    Keyboard.release(KEY_W);
  }
  if (button2.fallingEdge())
  {
    Keyboard.press(KEY_E);
    Keyboard.release(KEY_E);
  }
  if (button3.fallingEdge())
  {
    Keyboard.press(KEY_R);
    Keyboard.release(KEY_R);
  }
  if (button4.fallingEdge())
  {
    Keyboard.press(KEY_T);
    Keyboard.release(KEY_T);
  }
  if (button5.fallingEdge())
  {
    Keyboard.press(KEY_Z);
    Keyboard.release(KEY_Z);
  }
  if (button6.fallingEdge())
  {
    Keyboard.press(KEY_U);
    Keyboard.release(KEY_U);
  }
  if (button7.fallingEdge())
  {
    Keyboard.press(KEY_I);
    Keyboard.release(KEY_I);
  }
  if (button8.fallingEdge())
  {
    Keyboard.press(KEY_O);
    Keyboard.release(KEY_O);
  }
  if (button9.fallingEdge())
  {
    Keyboard.press(KEY_P);
    Keyboard.release(KEY_P);
  }
  if (button10.fallingEdge())
  {
    Keyboard.println("GAMING GLOVE");
  }
  }
  
/*-------------PRIFIL 3-------------------------------------*/
if (digitalRead(16)==LOW)
  {
  if (digitalRead(0)==LOW)
  {
    Keyboard.println("PROJEKT: GAMING GLOVE ");
      }
  if (button1.fallingEdge())
  {
    Keyboard.println("KONSTRUKCISKE VIJEZBE IZ DIGITALNE ELEKTRONIKE ");
  }
  if (button2.fallingEdge())
  {
    Keyboard.println("RUKAVICA JE PERIFERNA JEDINICA KOJA PRUZA NOVI NACIN IGRANJA IGRICA ");
  }
  if (button3.fallingEdge())
  {
    Keyboard.println("Multiplayer online battle arena (MOBA) i Role-playing game(RPG)");
  }
  if (button4.fallingEdge())
  {
   Keyboard.println("Kao sto su: Dota, Dota 2, League of Legends, Heroes of Newerth, Diablo 3,    ");
  }
  if (button5.fallingEdge())
  {
    Keyboard.println("PRVENSTVENO JE NAMJENJENA OVIM TIPOVIMA IGARA:");
  }
  if (button6.fallingEdge())
  {
    Keyboard.println("Rukavica ima mogucnost postavljanje vise profila te ima 11 tipki. ");
  }
  if (button7.fallingEdge())
  {
    Keyboard.println("koristeni materijali:");
  }
  if (button8.fallingEdge())
  {
    Keyboard.println("rukavica, zice, alufolija, protoboard i kao mozak svega");
  }
  if (button9.fallingEdge())
  {
     Keyboard.println("Teensy 3.0");
  }
  if (button10.fallingEdge())
  {
    Keyboard.println("\nVedran Krusarovski...");
  }
  
  }
  
}
    
    
  
  
  
  
  
  
  
  
  
  
  
