

int led = D6; 
int led2 = D5;

void myHandler(const char *event, const char *data) {

  
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);


}

void myPatter(const char *event, const char *data)
{
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
}
void setup() {


  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myPatter);
  
  Serial.begin(9600);

}


void loop() {



}
