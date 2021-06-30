

void pasang(){
 if (step==1)
  
   {
   sudut[1]=810; sudut[3]=223; sudut[5]=300; sudut[7]=192; sudut[9]=528; sudut[11]=586; sudut[26]=350; sudut[27]=570;
   spd[1]=280; spd[3]=150; spd[5]=250; spd[7]=290;  spd[9]=250; spd[11]=250; 
   step_jalan[step]=15; 
   //myservo.write(t);
}

  jalankan_step();  
}


void lepas(){
 if (step==1)
  
   {  sudut[13]=2048; sudut[15]=2072; sudut[17]=1810; sudut[19]=2685; sudut[21]=2458; sudut[23]=2049; 
      sudut[14]=2048; sudut[16]=2041; sudut[18]=2445; sudut[20]=1442; sudut[22]=1818; sudut[24]=2041; 
      sudut[25]=2048; sudut[26]=350; sudut[27]=514; sudut[28]=512; sudut[29]=2048; sudut[30]=512; spd[30]=350; sudut[31]=512; spd[31]=350;
      
      spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=60; spd[20]=60; 
      spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30; 
      spd[26]=280; spd[27]=150; spd[28]=290;  spd[29]=250; spd[25]=80;
       
      sudut[2]=473; sudut[4]=743; sudut[6]=747; sudut[8]=512; sudut[10]=639; sudut[12]=715; 
      spd[2]=280; spd[4]=150; spd[6]=250; spd[8]=290;  spd[10]=250; spd[12]=250;
    
      sudut[1]=810; sudut[3]=223; sudut[5]=300; sudut[7]=192; sudut[9]=528; sudut[11]=586;   
      spd[1]=280; spd[3]=150; spd[5]=250; spd[7]=290;  spd[9]=250; spd[11]=250; 
    
      step_jalan[step]=15; 
   
     // myservo.write(b);
      }
   jalankan_step();}
