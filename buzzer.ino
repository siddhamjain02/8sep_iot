int i = 1;
int j = 1;
void setup() {
  pinMode(10, OUTPUT);
  pinMode(5, INPUT);
  pinMode(11, OUTPUT);
  pinMode(6, INPUT);
}

void loop(){ 
  if (digitalRead(5)==1){
    digitalWrite(10,i);   
    i = 1-i;
    while(digitalRead(5)==1){}
  }
  if (digitalRead(6)==1){
    digitalWrite(11,i);   
    i = 1-i;
    while(digitalRead(6)==1){}
  }
}
