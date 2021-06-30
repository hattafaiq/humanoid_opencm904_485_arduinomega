#include <dxl_devices.h>
#include <LJlibrary.h>

#define button_pina 16
#define button_pinb 17

byte dataPin=2;
byte clockPin=3;
byte controlPin=1;

int id,sudut[32],spd[32];

byte data=0,ibyte=0,indexs=0;

byte buff[5];

#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
Dynamixel Dxl(DXL_BUS_SERIAL1);
#define ID_NUM_1 11
#define ID_NUM_2 12
#define ID_NUM_3 3
#define ID_NUM_4 4
#define ID_NUM_5 27
int count =2; 

void setup(){
   Dxl.begin(3);
  SerialUSB.begin();
  pinMode(BOARD_LED_PIN, OUTPUT);
  pinMode(dataPin, INPUT);
  pinMode(clockPin, INPUT);
  pinMode(controlPin, INPUT);
  startingServo();
  center();
  //siap();
}

void int0(void){
  if(digitalRead(controlPin)==1){
  digitalWrite(BOARD_LED_PIN,0);
  data = data | (digitalRead(dataPin) << ibyte); 
  ibyte++;
  if(ibyte>=8){buff[indexs]=data;indexs++;ibyte=0;data=0;}
  }
  
}

void int1(void){
  id=buff[0];
  sudut[id] = buff[1] << 8|buff[2];
  spd[id] = buff[3] << 8|buff[4];
  ibyte=0;
  data=0;
  indexs=0;
  digitalWrite(BOARD_LED_PIN,1);

}

void loop(){led();
digitalWrite(BOARD_LED_PIN,0);  
for(int i=0; i<10; i++){
//digitalWrite(BOARD_LED_PIN, digitalRead(BOARD_LED_PIN)^1);
update_all();
}

digitalWrite(BOARD_LED_PIN,1);

attachInterrupt(clockPin,int0, RISING);
attachInterrupt(controlPin,int1, FALLING);

while(1){
//center();
update_all();
if(digitalRead(BOARD_LED_PIN)==1){
SerialUSB.print(id);
SerialUSB.print(" ");
SerialUSB.print(sudut[id]);
SerialUSB.print(" ");
SerialUSB.println(spd[id] );
//update_all();
}

}
}

void center(){
for(int i=1; i<=12; i++){
sudut[i]=512;
spd[i]=30;
}
for(int i=13; i<=25; i++){
sudut[i]=2048;
spd[i]=30;
} 
for(int i=26; i<=31; i++){
if(i!=29)
{
  sudut[i]=512;
  spd[i]=30;
}
if(i==29)
{
  sudut[i]=2048;
  spd[i]=30;
}
}
/*int i;
  if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9 || i==10 || i==11 || i==12 || i==27 || i==28)
  {
    sudut[i]=512;
    spd[i]=30;
  }
  if(i==13 || i==14 || i==15 || i==16 || i==17 || i==18 || i==19 || i==20 || i==21 || i==22 || i==23 || i==24 || i==25 || i==26 || i==29)
  {
    sudut[i]=2048;
    spd[i]=30;
  }//*/  
}

void siap(){
  sudut[1]=553; sudut[2]=459; sudut[3]=272; sudut[4]=741; sudut[5]=279; sudut[6]=772; sudut[7]=517; sudut[8]=519; sudut[9]=402; sudut[10]=639;
  sudut[11]=345; sudut[12]=639;    
  sudut[13]=1990; sudut[15]=2097; sudut[17]=1775; sudut[19]=2376; sudut[21]=2179; sudut[23]=2091; 
  sudut[14]=2057; sudut[16]=2068; sudut[18]=2311; sudut[20]=1697; sudut[22]=1890; sudut[24]=2060; 
  sudut[25]=2048; sudut[26]=512; sudut[27]=514; sudut[28]=512; sudut[29]=2048;
  
  spd[1]=30; spd[2]=30; spd[3]=30; spd[4]=30; spd[5]=30; spd[6]=30; spd[7]=30; spd[8]=30; spd[9]=30; spd[10]=30;
  spd[11]=30; spd[12]=30; spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30;
  spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; spd[25]=30; spd[26]=30; spd[27]=30; spd[28]=30; spd[29]=30;
  
  //step_jalan[step]=30;//*/
}

void update_all(){
for(int i=1; i<=12; i++){
      if(sudut[i]<=20)sudut[i]=20; if(sudut[i]>=1000)sudut[i]=1000; 
      if(spd[i]<=0)spd[i]=0; if(spd[i]>=500)spd[i]=500;
servoxlWrite(i,sudut[i],spd[i]);
/*if (i==1 || i==2)servomxWrite(i,sudut[i],spd[i]);*/
} 
for(int i=13; i<=25; i++){
      if(sudut[i]<=300)sudut[i]=300; if(sudut[i]>=4000)sudut[i]=4000; 
      if(spd[i]<=10)spd[i]=10; if(spd[i]>=500)spd[i]=500;
servomxWrite(i,sudut[i],spd[i]);
} 
for(int i=26; i<=31; i++){
  if (i!=29){
      if(sudut[i]<=20)sudut[i]=20; if(sudut[i]>=1000)sudut[i]=1000; 
      if(spd[i]<=10)spd[i]=10; if(spd[i]>=500)spd[i]=500;
      servoxlWrite(i,sudut[i],spd[i]);
    }
if (i==29){
      if(sudut[i]<=800)sudut[i]=800; if(sudut[i]>=3500)sudut[i]=3500; 
      if(spd[i]<=10)spd[i]=10; if(spd[i]>=500)spd[i]=500;
servomxWrite(i,sudut[i],spd[i]);}
} 
}

void led (){
    Dxl.ledOn(ID_NUM_1, count);// XL-320 only movement XL-320 it has RGB LED 
    Dxl.ledOn(ID_NUM_2, count);
    Dxl.ledOn(ID_NUM_3, count);
    Dxl.ledOn(ID_NUM_4, count);
     Dxl.ledOn(ID_NUM_5, count);
}
  
