#include<LiquidCrystal.h>

const int rs=12,en=11,d1=5,d2=6,d3=4,d4=3;
LiquidCrystal lcd(rs,en,d1,d2,d3,d4);
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(7,OUTPUT);
}
int ans;

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);  
int maxa=0,mini=0;
if(((digitalRead(9)==HIGH)and(digitalRead(10)==HIGH))or((digitalRead(9)==HIGH)and(digitalRead(8)==HIGH))or((digitalRead(9)==HIGH)and(digitalRead(7)==HIGH))or((digitalRead(10)==HIGH)and(digitalRead(8)==HIGH))or((digitalRead(10)==HIGH)and(digitalRead(7)==HIGH))or((digitalRead(8)==HIGH)and(digitalRead(7)==HIGH)))
{
  lcd.print("select 1");
}
else if(digitalRead(9)==HIGH)
{Serial.println("9");
   //int maxa,mini;
  maxa=analogRead(A0);
  mini=maxa;

  for(int i=0;i<100;i++)
  {
    int n=analogRead(A0);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print(ans);
  Serial.print(ans);
  lcd.setCursor(0,1);
  //int maxa,mini;
  maxa=analogRead(A1);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A1);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
  lcd.print(ans);
   Serial.print(ans);
}
else if(digitalRead(8)==HIGH)
{
  Serial.println("8");
   //int maxa,mini;
  maxa=analogRead(A2);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A2);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print(ans);
   Serial.print(ans);
  lcd.setCursor(0,1);
 // int maxa,mini;
  maxa=analogRead(A3);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A3);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
  lcd.print(ans);
   Serial.print(ans);}
else if(digitalRead(7)==HIGH)
{
  Serial.println("7");
   //int maxa,mini;
  maxa=analogRead(A4);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A4);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print(ans);
   Serial.print(ans);
  lcd.setCursor(0,1);
  //int maxa,mini;
  maxa=analogRead(A5);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A5);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
  lcd.print(ans);
   Serial.print(ans);
}
else if(digitalRead(10)==HIGH)
{Serial.println("10");
  // int maxa,mini;
  maxa=analogRead(A6);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A6);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print(ans);
  lcd.setCursor(0,1);
  //int maxa,mini;
  maxa=analogRead(A7);
  mini=maxa;
  for(int i=0;i<100;i++)
  {
    int n=analogRead(A7);
    if(n>=maxa)
    {
      maxa=n;
    }
    if(n<=mini)
    {
      mini=n;
    }
  }
   ans=(maxa+mini)*(8.5/2046);
  lcd.print(ans);
   Serial.print(ans);
   }
else if((digitalRead(10)==LOW)and(digitalRead(9)==LOW)and(digitalRead(7)==LOW)and(digitalRead(8)==LOW))
{ 
  lcd.print("select a mode");
  //lcd.clear();
}
else
{
  lcd.print("select 1 mode");
}
}

