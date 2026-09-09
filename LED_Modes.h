void off()  {
  for (int i = 0; i < numb_pins; i++) {
    digitalWrite(LED[i], 0);
    }
}

void blink()  {

      // ON
    for (int i = 0; i < numb_pins; i++) {
    digitalWrite(LED[i], 1);
    }
    delay(800);

    // OFF
    for (int i = 0; i < numb_pins; i++) {
    digitalWrite(LED[i], 0);
    }
    delay(800);
  

}

void alt(){
    for (int i = 0; i < 3; i++){
      digitalWrite(LED[i], 1);
    }
    for (int i =3; i < 6; i++){
      digitalWrite(LED[i], 0);
    }

    delay(800);

    for (int i = 0; i < 3; i++){
      digitalWrite(LED[i], 0);
    }
    for (int i =3; i < 6; i++){
      digitalWrite(LED[i], 1);
    }

    delay(800);

    for (int i =3; i < 6; i++){
      digitalWrite(LED[i], 0);
    }
}

void run(){ 
    //run down
    for(int i=0; i < 6; i++){
       //LED ON
      digitalWrite(LED[i], 1);
      delay(300);

      //LED oFF
      digitalWrite(LED[i], 0);
      delay(300);
    }
    //run up
    for(int i=5; i >= 0; i--){
       //LED ON
      digitalWrite(LED[i], 1);
      delay(300);

      //LED oFF
      digitalWrite(LED[i], 0);
      delay(300);
    }
}