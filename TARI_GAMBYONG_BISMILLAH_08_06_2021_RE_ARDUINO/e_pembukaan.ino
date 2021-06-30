void sembah_pembuka()
{
  //-----------------------------------------------Sembah Pembuka--------------------------------------------
  //---------------------------------------------------POSISI SIAP STEP_1----------------------------------------
if(step==1)
  {
    sudut[13]=2043; sudut[15]=2036; sudut[17]=1792; sudut[19]=2686; sudut[21]=2466; sudut[23]=2058; 
    sudut[14]=2085; sudut[16]=2067; sudut[18]=2481; sudut[20]=1425; sudut[22]=1807; sudut[24]=2036; 
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; 
    spd[19]=40; spd[20]=40; spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40;
    
    step_jalan[step]=11;
    //myservo.write(t);
  }

if(step==2)
  {
    sudut[1]=708; sudut[3]=333; sudut[5]=259; sudut[7]=237; sudut[9]=399; sudut[11]=333; 
    sudut[2]=317; sudut[4]=763; sudut[6]=748; sudut[8]=726; sudut[10]=637; sudut[12]=692;
    
    //sudut[13]=2043; sudut[15]=2050; sudut[17]=1808; sudut[19]=2681; sudut[21]=2456; sudut[23]=1871; 
    //sudut[14]=2085; sudut[16]=1902; sudut[18]=2248; sudut[20]=1083; sudut[22]=1371; sudut[24]=1803;  
    
    //sudut[29]=2048;
    
    spd[1]=150; spd[2]=150; spd[3]=150; spd[4]=150; spd[5]=150; spd[6]=150; 
    spd[7]=200; spd[8]=150; spd[9]=150; spd[10]=150; spd[11]=150; spd[12]=150;
    
    spd[13]=40; spd[14]=40; spd[15]=40; spd[16]=40; spd[17]=40; spd[18]=40; 
    spd[19]=40; spd[20]=40; spd[21]=40; spd[22]=40; spd[23]=40; spd[24]=40;
    
    step_jalan[step]=7;
  }

if(step==3)//12
  {
    sudut[1]=771; sudut[3]=276; sudut[5]=294; sudut[7]=201; sudut[9]=274; sudut[11]=333; 
    sudut[2]=267; sudut[4]=790; sudut[6]=717; sudut[8]=789; sudut[10]=809; sudut[12]=695;
    
    sudut[13]=2043; sudut[15]=2036; sudut[17]=1792; sudut[19]=2686; sudut[21]=2466; sudut[23]=2058; 
    sudut[14]=2085; sudut[16]=2067; sudut[18]=2481; sudut[20]=1425; sudut[22]=1807; sudut[24]=2036; 
    
    //sudut[29]=2048;
    
    spd[1]=150; spd[2]=150; spd[3]=150; spd[4]=150; spd[5]=150; spd[6]=150; 
    spd[7]=200; spd[8]=150; spd[9]=150; spd[10]=150; spd[11]=150; spd[12]=150;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; 
    spd[19]=60; spd[20]=60; spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30;

    step_jalan[step]=10;
  }
 
if(step==4)//12
  {
    sudut[1]=771; sudut[3]=276; sudut[5]=294; sudut[7]=201; sudut[9]=274; sudut[11]=333; 
    sudut[2]=267; sudut[4]=790; sudut[6]=717; sudut[8]=789; sudut[10]=809; sudut[12]=695;
    
    sudut[13]=2043; sudut[15]=2033; sudut[17]=1695; sudut[19]=2962; sudut[21]=2641; sudut[23]=2070; 
    sudut[14]=2085; sudut[16]=2068; sudut[18]=2612; sudut[20]=1116; sudut[22]=1631; sudut[24]=2041; 

    sudut[26]=511; sudut[27]=628; sudut[28]=512; //sudut[29]=2048;
    
    spd[1]=100; spd[2]=100; spd[3]=100; spd[4]=100; spd[5]=100; spd[6]=100; 
    spd[7]=100; spd[8]=100; spd[9]=100; spd[10]=100; spd[11]=100; spd[12]=100;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; 
    spd[19]=60; spd[20]=60; spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; 
    
    spd[26]=100; spd[27]=100; spd[28]=100; //spd[29]=30;
    
    step_jalan[step]=10;
  }

if(step==5)//12
  {
    sudut[1]=771; sudut[3]=276; sudut[5]=294; sudut[7]=201; sudut[9]=274; sudut[11]=333; 
    sudut[2]=267; sudut[4]=790; sudut[6]=717; sudut[8]=789; sudut[10]=809; sudut[12]=695;
    
    sudut[13]=2043; sudut[15]=2036; sudut[17]=1792; sudut[19]=2686; sudut[21]=2466; sudut[23]=2058; 
    sudut[14]=2085; sudut[16]=2067; sudut[18]=2481; sudut[20]=1425; sudut[22]=1807; sudut[24]=2036;
   
    sudut[26]=512; sudut[27]=512; sudut[28]=512; //sudut[29]=2048;
    
    spd[1]=150; spd[2]=150; spd[3]=150; spd[4]=150; spd[5]=150; spd[6]=150; 
    spd[7]=200; spd[8]=150; spd[9]=150; spd[10]=150; spd[11]=150; spd[12]=150;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; 
    spd[19]=60; spd[20]=60; spd[21]=35; spd[22]=35; spd[23]=30; spd[24]=30; 
    
    spd[26]=100; spd[27]=100; spd[28]=100; //spd[29]=30;
    
    step_jalan[step]=9;
  }
  
if(step==6)//12
  {
    sudut[1]=818; sudut[3]=268; sudut[5]=309; sudut[7]=280; sudut[9]=430; sudut[11]=583; 
    sudut[2]=385; sudut[4]=672; sudut[6]=675; sudut[8]=506; sudut[10]=814; sudut[12]=662; 
    
    sudut[13]=2043; sudut[15]=2036; sudut[17]=1792; sudut[19]=2686; sudut[21]=2466; sudut[23]=2058; 
    sudut[14]=2085; sudut[16]=2067; sudut[18]=2481; sudut[20]=1425; sudut[22]=1807; sudut[24]=2036;
    
    //sudut[29]=2048;
    
    spd[1]=170; spd[2]=170; spd[3]=170; spd[4]=170; spd[5]=170; spd[6]=170; 
    spd[7]=170; spd[8]=170; spd[9]=170; spd[10]=170; spd[11]=170; spd[12]=170;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; 
    spd[19]=30; spd[20]=30; spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30;
    
    step_jalan[step]=10;
    //myservo.write(5);
  }

if(step==7)//12
  {
    sudut[1]=818; sudut[3]=268; sudut[5]=309; sudut[7]=280; sudut[9]=430; sudut[11]=583; 
    sudut[2]=385; sudut[4]=672; sudut[6]=675; sudut[8]=506; sudut[10]=814; sudut[12]=662; 
    
    sudut[13]=2043; sudut[15]=2036; sudut[17]=1792; sudut[19]=2686; sudut[21]=2466; sudut[23]=2058; 
    sudut[14]=2085; sudut[16]=2067; sudut[18]=2481; sudut[20]=1425; sudut[22]=1807; sudut[24]=2036;
    
    //sudut[29]=2048;
    
    spd[1]=150; spd[2]=150; spd[3]=150; spd[4]=150; spd[5]=150; spd[6]=150; 
    spd[7]=200; spd[8]=150; spd[9]=150; spd[10]=150; spd[11]=150; spd[12]=150;
    
    spd[13]=30; spd[14]=30; spd[15]=30; spd[16]=30; spd[17]=30; spd[18]=30; 
    spd[19]=30; spd[20]=30; spd[21]=30; spd[22]=30; spd[23]=30; spd[24]=30;
    
    step_jalan[step]=8;
   // myservo.write(b);
  }

  jalankan_step();}
