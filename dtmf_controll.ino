#define d0 5
#define d1 4
#define d2 3
#define d3 2

void setup() {

  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  pinMode(d3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
 
  if (d0 == 0 and d1 == 1 and d2 == 0 and d3 == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  if (d0 == 0 and d1 == 0 and d2 == 1 and d3 == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
  if (d0 == 0 and d1 == 0 and d2 == 0 and d3 == 1) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
  }
  if (d0 == 0 and d1 == 1 and d2 == 0 and d3 == 0) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  if(d0==0 and d1==1 and d2==1 and d3==0){
    
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
  }
  if(d0==1 and d1==0 and d2==1 and d3==0){
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    
  }


}
