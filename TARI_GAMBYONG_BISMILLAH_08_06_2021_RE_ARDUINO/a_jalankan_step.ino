
void jalankan_step()
{
    //if(Master == '1'||(Master=='0'&&(step==0))) //memerintahkan robot agar tidak berhenti di step tsb
    cnt++;
    if(cnt>speed_counter){
    counter++;
    //SerialUSB.print("counter : ");
    //SerialUSB.println(counter);
    cnt=0;
    //SerialUSB.println(counter);
    //digitalWrite(BOARD_LED_PIN, digitalRead(BOARD_LED_PIN) ^ 1); //menampilkan indikator led kecepatan counter
    }
    
    if(counter>step_jalan[step]) {
    Serial.println(step);
    step++;
    counter=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step);
    }
    if(step>step_limit)step=0;
}//*/

  /*  if(digitalRead(button_pina)==1){delay(200);
    step++;
    Serial.print("step : ");
    Serial.println(step);
    counter=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step);
    }
    
    if(digitalRead(button_pinb)==1){ delay(200);
    step--;
    Serial.print("step : ");
    Serial.println(step);
    if(step<=0)step=1;
    counter=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step);
    }
    if(step>step_limit)step=0;
}//*/

void jalankan_step1()
{
   // if(Master == '1'||(Master=='0'&&(step==0))) //memerintahkan robot agar tidak berhenti di step tsb
    cnt1++;
    if(cnt1>speed_counter1){
    counter1++;
    cnt1=0;
    //SerialUSB.println(counter);
    // digitalWrite(led_steep, digitalRead(led_steep) ^ 1); //menampilkan indikator led kecepatan counter
    }
    //====
    
    if(counter1>step_jalan1[step1]) {
    Serial.println(step1);
    step1++;
    counter1=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step1);
    }
    if(step1>step_limit1)step1=0;//
} // */

    /*if(digitalRead(button_pina)==0){delay(200);
    step1++;
    Serial.println(step1);
    counter1=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step);
    }
    
    if(digitalRead(button_pinb)==0){ delay(200);
    step1--;
    Serial.println(step1);
    if(step1<=0)step1=1;
    counter1=0;
    digitalWrite(led_steep, digitalRead(led_steep) ^ 1);
    //SerialUSB.println(step);
    }
    if(step>step_limit)step=0;
}//*/
