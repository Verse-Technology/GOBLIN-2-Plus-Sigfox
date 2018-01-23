/*     BRIDGE_GOBLIN2PLUS SIGFOX.      
       
  WITH THIS PROGRAM YOU CAN HAVE COMMUNICATION BETWEEN MODULE WISOL RCZ2 (SFM10R2) AND YOUR SAMD21.
  
  Check more documentation and examples in https://verse-technology.com
 
  modified 2 December 2017.
  by Rafa Cortés.
  -GOBLIN 2 Plus TEAM. VERSE Technology.
  
*/

void setup() {
  SerialUSB.begin(9600);    
  Serial.begin(9600);
  while (!SerialUSB);
}

void loop() {
  
  if (Serial.available()) {   
      String toSend = ""; 
      while (Serial.available())  {   
      toSend += (char)Serial.read();
                                      }
      SerialUSB.print(toSend);
                                    } 

  if (SerialUSB.available()) {   
      String toSend = ""; 
      while (SerialUSB.available())  {   
      toSend += (char)SerialUSB.read(); 
      }
  
     Serial.print(toSend);
  }

  }


