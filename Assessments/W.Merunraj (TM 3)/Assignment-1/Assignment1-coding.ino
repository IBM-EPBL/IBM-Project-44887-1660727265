float a,b ;

void setup ()

{

  pinMode( 9, INPUT);

  pinMode( 5, OUTPUT);

  pinMode( A0, INPUT);

  Serial.begin(9600);

}

void loop ()

{

  a= digitalRead(9);

  b= analogRead(A0);

  Serial.println(a);

  Serial.println(b);

  if ( (a>0) && (b<550))

  {

    digitalWrite(5, HIGH);

    delay (5000);

  }

  else

    digitalWrite(5, 0);

 

}

