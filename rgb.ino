int kd=0;
int yd=0;
int md=0;
int pd=0;


void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}
void loop() {
  pd=analogRead(A0);
  if (pd<341){
    pd=(pd*3)/4;
    kd=255-pd;
    yd=pd;
    md=0; }
 else if(pd<682)
 {
  pd=(pd-341)*3/4;
  kd=0;
  yd=255-pd;
  md=pd;
  
  
  }
  else {
    pd=(pd-683)*3/4;
    kd=pd;
    yd=0;
    md=255-pd;
    }
    analogWrite(9,255-kd);
    analogWrite(10,255-yd);
    analogWrite(11,255-md);
  
    }
