
void pembuka_emas()
{
   if (step==1)
   { 
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=675; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808; 
    
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1887; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2422; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
    sudut[25]=2048; sudut[26]=512; sudut[27]=514; sudut[28]=512; sudut[29]=2048;
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30  
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7;
   }
     if (step==2) //enger rimong sampur
   { // jongkok
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=283; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=434;    
    sudut[29]=2177; 
    sudut[13]=2048; sudut[15]=2060; sudut[17]=1720; sudut[19]=2952; sudut[21]=2653; sudut[23]=2067;  
    sudut[14]=2048; sudut[16]=2027; sudut[18]=2592; sudut[20]=1113; sudut[22]=1630; sudut[24]=2010;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=55; spd[20]=55; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30;
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
   
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370; spd[29]=110; 
    step_jalan[step]=7;
   }
     if (step==3) //jongkok miring kiri
   {
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=675; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808;    
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=590;  
    sudut[29]=1919; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
    
    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=32; spd[24]=32;
     
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7; 
   }
    if (step==4) // jongkok miring kanan
   {
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=283; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808; 
    
    sudut[25]=2242; sudut[26]=524; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
 
    sudut[13]=2079; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2089; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33;
    
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=10; 
   }
    if (step==5) //enger rimong sampur // miring kiri jongkok
   {
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=675; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808;  
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 

    spd[13]=30; spd[14]=30; spd[15]=45; spd[16]=45; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=33; spd[24]=33; 
    
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=6;
   }
     if (step==6) // jongkok miring kanan
   {
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=283; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808; 
    sudut[25]=1854; sudut[26]=500; sudut[27]=493; sudut[28]=590;  
    sudut[29]=1919; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    sudut[13]=2079; sudut[15]=2048; sudut[17]=1727; sudut[19]=2963; sudut[21]=2660; sudut[23]=1987;  
    sudut[14]=2089; sudut[16]=2016; sudut[18]=2511; sudut[20]=1280; sudut[22]=1715; sudut[24]=1911; 
    spd[13]=35; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=35; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=30; spd[22]=32; spd[23]=33; spd[24]=33;
    
    spd[29]=110; 
    
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7; 
   }
    if (step==7) // moring kiri jongkok
   {
    
    sudut[1]=1023; sudut[3]=248; sudut[5]=206; sudut[7]=352; sudut[9]=503; sudut[11]=675; 
    sudut[2]=451; sudut[4]=652; sudut[6]=718; sudut[8]=737; sudut[10]=997; sudut[12]=808; 
    sudut[25]=2242; sudut[26]=524; sudut[27]=493; sudut[28]=434;  
    sudut[29]=2177; 
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;

    sudut[13]=2033; sudut[15]=2087; sudut[17]=1761; sudut[19]=2851; sudut[21]=2569; sudut[23]=2172;  
    sudut[14]=2063; sudut[16]=2039; sudut[18]=2589; sudut[20]=1078; sudut[22]=1626; sudut[24]=2098; 
   
    spd[13]=30; spd[14]=30; spd[17]=30; spd[18]=30; spd[19]=30; spd[20]=30; 
    spd[21]=35; spd[22]=32; spd[23]=33; spd[24]=33;
     
    spd[29]=110; 
    spd[25]=100; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=7; 
   }
      
     if (step==8) // jongkok
   {
    
    sudut[1]=880; sudut[3]=176; sudut[5]=378; sudut[7]=328; sudut[9]=197; sudut[11]=472; 
    sudut[2]=143; sudut[4]=846; sudut[6]=647; sudut[8]=727; sudut[10]=779; sudut[12]=550; 
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
    step_jalan[step]=15; 
   }
     if (step==9)// berdiri
   { 
    sudut[1]=696; sudut[3]=224; sudut[5]=316; sudut[7]=272; sudut[9]=62; sudut[11]=377;  
    sudut[2]=335; sudut[4]=803; sudut[6]=709; sudut[8]=776; sudut[10]=908; sudut[12]=668; 

    sudut[25]=2070; sudut[26]=526; sudut[27]=512; sudut[28]=511;  
    sudut[29]=2032; 
    
    spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
    spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
    
    sudut[13]=2048; sudut[15]=2067; sudut[17]=1917; sudut[19]=2711; sudut[21]=2575; sudut[23]=2069;  
    sudut[14]=2048; sudut[16]=2022; sudut[18]=2410; sudut[20]=1298; sudut[22]=1648; sudut[24]=2006;
   
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; spd[19]=50; spd[20]=50; 
    spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; //spd[29]=30
    
    spd[29]=30; 
    spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
    step_jalan[step]=10; 
   } 
    if (step==10)// berdiri
   { 
   
   sudut[1]=825; sudut[3]=279; sudut[5]=571; sudut[7]=335; sudut[9]=301; sudut[11]=337; 
   sudut[2]=182; sudut[4]=838; sudut[6]=650; sudut[8]=725; sudut[10]=779; sudut[12]=548; 
   sudut[25]=2006; sudut[26]=281; sudut[27]=592; sudut[28]=422;  
    
   spd[1]=200; spd[2]=200; spd[3]=200; spd[4]=200; spd[5]=200; spd[6]=200;
   spd[7]=200; spd[8]=200; spd[9]=200; spd[10]=200; spd[11]=400; spd[12]=400;
   spd[29]=30; 
   spd[25]=50; spd[26]=370; spd[27]=370; spd[28]=370;
   step_jalan[step]=10;
   } 
     jalankan_step();}

    
