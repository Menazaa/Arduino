#include <SoftwareSerial.h>
#define fromBT 2
#define toBT 3

SoftwareSerial BTSerial (fromBT,toBT);


void setup() {
  Serial.begin(9600);
  Serial.println("Enter AT Commands");
  BTSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(BTSerial.available()){
    
    Serial.write(BTSerial.read());
    
  }

}
