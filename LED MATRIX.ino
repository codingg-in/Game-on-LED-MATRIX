#include "Keyboard.h"
#define H HIGH
#define L LOW
void setup() 
{
for(int i =22; i<54;i=i+1)
  { 
    pinMode(i,OUTPUT);
  }
//    pinMode(0,INPUT);
//    pinMode(1,INPUT);
Serial.begin(115200);

  initial();
}

void user(int fdotx,int fdoty, int currx)
{
if(currx==1)
  {
    digitalWrite(fdotx,H);
    digitalWrite(fdoty+2,H);
    digitalWrite(fdoty+6,H);
    delay(1);
    digitalWrite(fdotx,LOW);
    digitalWrite(fdoty+2,LOW);
    digitalWrite(fdoty+6,LOW);
    delay(1);
  }
else
  if(currx==2)
    {
      digitalWrite(fdotx+2,H);
      digitalWrite(fdoty,H);
      digitalWrite(fdoty+2,H);
      digitalWrite(fdoty+4,H);
      digitalWrite(fdoty+6,H);
      delay(1);
      digitalWrite(fdotx+2,LOW);
      digitalWrite(fdoty,LOW);
      digitalWrite(fdoty+2,LOW);
      digitalWrite(fdoty+4,LOW);
      digitalWrite(fdoty+6,LOW);
      delay(1);
    }
  else
    if(currx==3)
      {
        digitalWrite(fdotx+4,H);
        digitalWrite(fdoty+2,H);
        digitalWrite(fdoty+6,H);
        delay(1);
        digitalWrite(fdotx+4,LOW);
        digitalWrite(fdoty+2,LOW);
        digitalWrite(fdoty+6,LOW);
        delay(1);     
      }
}


void enemy(int fdotx,int fdoty, int currx)
{
if(currx==1)
  {
    digitalWrite(fdotx,H);
    digitalWrite(fdoty,H);
    digitalWrite(fdoty+2,H);
    delay(1);
    digitalWrite(fdotx,LOW);
    digitalWrite(fdoty,LOW);
    digitalWrite(fdoty+2,LOW);
    delay(1);
  }
else
  if(currx==2)
    {
      digitalWrite(fdotx+2,H);
      digitalWrite(fdoty,H);
      digitalWrite(fdoty+2,H);
      digitalWrite(fdoty+4,H);
      delay(1);
      digitalWrite(fdotx+2,LOW);
      digitalWrite(fdoty,LOW);
      digitalWrite(fdoty+2,LOW);
      digitalWrite(fdoty+4,LOW);
      delay(1);
    }
  else
    if(currx==3)
      {
        digitalWrite(fdotx+4,H);
        digitalWrite(fdoty,H);
        digitalWrite(fdoty+2,H);
        delay(1);
        digitalWrite(fdotx+4,LOW);
        digitalWrite(fdoty,LOW);
        digitalWrite(fdoty+2,LOW);
        delay(1);     
      }
}
void initial()
{int i,j;
  char a[16][16]={ 'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','H','H','H','L','H','L','L','L','H','L','L','H','H','H','L',
                   'L','L','L','H','L','H','L','L','L','H','L','L','L','H','L','L',
                   'L','H','H','H','L','H','H','H','L','H','L','L','L','H','L','L',
                   'L','H','L','L','L','H','L','H','L','H','L','L','L','H','L','L',
                   'L','H','H','H','L','H','H','H','L','H','L','L','L','H','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','H','H','H','L','H','L','L','H','L','H','L','L','H','L','L',
                   'L','H','L','H','L','H','L','L','H','L','H','H','L','H','L','L',
                   'L','H','H','L','L','H','L','L','H','L','H','H','H','H','L','L',
                   'L','H','L','H','L','H','L','L','H','L','H','L','H','H','L','L',
                   'L','H','L','H','L','H','H','H','H','L','H','L','L','H','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L'};
                            /*i=1;j=1;
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,HIGH);
                            tmp = (j+11)*2+1;
                            digitalWrite(tmp,HIGH);
             /*digitalWrite(24,HIGH);
             digitalWrite(25,HIGH);
*/
                for(int k=0;k<3000;k++)
                  {
                  for(int i=0;i<16;i++)
                    {  
                      for(int j=0;j<16;j++)
                    if(a[j][i] == 'H')
                          {
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,HIGH);
                            tmp = ((j+11)*2)+1;
                            digitalWrite(tmp,HIGH);
                          }
                      for(int j=0;j<16;j++)
                        if(a[j][i] == 'H')
                          {
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,LOW);
                            tmp = ((j+11)*2)+1;
                            digitalWrite(tmp,LOW);
                          }                    
                     }
                  }
}


void stop2()
{int i,j;
  char a[16][16]={ 'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','H','H','H','L','H','L','L','H','L','H','H','L','L','L',
                   'L','L','H','L','L','L','H','H','L','H','L','H','L','H','L','L',
                   'L','L','H','L','L','L','H','H','L','H','L','H','L','H','L','L',
                   'L','L','H','H','L','L','H','H','H','H','L','H','L','H','L','L',
                   'L','L','H','L','L','L','H','L','H','H','L','H','L','H','L','L',
                   'L','L','H','L','L','L','H','L','H','H','L','H','L','H','L','L',
                   'L','L','H','H','H','L','H','L','L','H','L','H','H','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L',
                   'L','L','L','L','L','L','L','L','L','L','L','L','L','L','L','L'};
                            /*i=1;j=1;
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,HIGH);
                            tmp = (j+11)*2+1;
                            digitalWrite(tmp,HIGH);
             /*digitalWrite(24,HIGH);
             digitalWrite(25,HIGH);
*/
                for(int k=0;k<3000;k++)
                  {
                  for(int i=0;i<16;i++)
                    {  
                      for(int j=0;j<16;j++)
                    if(a[j][i] == 'H')
                          {
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,HIGH);
                            tmp = ((j+11)*2)+1;
                            digitalWrite(tmp,HIGH);
                          }
                      for(int j=0;j<16;j++)
                        if(a[j][i] == 'H')
                          {
                            int tmp = (i+11)*2;
                            digitalWrite(tmp,LOW);
                            tmp = ((j+11)*2)+1;
                            digitalWrite(tmp,LOW);
                          }                    
                     }
                  }
}
void loop() 
{
  int i,j,k,usrx=36,usry=45,enmyx1,enmyy1=19,enmyx2,enmyy2=3,joyx,joyy;
  enmyx1=(random(12)+12)*2;
  enmyx2=(random(12)+12)*2;
  for(k=0;k<1000;k++)
  {
  for(j=0;j<15;j++)
    {
      for(i=1;i<=3;i++)
        {
          user(usrx,usry,i);
          enemy(enmyx1,enmyy1,i);
          enemy(enmyx2,enmyy2,i);
        }
    }
  //joyx=Serial.println(analogRead(0));
  joyx=analogRead(0);
  //joyy=Serial.print(analogRead(1));

  if(joyx>=600 && joyx<=700)
    {if(usrx==24)
      usrx+=2;
    usrx-=2;
    }
  else
    if(joyx>=0 && joyx<=100)
      {if(usrx==46)
      usrx-=2;
    
        usrx+=2;
      }
  enmyy1+=2;
  enmyy2+=2;
  if(usrx+4==enmyx1 && (usry==enmyy1 || usry==enmyy1+2 || usry+2==enmyy1 || usry+4==enmyy1 || usry+6==enmyy1 ))
    goto end;
  else if(usrx==enmyx1+4 && (usry==enmyy1 || usry==enmyy1+2 || usry+2==enmyy1 || usry+4==enmyy1 || usry+6==enmyy1 ))
          goto end;
       else if(usrx==enmyx1+2 && (usry==enmyy1+2))
              goto end;
            else if(usrx+2==enmyx1 && (usry==enmyy1+2))
                   goto end;
            else if(usrx==enmyx1 && (usry==enmyy1+4))
                   goto end;
  if(usrx+4==enmyx2 && (usry==enmyy2 || usry==enmyy2+2 || usry+2==enmyy2 || usry+4==enmyy2 || usry+6==enmyy2 ))
    goto end;
  else if(usrx==enmyx2+4 && (usry==enmyy2 || usry==enmyy2+2 || usry+2==enmyy2 || usry+4==enmyy2 || usry+6==enmyy2 ))
          goto end;
       else if(usrx==enmyx2+2 && (usry==enmyy2+2))
              goto end;
            else if(usrx+2==enmyx2 && (usry==enmyy2+2))
                   goto end;

            else if(usrx==enmyx2 && (usry==enmyy2+4))
                   goto end;

  
  if(enmyy1==55)
    {
      enmyy1=21;
      enmyx1=(random(12)+12)*2;
    }
   else
    if(enmyy2==55)
      {
        enmyy2=21;
        enmyx2=(random(12)+12)*2;
      }
  }
end:
for(j=0;j<200;j++)
    {
      for(i=1;i<=3;i++)
        {
          user(usrx,usry,i);
          enemy(enmyx1,enmyy1,i);
          enemy(enmyx2,enmyy2,i);
        }
    }
stop2();  
//while(!digitalRead(4)); 
delay(2000);
}
