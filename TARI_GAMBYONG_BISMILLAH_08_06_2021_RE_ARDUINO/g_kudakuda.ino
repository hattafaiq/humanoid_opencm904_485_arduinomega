void kudakuda()//center = kanan
 { 
  if(step1==1)//12
  {
   sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
   sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006; 
    //sudut[29]=2048;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
    step_jalan1[step1]=9;
  }

  if(step1==2)//12
  {
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;//3
    sudut[13]=2048; sudut[15]=2192; sudut[17]=2037; sudut[19]=2392; sudut[21]=2375; sudut[23]=2274;//3
    //sudut[29]=2048;

    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; spd[19]=40; spd[20]=40; 
    spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40; //spd[29]=30;
    step_jalan1[step1]=10;
  }
  
  if(step1==3)//12
  {
    sudut[13]=2048; sudut[15]=2226; sudut[17]=1864; sudut[19]=2799; sudut[21]=2614; sudut[23]=2252;//3
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;  
    //sudut[29]=2048;
    
    spd[13]=60; spd[14]=60; spd[15]=60; spd[16]=60; spd[17]=60; spd[18]=60; spd[19]=80; spd[20]=60; 
    spd[21]=60; spd[22]=60; spd[23]=60; spd[24]=60; //spd[29]=30;
    step_jalan1[step1]=5;
  }


  if(step1==4)//12
  {
    sudut[13]=2135; sudut[15]=2402; sudut[17]=1792; sudut[19]=2467; sudut[21]=2282; sudut[23]=2433;  
    sudut[14]=2048; sudut[16]=2159; sudut[18]=2359; sudut[20]=1413; sudut[22]=1671; sudut[24]=2255;  
    //sudut[29]=2048;
    
    spd[13]=120; spd[14]=60; spd[15]=120; spd[16]=60; spd[17]=120; spd[18]=60; spd[19]=120; spd[20]=60; 
    spd[21]=120; spd[22]=60; spd[23]=120; spd[24]=60; //spd[29]=30;
    step_jalan1[step1]=5;
  }
  
  if(step1==5)//12
  {
    sudut[13]=2074; sudut[15]=2341; sudut[17]=1924; sudut[19]=2324; sudut[21]=2229; sudut[23]=2432;   
    sudut[14]=2047; sudut[16]=2183; sudut[18]=2356; sudut[20]=1398; sudut[22]=1667; sudut[24]=2249;
    //sudut[29]=2048;
    
    spd[13]=120; spd[14]=60; spd[15]=120; spd[16]=60; spd[17]=120; spd[18]=60; spd[19]=120; spd[20]=60; 
    spd[21]=120; spd[22]=60; spd[23]=120; spd[24]=60; //spd[29]=30;
    step_jalan1[step1]=2;
  }
  

if(step1==6)//12
{
 sudut[13]=2028; sudut[15]=2108; sudut[17]=1756; sudut[19]=2617; sudut[21]=2333; sudut[23]=2155;  
 sudut[14]=2006; sudut[16]=1987; sudut[18]=2351; sudut[20]=1397; sudut[22]=1680; sudut[24]=2001; 
 
 spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=55; spd[20]=55; 
 spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
  step_jalan1[step1]=2;
} 
if(step1==7)//12
{
  sudut[13]=2044; sudut[15]=2112; sudut[17]=1530; sudut[19]=3003; sudut[21]=2537; sudut[23]=2139;  
  sudut[14]=2043; sudut[16]=1964; sudut[18]=2534; sudut[20]=1068; sudut[22]=1496; sudut[24]=1966; 
 
  spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=55; spd[20]=55; 
  spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30; //spd[29]=30;
  step_jalan1[step1]=2;
} 

jalankan_step1();}
