const int BAUD_RATE = 9600;

const int PIN_ECRITURE_CAPT_A = 3;
const int PIN_LECTURE_CAPT_A = 3;
const int PIN_ECRITURE_CAPT_B = 4;
const int PIN_LECTURE_CAPT_B = 4;
const int PIN_ECRITURE_CAPT_C = 5;
const int PIN_LECTURE_CAPT_C = 5;

const int PIN_ECRITURE_RELAY = 8;


const long ATTENTE_APRES_ARROSAGE_MS = 60000;//(1000 * 60 * 10); 
const int ATTENTE_ENTRE_LECTURE_MS = 1000;
const int ATTENTE_ENTRE_CAPT = 2000;
const int DURE_ARROSAGE_MS = 4000;
const int MIN_HUM = 700;


void setup()
{
  Serial.begin(BAUD_RATE);

  pinMode(PIN_ECRITURE_CAPT_A,OUTPUT);
  digitalWrite(PIN_ECRITURE_CAPT_A,LOW);

  pinMode(PIN_ECRITURE_CAPT_B,OUTPUT);
  digitalWrite(PIN_ECRITURE_CAPT_B,LOW);

  pinMode(PIN_ECRITURE_RELAY,OUTPUT);
  digitalWrite(PIN_ECRITURE_RELAY,LOW);

  //Serial.println(ATTENTE_APRES_ARROSAGE_MS);
}

void loop()
{ 
  int humidite = 0;

  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_A,PIN_LECTURE_CAPT_A);
  Serial.print("A:");
  Serial.print(humidite);
  Serial.print(" ");

  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_B,PIN_LECTURE_CAPT_B);
  Serial.print("B:");
  Serial.print(humidite);
  Serial.print(" ");
  
  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_C,PIN_LECTURE_CAPT_C);
  Serial.print("C:");
  Serial.print(humidite);
  Serial.print(" ");
  
  Serial.println();

  delay(ATTENTE_ENTRE_LECTURE_MS); 

}

int litValeurCapteur(const int PIN_ECRITURE,const int PIN_LECTURE)
{
  const int ATTENTE_LECTURE_MS = 200;

  digitalWrite(PIN_ECRITURE,HIGH);
  delay(ATTENTE_LECTURE_MS);
  int humidite = analogRead(PIN_LECTURE);
  digitalWrite(PIN_ECRITURE,LOW);  
  return humidite;
}

void ControleHumidite()
{
  /* if( humidite < MIN_HUM)
   {
   digitalWrite(PIN_ECRITURE_RELAY,HIGH);
   delay(DURE_ARROSAGE_MS);
   digitalWrite(PIN_ECRITURE_RELAY,LOW);
   
   delay(ATTENTE_APRES_ARROSAGE_MS);
   }
   
   delay(ATTENTE_ENTRE_CAPT);
   */
}


