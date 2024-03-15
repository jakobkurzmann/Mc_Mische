
const int X_PIN = 1;
const int Y_PIN = 0;

#define Gin_PIN 2
#define Zucker_PIN 3
#define Ale_PIN 4
#define Rum_PIN 5
#define Zitrone_PIN 6
#define Tonic_PIN 7

#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

int cocktails = 1;
int alknalk = 1;
int alkoholfrei = 1;
int cockshots = 1;
int shots = 1;
int ystate;
int xstate;
int menu = 1;
int hilfe = 1;
int hilfe2 = 1;


//Cocktails
void ginTonic()
{
  lcd.clear();
  lcd.print("Dein Gin Tonic");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Gin_PIN, LOW);
  digitalWrite(Tonic_PIN,LOW);
  delay(16200);
  digitalWrite(Gin_PIN,HIGH);
  delay(94770);
  digitalWrite(Tonic_PIN,HIGH);
  updateCocktails();
}
void ginBuck()
{
  lcd.clear();
  lcd.print("Dein Gin Buck");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Gin_PIN, LOW);
  digitalWrite(Zitrone_PIN,LOW);
  digitalWrite(Ale_PIN,LOW);
  delay(9990);
  digitalWrite(Gin_PIN,HIGH);
  digitalWrite(Zitrone_PIN,HIGH);
  delay(75100);
  digitalWrite(Ale_PIN,HIGH);
  updateCocktails();
}
void ginFizz()
{
  lcd.clear();
  lcd.print("Dein Gin Fizz");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Gin_PIN, LOW);
  digitalWrite(Zitrone_PIN,LOW);
  digitalWrite(Zucker_PIN,LOW);
  delay(6000);
  digitalWrite(Zucker_PIN,HIGH);
  delay(3900);
  digitalWrite(Zitrone_PIN,HIGH);
  delay(12600);
  digitalWrite(Gin_PIN,HIGH);
   lcd.clear();
  lcd.print("Mit Wasser");
  lcd.setCursor(0,1);
  lcd.print("auffuellen");
  delay(4000);
  updateCocktails();
}
void mojito()
{
 lcd.clear();
 lcd.print("Dein Mojito");
 lcd.setCursor(0,1);
 lcd.print("wird zubereitet");
 digitalWrite(Rum_PIN, LOW);
 digitalWrite(Zucker_PIN, LOW);
 digitalWrite(Zitrone_PIN, LOW);

  delay(9000);
  digitalWrite(Zitrone_PIN, HIGH);
  delay(1000);
  digitalWrite(Zucker_PIN, HIGH);
  delay(11500);
  
  digitalWrite(Rum_PIN, HIGH);
  
  lcd.clear();
  lcd.print("Mit Wasser");
  lcd.setCursor(0,1);
  lcd.print("auffuellen");
  delay(4000);
  updateCocktails();
}
void darkandstormy()
{
  lcd.clear();
  lcd.print("Dein Dark&Stormy");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
 digitalWrite(Rum_PIN, LOW);
 digitalWrite(Ale_PIN, LOW);
 digitalWrite(Zitrone_PIN, LOW);

 delay(11700);
 digitalWrite(Zitrone_PIN, HIGH);

 delay(15300);
 digitalWrite(Rum_PIN, HIGH);
 delay(39000);
 digitalWrite(Ale_PIN, HIGH);
  
  updateCocktails();
}
void gingerMule()
{ 
  lcd.clear();
  lcd.print("Dein Ginger Mule");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Gin_PIN, LOW);
  digitalWrite(Ale_PIN, LOW);
  digitalWrite(Zitrone_PIN, LOW);
  digitalWrite(Zucker_PIN,LOW);

  delay(20400);

  
  digitalWrite(Zitrone_PIN, HIGH);
  delay(4200);
  digitalWrite(Zucker_PIN,HIGH);
  digitalWrite(Ale_PIN, HIGH);
  delay(13000);
  digitalWrite(Gin_PIN, HIGH);
  updateCocktails();
}
void daiquiry()
{
  lcd.clear();
  lcd.print("Dein Daiquiry");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Rum_PIN, LOW);
 digitalWrite(Zucker_PIN, LOW);
 digitalWrite(Zitrone_PIN, LOW);

  delay(16000);

  
  digitalWrite(Zucker_PIN, HIGH);
  delay(14000);
  digitalWrite(Zitrone_PIN, HIGH);
  delay(24000);
  digitalWrite(Rum_PIN, HIGH);
  updateCocktails();
}

//Shots
void shotGin()
{
  lcd.clear();
  lcd.print("Dein Shot Gin");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Rum_PIN,LOW);
  delay(12000);
  digitalWrite(Rum_PIN,HIGH);
  updateShots();
}
void shotRum()
{
  lcd.clear();
  lcd.print("Dein Shot Rum");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Gin_PIN,LOW);
  delay(12000);
  digitalWrite(Gin_PIN,HIGH);
  updateShots();
}

//Alkoholfreie Getränke
void tonic()
{
  lcd.clear();
  lcd.print("Dein Tonic Water");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Tonic_PIN,LOW);
  delay(80000);
  digitalWrite(Tonic_PIN,HIGH);
  updateAlkoholfrei();
}
void gingerAle()
{
  lcd.clear();
  lcd.print("Dein Ginger Ale");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Ale_PIN,LOW);
  delay(80000);
  digitalWrite(Ale_PIN,HIGH);
  updateAlkoholfrei();
}
void zitronenWater()
{
  lcd.clear();
  lcd.print("Dein CitrusWater");
  lcd.setCursor(0,1);
  lcd.print("wird zubereitet");
  digitalWrite(Zitrone_PIN,LOW);
  delay(12000);
  digitalWrite(Zitrone_PIN,HIGH);
  lcd.clear();
  lcd.print("Mit Wasser");
  lcd.setCursor(0,1);
  lcd.print("auffuellen");
  delay(4000);
  updateAlkoholfrei();
  
}

void updateCocktails()
{
  switch(cocktails)
  {
    case 0:
    cocktails = 1;
    break;
    case 1:
    lcd.clear();
    lcd.print(">Gin Tonic");
    lcd.setCursor(0,1);
    lcd.print(" Gin Buck");
    break;
    case 2:
    lcd.clear();
    lcd.print(" Gin Tonic");
    lcd.setCursor(0,1);
    lcd.print(">Gin Buck");
    break;
    case 3:
    lcd.clear();
    lcd.print(">Gin Fizz");
    lcd.setCursor(0,1);
    lcd.print(" Mojito");
    break;
    case 4:
    lcd.clear();
    lcd.print(" Gin Fizz");
    lcd.setCursor(0,1);
    lcd.print(">Mojito");
    break;
    case 5:
    lcd.clear();
    lcd.print(">Dark&Stormy");
    lcd.setCursor(0,1);
    lcd.print(" Ginger Mule");
    break;
    case 6:
    lcd.clear();
    lcd.print(" Dark&Stormy");
    lcd.setCursor(0,1);
    lcd.print(">Ginger Mule");
    break;
    case 7:
    lcd.clear();
    lcd.print(">Daiquiry");
    case 8:
    cocktails=7;
    }
  
}
void updateAlk_nAlk()
{
  switch(alknalk)
  {
    case 0:
    alknalk = 1;
    break;
    case 1:
    lcd.clear();
    lcd.print(">Alkoholisch");
    lcd.setCursor(0,1);
    lcd.print(" Alkoholfrei");
    break;
    case 2:
    lcd.clear();
    lcd.print(" Alkoholisch");
    lcd.setCursor(0,1);
    lcd.print(">Alkoholfrei");
    break;
    case 3:
    lcd.clear();
    lcd.print(">Pumpen ziehen");
    break;
    case 4:
    alknalk = 3;
    
  }
}

void updateAlkoholfrei()
{
  switch(alkoholfrei)
  {
    case 0:
    alkoholfrei = 1;
    break;
    case 1:
    lcd.clear();
    lcd.print(">Ginger Ale");
    lcd.setCursor(0,1);
    lcd.print(" Tonic");
    break;
    case 2:
    lcd.clear();
    lcd.print(" Ginger Ale");
    lcd.setCursor(0,1);
    lcd.print(">Tonic");
    break;
    case 3:
    lcd.clear();
    lcd.print(">Citruswater");
    break;
    case 4:
    alkoholfrei = 3;
    
    
  }
}

void updateCocktail_Shots()
{
  switch(cockshots)
  {
    case 0:
    cockshots = 1;
    break;
    case 1:
    lcd.clear();
    lcd.print(">Cocktails");
    lcd.setCursor(0,1);
    lcd.print(" Shots");
    break;
    case 2:
    lcd.clear();
    lcd.print(" Cocktails");
    lcd.setCursor(0,1);
    lcd.print(">Shots");
    break;
    case 3:
    cockshots = 2;
    
  }
}

void updateShots()
{
  switch(shots)
  {
    case 0:
    shots = 1;
    break;
    case 1:
    lcd.clear();
    lcd.print(">Gin");
    lcd.setCursor(0,1);
    lcd.print(" Rum");
    break;
    case 2:
    lcd.clear();
    lcd.print(" Gin");
    lcd.setCursor(0,1);
    lcd.print(">Rum");
    break;
    case 3:
    shots = 2;
    
  }
}

void setup() 
{
  // put your setup code here, to run once:



pinMode(X_PIN, INPUT);
pinMode(Y_PIN, INPUT);
Serial.begin(9600);

pinMode(Gin_PIN, OUTPUT);
pinMode(Zucker_PIN, OUTPUT);
pinMode(Ale_PIN, OUTPUT);
pinMode(Rum_PIN, OUTPUT);
pinMode(Zitrone_PIN, OUTPUT);
pinMode(Tonic_PIN, OUTPUT);


digitalWrite(Gin_PIN,HIGH);
digitalWrite(Zucker_PIN,HIGH);
digitalWrite(Ale_PIN,HIGH);
digitalWrite(Rum_PIN,HIGH);
digitalWrite(Zitrone_PIN,HIGH);
digitalWrite(Tonic_PIN,HIGH);

lcd.begin(24, 2);
updateAlk_nAlk();
}

void loop() 
{

delay(100);
ystate = analogRead(Y_PIN);
xstate = analogRead(X_PIN);
delay(100);


//Alkohol/Alkoholfreies Menü navigieren
if(ystate<200&&hilfe==1)
{
alknalk--;
updateAlk_nAlk();
}
if(ystate>1000&&hilfe==1)
{
alknalk++;
updateAlk_nAlk();
} 

 
//Übergang Cocktail/Shot
if(xstate>1000&&alknalk==1&&hilfe==1)
{
updateCocktail_Shots();
hilfe++;
} 
//Übergang Alkoholfrei
if(xstate>1000&&alknalk==2&&hilfe==1)
{
updateAlkoholfrei();
hilfe--;

} 
//pumpen
if(xstate<200&&alknalk==3&&hilfe==1)
{

digitalWrite(Zucker_PIN,LOW);
digitalWrite(Ale_PIN,LOW);
digitalWrite(Zitrone_PIN,LOW);
} 
if(xstate>1000&&alknalk==3&&hilfe==1)
{

digitalWrite(Gin_PIN,LOW);
digitalWrite(Rum_PIN,LOW);
digitalWrite(Tonic_PIN,LOW);
} 
if(xstate<800&&xstate>200&&alknalk==3&&hilfe==1)
{
digitalWrite(Gin_PIN,HIGH);
digitalWrite(Zucker_PIN,HIGH);
digitalWrite(Ale_PIN,HIGH);
digitalWrite(Rum_PIN,HIGH);
digitalWrite(Zitrone_PIN,HIGH);
digitalWrite(Tonic_PIN,HIGH);
} 


//Navigation Cocktail/Shots
if(xstate<800&&hilfe==2)
{
  hilfe2=2;
}
if(ystate<200&&hilfe==2)
{
cockshots--;  
updateCocktail_Shots();
}     
if(ystate>1000&&hilfe==2)
{
cockshots++;  
updateCocktail_Shots();
}

//Rücknavigation zu Alkoholfrei/nicht Alkoholfrei von Cocktail/Shots
if(xstate<200&&hilfe==2)
{
  updateAlk_nAlk();
  hilfe--;
  hilfe2=1;
}
//Rücknavigation zu Alkoholfre/nicht Alkoholfrei von Cocktail/Shots
if(xstate<200&&hilfe==0)
{
  updateAlk_nAlk();
  hilfe++;
  hilfe2=1;
}

//Navigation zu Cocktails 

if(xstate>1000&&cockshots==1&&hilfe==2&&hilfe2==2)
{
updateCocktails();
hilfe++;

} 
//Navigation zu Shots
if(xstate>1000&&cockshots==2&&hilfe==2&&hilfe2==2)
{
updateShots();
hilfe=4;
hilfe2=4;
} 

//Rücknavigation zu CocktailsShots von Cocktails
if(xstate<200&&hilfe==3)
{
  updateCocktail_Shots();
  hilfe=2;
  hilfe2=2;
}
//Rücknavigation zu CocktailShots von Shots
if(xstate<200&&hilfe==4)
{
  updateCocktail_Shots();
  hilfe=2;
  hilfe2=2;
}


//Navigation Cocktails

if(xstate<800&&hilfe==3)
{
  hilfe2=3;
}
if(ystate<200&&hilfe==3)
{
cocktails--;  
updateCocktails();
}     
if(ystate>1000&&hilfe==3)
{
cocktails++;  
updateCocktails();
}

//Navigation Shots

if(xstate<800&&hilfe==4)
{
  hilfe2=3;
}
if(ystate<200&&hilfe==4)
{
shots--;  
updateShots();
}     
if(ystate>1000&&hilfe==4)
{
shots++;  
updateShots();
}

// Alkoholfreies Menü Navigation
if(xstate<800&&hilfe==0)
{
  hilfe2=5;
}
if(ystate > 1000&&hilfe==0)
{
  alkoholfrei++;
  updateAlkoholfrei();
}  
if(ystate < 200&&hilfe==0)
{
  alkoholfrei--;
  updateAlkoholfrei();
}

//Gin Tonic
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==1)
{
  ginTonic();
}
//Gin Buck
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==2)
{
  ginBuck();
}
//Gin Fizz
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==3)
{
  ginFizz();
}
//Mojito
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==4)
{
  mojito();
}
//Dark&Stormy
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==5)
{
  darkandstormy();
}
//Ginger Mule
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==6)
{
  gingerMule();
}
//Daiquiry
if(xstate>1000&&hilfe==3&&hilfe2==3&&cocktails==7)
{
  daiquiry();
}



//Shots
//Gin Shot

if(xstate>1000&&hilfe==4&&hilfe2==3&&shots==1)
{
  shotGin();
}
if(xstate>1000&&hilfe==4&&hilfe2==3&&shots==2)
{
  shotRum();
}


if(xstate>1000&&hilfe==0&&hilfe2==5&&alkoholfrei==1)
{
  gingerAle();
}
if(xstate>1000&&hilfe==0&&hilfe2==5&&alkoholfrei==2)
{
  tonic();
}
if(xstate>1000&&hilfe==0&&hilfe2==5&&alkoholfrei==3)
{
  zitronenWater();
}

}
