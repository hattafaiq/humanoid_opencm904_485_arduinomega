
void misi1(){
  Serial.println("Misi1");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    pasang();
    //TerimaData();
    update_all();
    if(step >2)break;
  }
}

void misi2(){
  Serial.println("Misi2");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    pembuka_emas();
   // TerimaData();
    update_all();
    if(step >10)break;
  }
}

void misi3(){
  Serial.println("Misi3");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    cuci ();
   // TerimaData();
    update_all();
    if(step >9)break;
  }
}

void misi4(){
 Serial.println("Misi4");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   atas1();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>11)step=1;
   if(step1>12)break;
  }
}

void misi5(){
 Serial.println("Misi5");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   atas2();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>8)step=1;
   if(step1>12)break;
  }
}

void misi6(){
 Serial.println("Misi6");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   atas3();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>13)step=1;
   if(step1>12)break;
  }
}

void misi7(){
 Serial.println("Misi7");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   atas4();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>10)step=1;
   if(step1>12)break;
  }
}

void misi8(){
 Serial.println("Misi8");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   beksan_1();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>9)step=1;
   if(step1>12)break;
  }
}

void misi9(){
 Serial.println("Misi9");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   beksan_3();
   jalan_cepat_1();
   //TerimaData();
   update_all();
   if(step>7)step=1;
   if(step1>12)break;
  }
}
void misi10(){
 Serial.println("Misi10");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   beksan_3();
   jalan_m();
   //TerimaData();
   update_all();
   if(step>7)step=1;
   if(step1>12)break;
  }
}

void misi11(){
 Serial.println("Misi11");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   beksan_3();
   jalan();
   //TerimaData();
   update_all();
   if(step>7)step=1;
   if(step1>12)break;
  }
}
void misi12(){
 Serial.println("Misi12");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
   variasi();
   //TerimaData();
   update_all();
   if(step>6)break;
  }
}

void misi13(){
  Serial.println("Misi13");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    lepas();
    //TerimaData();
    update_all();
    if(step >2)break;
  }
}

void misi14(){
  Serial.println("Misi14");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    beksan_2();
    //TerimaData();
    update_all();
    if(step >6)break;
  }
}

void misi15(){
  Serial.println("Misi15");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    beksan_4();
    //TerimaData();
    update_all();
    if(step >8)break;
  }
}

void misi16(){
  Serial.println("Misi16");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    beksan_5();
    //TerimaData();
    update_all();
    if(step >12)break;
  }
}

void misi17(){
  Serial.println("Misi17");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    beksan();
    //TerimaData();
    update_all();
    if(step >10)break;
  }
}

void misi18(){
  Serial.println("Misi17");
  cnt1=1;
  counter1=1;
  step1=1;
  cnt=1;
  counter=1;
  step=1;
  
  while (1){
    penutup();
    //TerimaData();
    update_all();
    if(step >5)break;
  }
}
