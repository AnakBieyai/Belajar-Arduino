/*
Analog input Led Blink
*/
int sensor = A1;// variabel pin Ai1 sebagai sensor
int sensorread;// variabel pembacaan sensor
int ledhijau= 12;//variabel ledhijau sebagai pin 12 digital 
float delay_led;// variabel untuk nilai delay

void setup(){
  
Serial.begin(9600);//Mengatur Serial Monitor dengan baud rate 9600
pinMode(sensor,INPUT);//Mengatur pin sensor sebagai INPUT
pinMode(ledhijau,OUTPUT);//Mengatur  ledhijau sebagai OUTPUT
}

void loop(){
// bagian pembacaan input
sensorread=analogRead(sensor);
delay_led = sensorread *(5000.0/1023.0);// menghitung nilai pembacaan sensor dalam variabel delay_led

Serial.println(delay_led);//Menampilkan nilai delay_led di serial monitor

// bagian output yaitu led
digitalWrite(ledhijau,HIGH);// led nyala
delay(delay_led);// delay

digitalWrite(ledhijau,LOW);// led mati 
delay(delay_led);//delay
  

}