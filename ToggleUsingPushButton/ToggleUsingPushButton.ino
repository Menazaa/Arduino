
//part 1
const int led = 13;
const int button = 4;
int state = 0;

// part2
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);

}


// part3
void loop() {
  // put your main code here, to run repeatedly:

    

   if( digitalRead(button)==HIGH){
    state = !state;
    delay(500);
    }

    digitalWrite(led,state);

}
