void setting_gerakan(){
  int xsudut=0;
SerialUSB.println("// mode autoset");  
SerialUSB.println();
delay(1);
while(1){

if(digitalRead(button_pina)==1){
SerialUSB.println();	//ceckingServo(30);
SerialUSB.println("// servo atas"); 
for(int i=1; i<=6; i++){
for(int j=0; j<10; j++){ 
xsudut=servoxlRead(i);
if (i==1 || i==2 )xsudut=servomxRead(i); 
delay(1);  
} 
SerialUSB.print("sudut[");
SerialUSB.print(i);
SerialUSB.print("]=");
SerialUSB.print(xsudut);
SerialUSB.print("; ");
}
SerialUSB.println();
for(int i=7; i<=12; i++){
for(int j=0; j<10; j++){ 
  xsudut=servoxlRead(i);
  delay(1);
}
SerialUSB.print("sudut[");
SerialUSB.print(i);
SerialUSB.print("]=");
SerialUSB.print(xsudut);
SerialUSB.print("; ");
}
SerialUSB.println();
for(int i=25; i<=28; i++){
for(int j=0; j<10; j++){ 
xsudut=servoxlRead(i);
if (i==25 || i==26)xsudut=servomxRead(i);  
  
  delay(1);  
  } 
SerialUSB.print("sudut[");
SerialUSB.print(i);
SerialUSB.print("]=");
SerialUSB.print(xsudut);
SerialUSB.print("; ");
} 
//==========================
SerialUSB.println();
SerialUSB.println();
SerialUSB.println("// servo bawah");  
for(int i=13; i<=18; i++){
  for(int j=0; j<10; j++){ 
  xsudut=servomxRead(i);
  delay(1);  
  } 
SerialUSB.print("sudut[");
SerialUSB.print(i);
SerialUSB.print("]=");
SerialUSB.print(xsudut);
SerialUSB.print("; ");
}
SerialUSB.println();  
for(int i=19; i<=24; i++){
  for(int j=0; j<10; j++){ 
  xsudut=servomxRead(i);
  delay(1);  
  } 
SerialUSB.print("sudut[");
SerialUSB.print(i);
SerialUSB.print("]=");
SerialUSB.print(xsudut);
SerialUSB.print("; ");
}
}
}
}
