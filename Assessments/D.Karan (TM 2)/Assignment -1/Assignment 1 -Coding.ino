float a,b ;
int pir=9;
int relay=5;
void setup ()

{

  pinMode( pir, INPUT);

  pinMode( relay, OUTPUT);

  pinMode( A0, INPUT);

  Serial.begin(9600);

}

void loop ()

{

  a= digitalRead(pir);

  b= analogRead(A0);

  Serial.println(a);

  Serial.println(b);

  if ( (a>0) && (b<550))

  {

    digitalWrite(relay, HIGH);

    delay (5000);

  }

  else

    digitalWrite(5, 0);

 

}

