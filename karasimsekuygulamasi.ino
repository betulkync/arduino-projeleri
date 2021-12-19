int ledler[]={2,3,4,5,6,7};
void setup() {
 for(int i=0;i<6;i++)
 pinMode(ledler[i],OUTPUT);
}

void loop() {
 for(int i=0;i<6;i++){
 digitalWrite(ledler[i],HIGH);
 delay(80);
 digitalWrite(ledler[i],LOW);}
 for(int k=5 ;k<-1;k--){
 digitalWrite(ledler[k],HIGH);
 delay(80);
 digitalWrite(ledler[k],LOW);}
}
