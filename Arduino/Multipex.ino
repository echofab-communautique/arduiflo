//sketch multiplexeur

const int EcritDigiCaptA = 2; 
const int EcritDigiCaptB = 3; 
const int EcritDigiCaptC = 4;

const int ANALOGREADCAPTS = 0;

const int PINMUX0 = 11; 
const int PINMUX1 = 12; 
const int PINMUX2 = 13;
void setup()
{
  //capteur
  pinMode(EcritDigiCaptA,OUTPUT);
  pinMode(EcritDigiCaptB,OUTPUT);
  pinMode(EcritDigiCaptC,OUTPUT);
  
  //multiplexeur/input select
  pinMode(PINMUX0,OUTPUT);
  pinMode(PINMUX1,OUTPUT);
  pinMode(PINMUX2,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  //0 lit première pin
  //1 2ieme 
  //2 3ieme
  //...
  Serial.print("A:");
  Serial.print(EcritEtLitCapteurMultiplex(EcritDigiCaptA));
  Serial.print("\nB:");
  Serial.print(EcritEtLitCapteurMultiplex(EcritDigiCaptB));
  Serial.print("\nC:");
  Serial.print(EcritEtLitCapteurMultiplex(EcritDigiCaptC));
  Serial.print("\n");
  delay(1000);
}

int EcritEtLitCapteurMultiplex(int pinCapteur)
{ 
    digitalWrite(2,HIGH);
    
    
    
    // select the bit  
    int r0 = bitRead(pinCapteur-2,0);   
    int r1 = bitRead(pinCapteur-2,1);     
    int r2 = bitRead(pinCapteur-2,2);    
    
    digitalWrite(PINMUX0, r0);
    digitalWrite(PINMUX1, r1);
    digitalWrite(PINMUX2, r2); 
    
    delay(100);
   
   
   int i = analogRead(ANALOGREADCAPTS);
   //Serial.println(analogRead(0));
   digitalWrite(2,LOW);
   
   return i;
}

