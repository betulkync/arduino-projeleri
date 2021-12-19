//buton 8
//led 10
//bk butonkontrol
int bk=0;
void setup() {
 pinMode(8,INPUT);
 pinMode(10,OUTPUT);
}

void loop() {
  bk = digitalRead(8);
  if(bk ==1 ){
  digitalWrite(10,HIGH);}
  else{
  digitalWrite(10,LOW);}
}
