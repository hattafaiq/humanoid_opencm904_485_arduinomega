void gaya(){
   if (step == 1)// berdiri 
   { 
     
    sudut[1]=605; sudut[3]=291; sudut[5]=253; sudut[7]=539; sudut[9]=385; sudut[11]=336; 
    sudut[2]=430; sudut[4]=725; sudut[6]=749; sudut[8]=508; sudut[10]=654; sudut[12]=666;

    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;

    sudut[25]=2048; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048;
    
    spd[1]=110; spd[2]=110; spd[3]=60; spd[4]=60; spd[5]=130; spd[6]=130;
    spd[7]=110; spd[8]=110; spd[9]=110; spd[10]=110; spd[11]=150; spd[12]=150;
    spd[25]=150; spd[26]=150; spd[27]=150; spd[28]=150; spd[29]=75;
  
    spd[13]=60; spd[14]=60; spd[15]=60; spd[16]=60; spd[17]=60; spd[18]=60; spd[19]=120; spd[20]=120; 
    spd[21]=70; spd[22]=70; spd[23]=60; spd[24]=60; //spd[29]=30;
    
    step_jalan[step]=20; 
    
   }   
   
    if (step == 2)//jongkok 
    { 
    sudut[1]=639; sudut[3]=295; sudut[5]=210; sudut[7]=387; sudut[9]=413; sudut[11]=605; 
    sudut[2]=356; sudut[4]=689; sudut[6]=867; sudut[8]=727; sudut[10]=496; sudut[12]=398;
    
    sudut[25]=2476; sudut[26]=304; sudut[27]=577; sudut[28]=504; sudut[29]=2249;

    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=60; spd[20]=60; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=110; spd[2]=110; spd[3]=60; spd[4]=60; spd[5]=130; spd[6]=130;
    spd[7]=110; spd[8]=110; spd[9]=110; spd[10]=110; spd[11]=150; spd[12]=150;
    spd[25]=120; spd[26]=150; spd[27]=150; spd[28]=150; spd[29]=75;
   
    step_jalan[step]=12; 
   }   
   if(step==3)//duduk posisi ok
{   
    sudut[1]=706; sudut[3]=180; sudut[5]=309; sudut[7]=330; sudut[9]=96; sudut[11]=273; 
    sudut[2]=301; sudut[4]=791; sudut[6]=764; sudut[8]=656; sudut[10]=835; sudut[12]=758;
    
    sudut[25]=2048; sudut[26]=512; sudut[27]=514; sudut[28]=512; sudut[29]=2048; 
   
    sudut[13]=2048; sudut[15]=2036; sudut[17]=1565; sudut[19]=3482; sudut[21]=2996; sudut[23]=2050;  
    sudut[14]=2048; sudut[16]=2013; sudut[18]=2903; sudut[20]=589; sudut[22]=1454; sudut[24]=1996; 
    
    spd[1]=280; spd[2]=280; spd[3]=280; spd[4]=280; spd[5]=280; spd[6]=280; spd[7]=280; spd[8]=280; spd[9]=280; spd[10]=280;
    spd[11]=280; spd[12]=280;  spd[25]=130;  spd[26]=320; spd[27]=320; spd[28]=320; spd[29]=90;//spd[29]=30;
    spd[13]=35; spd[14]=30; spd[15]=35; spd[16]=30; spd[17]=45; spd[18]=40; spd[19]=65; spd[20]=70; 
    spd[21]=45; spd[22]=35; spd[23]=35; spd[24]=30; //spd[29]=30;
    
   step_jalan[step]=8;   
}

if (step== 4)//kayang
   {     
    sudut[1]=802; sudut[3]=299; sudut[5]=391; sudut[7]=436; sudut[9]=373; sudut[11]=340; 
    sudut[2]=260; sudut[4]=619; sudut[6]=837; sudut[8]=740; sudut[10]=776; sudut[12]=710; 
   
    sudut[25]=1475; sudut[26]=518; sudut[27]=448; sudut[28]=513;  
   
    sudut[13]=2048; sudut[15]=2076; sudut[17]=1880; sudut[19]=3167; sudut[21]=2693; sudut[23]=2089;  
    sudut[14]=2048; sudut[16]=2051; sudut[18]=2438; sudut[20]=957; sudut[22]=1658; sudut[24]=2035;
   
   spd[1]=150; spd[2]=150; spd[3]=150; spd[4]=150; spd[5]=150; spd[6]=150; 
   spd[7]=150; spd[8]=150; spd[9]=150; spd[10]=150; spd[11]=150; spd[12]=150;
   
   spd[25]=130; spd[26]=250; spd[27]=250; spd[28]=250; spd[29]=90;//spd[29]=30;
   
   spd[13]=30; spd[14]=60; spd[15]=30; spd[16]=60; spd[17]=30; spd[18]=55; 
   spd[19]=30; spd[20]=55; spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30;
//   spd[13]=30; spd[14]=65; spd[15]=30; spd[16]=65; spd[17]=30; spd[18]=60; 
//   spd[19]=30; spd[20]=60; spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30;
     
    step_jalan[step]=19; 
   }

 if (step == 5)//jongkok  
    { 
    sudut[1]=639; sudut[3]=295; sudut[5]=210; sudut[7]=387; sudut[9]=413; sudut[11]=605; 
    sudut[2]=356; sudut[4]=689; sudut[6]=867; sudut[8]=727; sudut[10]=496; sudut[12]=398;
    
    sudut[25]=2476; sudut[26]=304; sudut[27]=577; sudut[28]=504;  sudut[29]=2249;

    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=60; spd[20]=60; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=110; spd[2]=110; spd[3]=60; spd[4]=60; spd[5]=130; spd[6]=130;
    spd[7]=110; spd[8]=110; spd[9]=110; spd[10]=110; spd[11]=150; spd[12]=150;
    spd[25]=120; spd[26]=150; spd[27]=150; spd[28]=150; spd[29]=75;
   
    step_jalan[step]=12; 
   }   
 if(step==6) // berdiri
  {
    sudut[1]=605; sudut[3]=291; sudut[5]=253; sudut[7]=539; sudut[9]=385; sudut[11]=336; 
    sudut[2]=430; sudut[4]=725; sudut[6]=749; sudut[8]=508; sudut[10]=654; sudut[12]=666;

    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;

    sudut[25]=2048; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200; spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200;
    spd[11]=200; spd[12]=200; spd[25]=90; spd[26]=200; spd[27]=200; spd[28]=200; spd[29]=50;//spd[29]=30;
    spd[13]=20; spd[14]=20; spd[15]=20; spd[16]=20; spd[17]=20; spd[18]=20; spd[19]=20; spd[20]=20; 
    spd[21]=20; spd[22]=20; spd[23]=20; spd[24]=20;
    step_jalan[step]=8; 
  }
  if(step==7) //miring kiri
  {
    sudut[1]=667; sudut[3]=176; sudut[5]=336; sudut[7]=416; sudut[9]=65; sudut[11]=280; 
    sudut[2]=375; sudut[4]=768; sudut[6]=580; sudut[8]=625; sudut[10]=1023; sudut[12]=693; 
  
    sudut[25]=1487; sudut[26]=492; sudut[27]=589; sudut[28]=509; sudut[29]=2046;
   
    sudut[13]=2048; sudut[15]=2222; sudut[17]=1837; sudut[19]=2644; sudut[21]=2444; sudut[23]=2196;  
    sudut[14]=2048; sudut[16]=2195; sudut[18]=2415; sudut[20]=1458; sudut[22]=1813; sudut[24]=2151;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200; spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200;
    spd[11]=200; spd[12]=200; spd[25]=90; spd[26]=200; spd[27]=200; spd[28]=200; spd[29]=50;//spd[29]=30;
   
    step_jalan[step]=15;

   }
    if(step==8) // berdiri
  {
    sudut[1]=605; sudut[3]=291; sudut[5]=253; sudut[7]=539; sudut[9]=385; sudut[11]=336; 
    sudut[2]=430; sudut[4]=725; sudut[6]=749; sudut[8]=508; sudut[10]=654; sudut[12]=666;

    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;

    sudut[25]=2048; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200; spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200;
    spd[11]=200; spd[12]=200; spd[25]=90; spd[26]=200; spd[27]=200; spd[28]=200; spd[29]=50;//spd[29]=30;
    spd[13]=20; spd[14]=20; spd[15]=20; spd[16]=20; spd[17]=20; spd[18]=20; spd[19]=20; spd[20]=20; 
    spd[21]=20; spd[22]=20; spd[23]=20; spd[24]=20;
    step_jalan[step]=8; 
  }
   if(step==9) // miring kanan
  {
    sudut[1]=663; sudut[3]=175; sudut[5]=382; sudut[7]=246; sudut[9]=572; sudut[11]=632; 
    sudut[2]=426; sudut[4]=782; sudut[6]=570; sudut[8]=802; sudut[10]=487; sudut[12]=322; 
    sudut[25]=2045; sudut[26]=523; sudut[27]=535; sudut[28]=425; sudut[29]=1948;
    
    sudut[13]=2048; sudut[15]=1992; sudut[17]=1795; sudut[19]=2677; sudut[21]=2485; sudut[23]=1940;  
    sudut[14]=2048; sudut[16]=1968; sudut[18]=2388; sudut[20]=1594; sudut[22]=1868; sudut[24]=1894; 

    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=20; spd[23]=35; spd[24]=30; //spd[29]=30
    sudut[29]=1948; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200; spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200;
    spd[11]=200; spd[12]=200; spd[25]=60; spd[26]=200; spd[27]=200; spd[28]=200; spd[29]=50;//spd[29]=30;
    
    step_jalan[step]=16;
  }
  jalankan_step();  
}
