
//#include <Adafruit_NeoPixel.h>
//#define PIN        44 // On Trinket or Gemma, suggest changing this to 1
//#define NUMPIXELS 3 // Popular NeoPixel ring size
//Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
//Adafruit_NeoPixel pixels(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);

//#include <Servo.h>
#define button_pina 50 
#define button_pinb 48
#define led_siap 47
#define led_steep 52

byte dataPin=10;
byte clockPin=12;
byte controlPin=8;

int sudut[32];
int spd[32];

//char Master = 0;

int ayam=0;

int step_jalan[100];
int cnt=0,counter=0,step=0;
int speed_counter=1;
int step_limit=55;

int step_jalan1[100];
int cnt1=0,counter1=0,step1=0;
int speed_counter1=1;
int step_limit1=55;

//Servo myservo;
//int b=155;
//int t=112;
void setup() {
//  pixels.begin();           // INITIALIZE NeoPixel pixels object (REQUIRED)
//  pixels.show();            // Turn OFF all pixels ASAP
//  pixels.clear(); // Set all pixel colors to 'off'
//  pixels.setBrightness(50);
//pinMode(BOARD_LED_PIN, OUTPUT);
pinMode(led_siap,OUTPUT); 
pinMode(led_steep,OUTPUT); 

Serial.begin(9600);
pinMode(clockPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(controlPin, OUTPUT);

digitalWrite(dataPin, 0);
digitalWrite(clockPin, 0);
digitalWrite(controlPin, 0);

pinMode(button_pina,INPUT_PULLUP); 
pinMode(button_pinb,INPUT_PULLUP); 

//myservo.attach(4);
Serial2.begin(9600);

}
/*void TerimaData() {
  if (Serial2.available())
{
  Master = Serial2.read();
  //
  //erial.println(Master);
}
}//*/

void loop() {
for(int i=0; i<10; i++){
digitalWrite(led_siap,HIGH); 
delay(50);
misi1();   //tutup masker
misi3();   //cuci tangan  
misi2();   //pembuka emas
misi4();   //jalan cepat center atas 1
misi5();   //jalan cepat center atas 2
misi6();   //jalan cepat center atas 3
misi17();  //beksan
misi5();   //jalan cepat center atas 2
misi7();   //jalan cepat center atas 4
misi15();  //beksan_4
//==============================================ZONA_B=======================================================
misi8();   //jalan cepat center beksan_1
misi9();   //jalan cepat center beksan_3
misi14();  //beksan_2
misi8();   //jalan cepat center beksan_1
misi9();   //jalan cepat center beksan_3
misi16();  //beksan_5
misi8();   //jalan cepat center beksan_1
misi9();   //jalan cepat center beksan_3
//==============================================ZONA_C=======================================================
misi15();  //beksan_4
misi16();  //beksan_5
misi14();  //beksan_2
misi9();   //jalan cepat center beksan_3
misi17();  //beksan
//==============================================GERAKAN_TUKER_MAJU_MUNDUR====================================
misi10();  //jalan mundur beksan_3
misi12();  //variasi
misi11();  //jalan maju beksan_3
misi12();  //variasi
//==============================================GERAKAN_TUKER_MAJU_MUNDUR====================================
misi8();   //jalan cepat center beksan_1 
misi9();   //jalan cepat center beksan_3
misi3();   //cuci tangan 
misi13();  //lepas masker 
misi18();  //penutup  

digitalWrite(led_siap,LOW);
delay(50); 
} 
  Serial.println("Center");
  
  while(1){
  if(digitalRead(button_pina)==0) break;
  }
  digitalWrite (led_siap,HIGH);
  siapboy();
  update_all();
  Serial.println("Running");//*/

  while(1){
  if(digitalRead(button_pinb)==0) break;
  //TerimaData(); 
  //if(Master=='1') break;
  }// 
  digitalWrite (led_siap,LOW);
  digitalWrite (led_steep,HIGH);

  /*while(1){
  //if(digitalRead(button_pinb)==0) break;
  TerimaData(); 
  if(Master=='1') break;
  }// */
  digitalWrite(led_siap,LOW);
  digitalWrite(led_steep,LOW);
  
//==============================================ZONA_A=======================================================

}

 void sendData(byte data){  
  for(int i=0; i<8; i++)
  {
    bool dataout = data & (1<<i);
    digitalWrite(dataPin, dataout);
    digitalWrite(clockPin, 1);
    digitalWrite(clockPin, 0);
    delayMicroseconds(3);
  }
 }

void servo(byte id, int sudut, int spd)
{ 
 if((id>=1 && id<=12)||(id>=26 && id<=28)|| id==30 && id==31)
  {
      if(sudut<=20)sudut=20; if(sudut>=1000)sudut=1000; 
      if(spd<=10)spd=10; if(spd>=500)spd=500;
  }
  if((id>=13 && id <=25)||(id==29))
  {
      if(sudut<=300)sudut=300; if(sudut>=4000)sudut=4000; 
      if(spd<=10)spd=10; if(spd>=500)spd=500;
  }
  
  digitalWrite(controlPin, 1);
  sendData((byte)id);
  sendData((int)(sudut >> 8) & 0xFF ); //untuk memecah nilai bit 16bit
  sendData((int)sudut & 0xFF);
  sendData((int)(spd >> 8) & 0xFF );
  sendData((int)spd & 0xFF);
  digitalWrite(controlPin, 0);
}

 void siapboy(){
  Serial.println("Siap");
  cnt=0;
  counter=0;
  step=0;
  
  while (1){
  sudut[1]=655; sudut[3]=321; sudut[5]=276; sudut[7]=370; sudut[9]=223; sudut[11]=291; 
  sudut[2]=322; sudut[4]=772; sudut[6]=822; sudut[8]=625; sudut[10]=847; sudut[12]=714;
//   for(int i=1; i<=12; i++){
//   sudut[i]=512;}
  sudut[13]=2048; sudut[15]=2067; sudut[17]=1917; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
  sudut[14]=2048; sudut[16]=2022; sudut[18]=2410; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
  sudut[25]=2048; sudut[26]=512; sudut[27]=514; sudut[28]=512; sudut[29]=2048;

  spd[1]=60; spd[2]=60; spd[3]=60; spd[4]=60; spd[5]=60; spd[6]=60; spd[7]=60; spd[8]=60; spd[9]=60; spd[10]=60;
  spd[11]=60; spd[12]=60; spd[13]=60; spd[14]=60; spd[15]=60; spd[16]=60; spd[17]=60; spd[18]=60; spd[19]=60; spd[20]=60;
  spd[21]=60; spd[22]=60; spd[23]=60; spd[24]=60; spd[25]=60; spd[26]=60; spd[27]=60; spd[28]=60; spd[29]=60;
 
  step_jalan[step]=30;//*/
//  myservo.write(b);
//   for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
//    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
//    pixels.show(); }  // Send the updated pixel colors to the hardware.
  
  break;
}}
  
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
sudut[i]=512;
spd[i]=30; 
if(i==29){
sudut[i]=2048;
spd[i]=30;}
}
}
void update_all(){ 
for(int i=1; i<=12; i++){
servo(i,sudut[i],spd[i]);
}  
for(int i=13; i<=25; i++){
servo(i,sudut[i],spd[i]);
} 
for(int i=26; i<=31; i++){
servo(i,sudut[i],spd[i]);
} 
}


//void LED_RED()
//{
// for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
//    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
//    pixels.show();   // Send the updated pixel colors to the hardware.
//  }
//}
//
//
//void LED_BLUE()
//{
// for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
//    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
//    pixels.show();   // Send the updated pixel colors to the hardware.
//  }
//}
//
//void LED_GREEN()
//{
// for(int i=0; i<NUMPIXELS; i++) { // For each pixel...
//    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
//    pixels.show(); 
//  }
//}
//
//void rainbowFade2White(int wait, int rainbowLoops, int whiteLoops) {
//  int fadeVal=0, fadeMax=100;
//  for(uint32_t firstPixelHue = 0; firstPixelHue < rainbowLoops*65536;
//    firstPixelHue += 256) {
//
//    for(int i=0; i<pixels.numPixels(); i++) { // For each pixel in pixels...
//      uint32_t pixelHue = firstPixelHue + (i * 65536L / pixels.numPixels());
//      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue, 255,
//        255 * fadeVal / fadeMax)));
//    }
//
//    pixels.show();
//    if(firstPixelHue < 65536) {                              // First loop,
//      if(fadeVal < fadeMax) fadeVal++;                       // fade in
//    } else if(firstPixelHue >= ((rainbowLoops-1) * 65536)) { // Last loop,
//      if(fadeVal > 0) fadeVal--;                             // fade out
//    } else {
//      fadeVal = fadeMax; // Interim loop, make sure fade is at max
//    }
//  }
//
//  for(int k=0; k<whiteLoops; k++) {
//    for(int j=0; j<256; j++) { // Ramp up 0 to 255
//      pixels.fill(pixels.Color(0, 0, 0, pixels.gamma8(j)));
//      pixels.show();
//    }
//    for(int j=255; j>=0; j--) { // Ramp down 255 to 0
//      pixels.fill(pixels.Color(0, 0, 0, pixels.gamma8(j)));
//      pixels.show();
//    }
//  }
//}
