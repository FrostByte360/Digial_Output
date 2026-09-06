void blink()  {
  while (count < 3){
      // ON
    for (int i = 0; i < numb_pins; i++) {
    digitalWrite(LED[i], 1);
    }
    delay(1000);

    // OFF
    for (int i = 0; i < numb_pins; i++) {
    digitalWrite(LED[i], 0);
    }
    delay(1000);

    count++;
  }

}

void alt(){
  for(int count = 0; count < 3; count++){
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
}

void run(){ 
  while (count < 3){
    //run down
    for(int i=0; i < 6; i++){
       //LED ON
      digitalWrite(LED[i], 1);
      delay(500);

      //LED oFF
      digitalWrite(LED[i], 0);
      delay(500);
    }
    //run up
    for(int i=5; i >= 0; i--){
       //LED ON
      digitalWrite(LED[i], 1);
      delay(500);

      //LED oFF
      digitalWrite(LED[i], 0);
      delay(500);
    }
    count++;
 
  }
}