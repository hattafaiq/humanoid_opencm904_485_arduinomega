//================================================================================================================
//================================================================================================================
//gerakan zona C

void beksan() // geerkan diam di tempat
{
   
   if (step==1)
   {
    sudut[1]=668; sudut[3]=367; sudut[5]=534; sudut[7]=314; sudut[9]=60; sudut[11]=288; 
    sudut[2]=197; sudut[4]=796; sudut[6]=770; sudut[8]=734; sudut[10]=928; sudut[12]=771; 
    sudut[25]=1739; sudut[26]=343; sudut[27]=584; sudut[28]=478; 
    sudut[29]=1706;   

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=350; spd[27]=200; spd[28]=150;
    
    step_jalan[step]=9; 
   }
   if (step==2)
   {
    sudut[2]=197; sudut[4]=796; sudut[6]=770; sudut[8]=734; sudut[10]=928; sudut[12]=771; 
    sudut[1]=695; sudut[3]=321; sudut[5]=587; sudut[7]=497; sudut[9]=60; sudut[11]=303; 
    sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=350; spd[27]=200; spd[28]=150;
    
    step_jalan[step]=8; 
   }
    if(step==3)//12
  {
    sudut[1]=434; sudut[3]=488; sudut[5]=572; sudut[7]=227; sudut[9]=28; sudut[11]=335; 
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;//3
    sudut[13]=2048; sudut[15]=2192; sudut[17]=2037; sudut[19]=2392; sudut[21]=2375; sudut[23]=2274;//3
    //sudut[29]=2048;
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; //spd[29]=30;
    step_jalan[step]=10;
  }
  
  if(step==4)
  {
    sudut[1]=695; sudut[3]=321; sudut[5]=587; sudut[7]=497; sudut[9]=60; sudut[11]=303; 
    sudut[13]=2048; sudut[15]=2226; sudut[17]=1864; sudut[19]=2799; sudut[21]=2614; sudut[23]=2252;//3
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;  
    //sudut[29]=2048;
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;  
    spd[13]=60; spd[14]=60; spd[15]=60; spd[16]=60; spd[17]=60; spd[18]=60; spd[19]=80; spd[20]=60; 
    spd[21]=60; spd[22]=60; spd[23]=60; spd[24]=60; //spd[29]=30;
    step_jalan[step]=8;
  }
   if(step==5)//angkat kaki
  {
    sudut[1]=847; sudut[3]=205; sudut[5]=273; sudut[7]=520; sudut[9]=28; sudut[11]=306; 
    sudut[2]=205; sudut[4]=365; sudut[6]=760; sudut[8]=836; sudut[10]=932; sudut[12]=775; 
    sudut[25]=1792; sudut[26]=359; sudut[27]=468; sudut[28]=420; 
    
    sudut[13]=2048; sudut[15]=2228; sudut[17]=1388; sudut[19]=2949; sudut[21]=2323; sudut[23]=2279; 
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;  
    //sudut[29]=2048;
    
    spd[13]=120; spd[14]=60; spd[15]=120; spd[16]=60; spd[17]=120; spd[18]=60; spd[19]=120; spd[20]=60; 
    spd[21]=120; spd[22]=60; spd[23]=120; spd[24]=60; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[26]=350; spd[27]=200; spd[28]=150;
    step_jalan[step]=22;
  }
   if(step==6)
  {
    sudut[1]=731; sudut[3]=333; sudut[5]=575; sudut[7]=339; sudut[9]=515; sudut[11]=658; 
    sudut[2]=197; sudut[4]=796; sudut[6]=770; sudut[8]=734; sudut[10]=928; sudut[12]=771; 
    sudut[25]=1759; sudut[26]=374; sudut[27]=499; sudut[28]=516; sudut[29]=1711; 
 
    sudut[13]=2048; sudut[15]=2226; sudut[17]=1864; sudut[19]=2799; sudut[21]=2614; sudut[23]=2252;//3
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;  
    //sudut[29]=2048;
    
    spd[13]=60; spd[14]=60; spd[15]=60; spd[16]=60; spd[17]=60; spd[18]=60; spd[19]=80; spd[20]=60; 
    spd[21]=60; spd[22]=60; spd[23]=60; spd[24]=60; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[26]=150; spd[27]=200; spd[28]=150;
    step_jalan[step]=10;
  }
      if(step1==7)
  {
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;//3
    sudut[13]=2048; sudut[15]=2192; sudut[17]=2037; sudut[19]=2392; sudut[21]=2375; sudut[23]=2274;//3
    //sudut[29]=2048;

    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; //spd[29]=30;
    step_jalan[step]=8;
  }
   if(step==8)// kaki turun napak
  {    
   
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006; 
    //sudut[29]=2048;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
    step_jalan[step]=7;
  }
   if(step==9)// kaki turun napak
  {    
    sudut[1]=434; sudut[3]=488; sudut[5]=572; sudut[7]=227; sudut[9]=28; sudut[11]=335; 
    sudut[2]=179; sudut[4]=628; sudut[6]=772; sudut[8]=746; sudut[10]=930; sudut[12]=774; 
    sudut[29]=2234; sudut[25]=2205; sudut[26]=663; sudut[27]=575; sudut[28]=513; 
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006; 
    //sudut[29]=2048;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[26]=350; spd[27]=200; spd[28]=150;
    step_jalan[step]=4;
  }
   if(step==10)// kaki turun napak
  {    
    sudut[1]=434; sudut[3]=488; sudut[5]=572; sudut[7]=227; sudut[9]=28; sudut[11]=335; 
    sudut[2]=179; sudut[4]=628; sudut[6]=772; sudut[8]=746; sudut[10]=930; sudut[12]=774; 
    sudut[29]=2234; sudut[25]=2205; sudut[26]=300; sudut[27]=564; sudut[28]=509;  
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006; 
    //sudut[29]=2048;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[26]=350; spd[27]=200; spd[28]=150;
    step_jalan[step]=4;
  }
   jalankan_step();}
   
//================================================================================================================
//================================================================================================================

void beksan_1() // gerakan jalan
{
   if (step==1)//sindet ukel karno
   {
    
    sudut[1]=938; sudut[3]=218; sudut[5]=287; sudut[7]=351; sudut[9]=65535; sudut[11]=65535; 
    sudut[2]=342; sudut[4]=722; sudut[6]=65535; sudut[8]=65535; sudut[10]=65535; sudut[12]=65535;  
    sudut[25]=2197; sudut[26]=531; sudut[27]=475; sudut[28]=605; sudut[29]=2165; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
   if (step==2)
   {
     
    sudut[1]=722; sudut[3]=276; sudut[5]=183; sudut[7]=325; sudut[9]=116; sudut[11]=423; 
    sudut[2]=79; sudut[4]=804; sudut[6]=722; sudut[8]=713; sudut[10]=820; sudut[12]=512; 
    sudut[25]=1815; sudut[26]=516; sudut[27]=475; sudut[28]=435;  
    sudut[29]=1962; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
 
    if (step== 3)
   {    
    sudut[1]=724; sudut[3]=261; sudut[5]=288; sudut[7]=342; sudut[9]=613; sudut[11]=311; 
    sudut[2]=88; sudut[4]=829; sudut[6]=625; sudut[8]=652; sudut[10]=818; sudut[12]=752; 
    sudut[25]=2040; sudut[26]=517; sudut[27]=469; sudut[28]=498;  
    sudut[29]=2041; 
 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=400; spd[10]=400; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
     if (step==4)
   {
    sudut[1]=773; sudut[3]=258; sudut[5]=155; sudut[7]=427; sudut[9]=60; sudut[11]=222; 
    sudut[2]=154; sudut[4]=792; sudut[6]=726; sudut[8]=778; sudut[10]=818; sudut[12]=653; 
    sudut[25]=2035; sudut[26]=521; sudut[27]=468; sudut[28]=497;  
    sudut[29]=2047; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=400; spd[10]=400; spd[11]=200; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
  
     if (step== 5)
   {
    sudut[1]=729; sudut[3]=265; sudut[5]=218; sudut[7]=370; sudut[9]=106; sudut[11]=692; 
    sudut[2]=148; sudut[4]=782; sudut[6]=743; sudut[8]=730; sudut[10]=870; sudut[12]=240; 
    sudut[25]=2061; sudut[26]=514; sudut[27]=574; sudut[28]=499;  
    sudut[29]=2041; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
     if (step==6)
   {
     sudut[1]=773; sudut[3]=258; sudut[5]=155; sudut[7]=427; sudut[9]=60; sudut[11]=222; 
     sudut[2]=154; sudut[4]=792; sudut[6]=726; sudut[8]=778; sudut[10]=818; sudut[12]=653; 
     sudut[25]=2035; sudut[26]=521; sudut[27]=468; sudut[28]=497;  
     sudut[29]=2047; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=400; spd[10]=400; spd[11]=400; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
       if (step==7)
   {
     sudut[1]=773; sudut[3]=258; sudut[5]=155; sudut[7]=427; sudut[9]=60; sudut[11]=222; 
     sudut[2]=154; sudut[4]=792; sudut[6]=726; sudut[8]=778; sudut[10]=818; sudut[12]=653; 
     sudut[25]=2035; sudut[26]=521; sudut[27]=468; sudut[28]=497;  
     sudut[29]=2047; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=400; spd[10]=400; spd[11]=400; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
  
     if (step== 8)
   {
    sudut[1]=729; sudut[3]=265; sudut[5]=218; sudut[7]=370; sudut[9]=106; sudut[11]=692; 
    sudut[2]=148; sudut[4]=782; sudut[6]=743; sudut[8]=730; sudut[10]=870; sudut[12]=240; 
    sudut[25]=2061; sudut[26]=514; sudut[27]=574; sudut[28]=499;  
    sudut[29]=2041; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
     if (step==9)
   {
     sudut[1]=773; sudut[3]=258; sudut[5]=155; sudut[7]=427; sudut[9]=60; sudut[11]=222; 
     sudut[2]=154; sudut[4]=792; sudut[6]=726; sudut[8]=778; sudut[10]=818; sudut[12]=653; 
     sudut[25]=2035; sudut[26]=521; sudut[27]=468; sudut[28]=497;  
     sudut[29]=2047; sudut[26]=512; sudut[27]=512; sudut[28]=512; sudut[29]=2048; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=400; spd[10]=400; spd[11]=400; spd[12]=400;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    
    step_jalan[step]=17; 
   }
   jalankan_step();}
   
//================================================================================================================
//================================================================================================================
 
  void beksan_2(){ // gerakan diem gajah oling
    
     if (step==1)//jongkok
   {
     sudut[1]=722; sudut[3]=320; sudut[5]=191; sudut[7]=523; sudut[9]=127; sudut[11]=65535; 
     sudut[2]=114; sudut[4]=798; sudut[6]=757; sudut[8]=698; sudut[10]=634; sudut[12]=388; 
     sudut[25]=1742; sudut[26]=458; sudut[27]=493; sudut[28]=433;  
     sudut[29]=2169; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=55; spd[20]=55; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    step_jalan[step]=17; 
   }
     if (step==2) //jongkok miring kiri
   {
    sudut[1]=779; sudut[3]=290; sudut[5]=131; sudut[7]=323; sudut[9]=267; sudut[11]=223; 
    sudut[2]=126; sudut[4]=797; sudut[6]=745; sudut[8]=735; sudut[10]=893; sudut[12]=573; 
    sudut[25]=2220; sudut[26]=546; sudut[27]=464; sudut[28]=430;  
    sudut[29]=2143; 
     
    sudut[13]=2048; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2048; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32; spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    
    step_jalan[step]=17; 
   }
    
     if (step==3)// jongkok miring kanan
    {
    sudut[1]=757; sudut[3]=291; sudut[5]=340; sudut[7]=259; sudut[9]=433; sudut[11]=610; 
    sudut[2]=110; sudut[4]=770; sudut[6]=617; sudut[8]=666; sudut[10]=703; sudut[12]=293; 
    sudut[25]=2202; sudut[26]=550; sudut[27]=460; sudut[28]=624;  
    sudut[29]=2165; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2048; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33; spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    
    step_jalan[step]=17; 
   }
  
  if (step==4)//jongkok miring kiri
    {
    sudut[1]=733; sudut[3]=289; sudut[5]=65535; sudut[7]=65535; sudut[9]=65535; sudut[11]=328; 
    sudut[2]=111; sudut[4]=765; sudut[6]=617; sudut[8]=636; sudut[10]=702; sudut[12]=696; 
    sudut[25]=2201; sudut[26]=551; sudut[27]=461; sudut[28]=429; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32; spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    step_jalan[step]=17; 
   }
    if (step==5)//jongkok miring kanan
    {
    sudut[1]=757; sudut[3]=291; sudut[5]=340; sudut[7]=259; sudut[9]=433; sudut[11]=610; 
    sudut[2]=110; sudut[4]=770; sudut[6]=617; sudut[8]=666; sudut[10]=703; sudut[12]=293; 
    sudut[25]=2202; sudut[26]=550; sudut[27]=460; sudut[28]=624;  
    sudut[29]=2165; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2048; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
   
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33;
    
    spd[25]=50; spd[26]=150; spd[27]=200; spd[28]=150;
    
    step_jalan[step]=17; 
   }
  
  if (step==6)//jongkok miring kiri
    {
    sudut[1]=733; sudut[3]=289; sudut[5]=65535; sudut[7]=65535; sudut[9]=65535; sudut[11]=328; 
    sudut[2]=111; sudut[4]=765; sudut[6]=617; sudut[8]=636; sudut[10]=702; sudut[12]=696; 
    sudut[25]=2201; sudut[26]=551; sudut[27]=461; sudut[28]=429; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;
    spd[25]=50; spd[26]=150; spd[27]=200; spd[28]=150;
    
    step_jalan[step]=17; 
   }
    jalankan_step();}

//================================================================================================================
//================================================================================================================    
    
   void beksan_3() // gerakan jalan
    {
    
     if (step==1)
   {
    
    sudut[1]=686; sudut[3]=368; sudut[5]=204; sudut[7]=350; sudut[9]=21; sudut[11]=286; 
    sudut[2]=360; sudut[4]=579; sudut[6]=812; sudut[8]=751; sudut[10]=1023; sudut[12]=720; 
    sudut[25]=2048; sudut[26]=458; sudut[27]=516; sudut[28]=637;  
    sudut[29]=2048; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    step_jalan[step]=9; 
   }  
 
  if (step==2) //gerak laku gambyong
   {
    sudut[1]=672; sudut[3]=328; sudut[5]=250; sudut[7]=450; sudut[9]=145; sudut[11]=284; 
    sudut[2]=296; sudut[4]=767; sudut[6]=808; sudut[8]=679; sudut[10]=1020; sudut[12]=714; 
    sudut[25]=2048; sudut[26]=472; sudut[27]=479; sudut[28]=434;  
    sudut[29]=2048; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=5; 
   }
     if (step==3)
   {
    sudut[1]=902; sudut[3]=397; sudut[5]=252; sudut[7]=505; sudut[9]=116; sudut[11]=284; 
    sudut[2]=196; sudut[4]=758; sudut[6]=859; sudut[8]=722; sudut[10]=919; sudut[12]=691; 
    sudut[25]=2147; sudut[26]=496; sudut[27]=562; sudut[28]=430;  
    sudut[29]=1969; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30 
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370; 
    step_jalan[step]=7; 
   }
     if (step==4)
   {
    sudut[1]=902; sudut[3]=397; sudut[5]=252; sudut[7]=375; sudut[9]=116; sudut[11]=679; 
    sudut[2]=196; sudut[4]=758; sudut[6]=859; sudut[8]=722; sudut[10]=919; sudut[12]=275; 
    sudut[25]=2147; sudut[26]=494; sudut[27]=498; sudut[28]=590; 
    sudut[29]=1969; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=400; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=10; 
   }
      if (step==5)
   {
    sudut[1]=902; sudut[3]=397; sudut[5]=252; sudut[7]=505; sudut[9]=116; sudut[11]=284; 
    sudut[2]=196; sudut[4]=758; sudut[6]=859; sudut[8]=722; sudut[10]=919; sudut[12]=691; 
    sudut[25]=2147; sudut[26]=300; sudut[27]=498; sudut[28]=590; 
    sudut[29]=1969; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;  
    step_jalan[step]=10; 
   }
    
       if (step==6)
   {
    sudut[1]=902; sudut[3]=397; sudut[5]=252; sudut[7]=375; sudut[9]=116; sudut[11]=679; 
    sudut[2]=196; sudut[4]=758; sudut[6]=859; sudut[8]=722; sudut[10]=919; sudut[12]=275; 
    sudut[25]=2147; sudut[26]=700; sudut[27]=498; sudut[28]=590; 
    sudut[29]=1969; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=400; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=10; 
   }
     if (step==7)
   {
    sudut[1]=902; sudut[3]=397; sudut[5]=252; sudut[7]=505; sudut[9]=116; sudut[11]=284; 
    sudut[2]=196; sudut[4]=758; sudut[6]=859; sudut[8]=722; sudut[10]=919; sudut[12]=691; 
    sudut[25]=2147; sudut[26]=512; sudut[27]=498; sudut[28]=590; 
    sudut[29]=1969; 
   
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7; 
   }
    
    jalankan_step();}
    
//================================================================================================================
//================================================================================================================
   
  void beksan_4() // gerakan diem
    {
        if (step==1)
   { 
    sudut[1]=655; sudut[3]=321; sudut[5]=276; sudut[7]=370; sudut[9]=223; sudut[11]=291; 
    sudut[2]=322; sudut[4]=772; sudut[6]=822; sudut[8]=625; sudut[10]=847; sudut[12]=714;

    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
    sudut[25]=2048; sudut[26]=512; sudut[27]=514; sudut[28]=512; sudut[29]=2048;
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7;
   }
     if (step==2) //enger rimong sampur
   { // jongkok
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=55; spd[20]=55; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
   
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    step_jalan[step]=6;
   }
     if (step==3) //jongkok miring kiri
   {
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=590;  
    sudut[29]=1919; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2048; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6; 
   }
    if (step==3) // jongkok miring kanan
   {
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=2242; sudut[26]=524; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
 
    sudut[13]=2048; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2048; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33;
    
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6; 
   }
    if (step==4) //enger rimong sampur // miring kiri jongkok
   {
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    sudut[13]=2048; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2048; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; //spd[29]=30  
    
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6;
   }
     if (step==5) // jongkok miring kanan
   {
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=590;  
    sudut[29]=1919; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;

    sudut[13]=2048; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2048; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33;
    
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6; 
   }
    if (step==6) // moring kiri jongkok
   {
    
    sudut[1]=753; sudut[3]=329; sudut[5]=161; sudut[7]=329; sudut[9]=112; sudut[11]=165; 
    sudut[2]=271; sudut[4]=744; sudut[6]=872; sudut[8]=736; sudut[10]=825; sudut[12]=794; 
    sudut[25]=2242; sudut[26]=524; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    sudut[13]=2048; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2048; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;  
    
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6; 
   }
      
     if (step==7) // jongkok
   {
    
    sudut[1]=787; sudut[3]=260; sudut[5]=369; sudut[7]=356; sudut[9]=451; sudut[11]=681; 
    sudut[2]=275; sudut[4]=804; sudut[6]=859; sudut[8]=654; sudut[10]=783; sudut[12]=819; 
    sudut[25]=2070; sudut[26]=526; sudut[27]=628; sudut[28]=511;  
    sudut[29]=2032; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=50; spd[20]=50; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[29]=90;
    spd[25]=70; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6; 
   }
     if (step==8)// berdiri
   { 
    sudut[1]=787; sudut[3]=260; sudut[5]=369; sudut[7]=356; sudut[9]=451; sudut[11]=717; 
    sudut[2]=275; sudut[4]=804; sudut[6]=859; sudut[8]=654; sudut[10]=783; sudut[12]=310; 
    sudut[25]=2070; sudut[26]=526; sudut[27]=512; sudut[28]=511;  
    sudut[29]=2032; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
   
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=50; spd[20]=50; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30
    
    spd[29]=30; 
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7; 
   } 
     jalankan_step();}

    
//================================================================================================================
//================================================================================================================
    
  void beksan_5() // gerakan diem
   {
    if (step==1)// joongkok miring kiri
   {
    sudut[1]=819; sudut[3]=253; sudut[5]=251; sudut[7]=310; sudut[9]=233; sudut[11]=282; 
    sudut[2]=286; sudut[4]=798; sudut[6]=854; sudut[8]=695; sudut[10]=335; sudut[12]=310; 
    sudut[25]=2226; sudut[26]=525; sudut[27]=499; sudut[28]=435;  
    sudut[29]=2159; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32; 
  
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     if (step==2)// jongkok miring kiri
   {
    sudut[1]=812; sudut[3]=254; sudut[5]=251; sudut[7]=311; sudut[9]=233; sudut[11]=281; 
    sudut[2]=265; sudut[4]=814; sudut[6]=893; sudut[8]=662; sudut[10]=731; sudut[12]=850; 
    sudut[25]=2223; sudut[26]=550; sudut[27]=494; sudut[28]=610;  
    sudut[29]=2159;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; //spd[29]=30  
     
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
   
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
    
  if (step==3)// 
   {
    sudut[1]=735; sudut[3]=237; sudut[5]=203; sudut[7]=317; sudut[9]=195; sudut[11]=191; 
    sudut[2]=149; sudut[4]=793; sudut[6]=892; sudut[8]=693; sudut[10]=733; sudut[12]=851;
    sudut[25]=1809; sudut[26]=517; sudut[27]=492; sudut[28]=449;  
    sudut[29]=1937;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     
    if (step==4)
   {
    sudut[1]=735; sudut[3]=234; sudut[5]=207; sudut[7]=312; sudut[9]=699; sudut[11]=463; 
    sudut[2]=149; sudut[4]=792; sudut[6]=891; sudut[8]=694; sudut[10]=734; sudut[12]=851; 
    sudut[25]=1809; sudut[26]=514; sudut[27]=489; sudut[28]=635;  
    sudut[29]=1937; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2079; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2089; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=20; spd[23]=35; spd[24]=30;
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=10; 
   }
     if (step==5)// joongkok miring kiri
   {
    sudut[1]=819; sudut[3]=253; sudut[5]=251; sudut[7]=310; sudut[9]=233; sudut[11]=282; 
    sudut[2]=286; sudut[4]=798; sudut[6]=854; sudut[8]=695; sudut[10]=335; sudut[12]=310; 
    sudut[25]=2226; sudut[26]=525; sudut[27]=499; sudut[28]=435;  
    sudut[29]=2159; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;
  
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     if (step==6)// jongkok miring kiri
   {
    sudut[1]=812; sudut[3]=254; sudut[5]=251; sudut[7]=311; sudut[9]=233; sudut[11]=281; 
    sudut[2]=265; sudut[4]=814; sudut[6]=893; sudut[8]=662; sudut[10]=731; sudut[12]=850; 
    sudut[25]=2223; sudut[26]=550; sudut[27]=494; sudut[28]=610;  
    sudut[29]=2159;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; //spd[29]=30  
     
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
   
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
    
  if (step==7)// 
   {
    sudut[1]=735; sudut[3]=237; sudut[5]=203; sudut[7]=317; sudut[9]=195; sudut[11]=191; 
    sudut[2]=149; sudut[4]=793; sudut[6]=892; sudut[8]=693; sudut[10]=733; sudut[12]=851;
    sudut[25]=1809; sudut[26]=517; sudut[27]=492; sudut[28]=449;  
    sudut[29]=1937;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     
    if (step==8)
   {
    sudut[1]=735; sudut[3]=234; sudut[5]=207; sudut[7]=312; sudut[9]=699; sudut[11]=463; 
    sudut[2]=149; sudut[4]=792; sudut[6]=891; sudut[8]=694; sudut[10]=734; sudut[12]=851; 
    sudut[25]=1809; sudut[26]=514; sudut[27]=489; sudut[28]=635;  
    sudut[29]=1937; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2079; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2089; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=20; spd[23]=35; spd[24]=30;
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=10; 
   } 
     if (step==9)// joongkok miring kiri
   {
    sudut[1]=819; sudut[3]=253; sudut[5]=251; sudut[7]=310; sudut[9]=233; sudut[11]=282; 
    sudut[2]=286; sudut[4]=798; sudut[6]=854; sudut[8]=695; sudut[10]=335; sudut[12]=310; 
    sudut[25]=2226; sudut[26]=525; sudut[27]=499; sudut[28]=435;  
    sudut[29]=2159; 

    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32; 
  
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     if (step==10)// jongkok miring kiri
   {
    sudut[1]=812; sudut[3]=254; sudut[5]=251; sudut[7]=311; sudut[9]=233; sudut[11]=281; 
    sudut[2]=265; sudut[4]=814; sudut[6]=893; sudut[8]=662; sudut[10]=731; sudut[12]=850; 
    sudut[25]=2223; sudut[26]=550; sudut[27]=494; sudut[28]=610;  
    sudut[29]=2159;
        
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;
     
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
   
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
    
  if (step==11)// 
   {
    sudut[1]=735; sudut[3]=237; sudut[5]=203; sudut[7]=317; sudut[9]=195; sudut[11]=191; 
    sudut[2]=149; sudut[4]=793; sudut[6]=892; sudut[8]=693; sudut[10]=733; sudut[12]=851;
    sudut[25]=1809; sudut[26]=517; sudut[27]=492; sudut[28]=449;  
    sudut[29]=1937;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=60; spd[24]=60; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
     
    if (step==12)
   {
    sudut[1]=735; sudut[3]=234; sudut[5]=207; sudut[7]=312; sudut[9]=699; sudut[11]=463; 
    sudut[2]=149; sudut[4]=792; sudut[6]=891; sudut[8]=694; sudut[10]=734; sudut[12]=851; 
    sudut[25]=1809; sudut[26]=514; sudut[27]=489; sudut[28]=635;  
    sudut[29]=1937; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=200; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1917; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2410; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
   
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=20; spd[23]=35; spd[24]=30;
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; 
    spd[29]=70; 
    step_jalan[step]=7; 
   } 
  jalankan_step();}
 
   
