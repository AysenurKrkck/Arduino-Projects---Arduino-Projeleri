void setup()
{
  
  for(int i=2; i<9; i++){ // pins from 2 to 9 are set as outputs, allowing control of the LEDs connected to these pins. -- 2 ile 9 arasındaki tüm pinler çıkış olarak ayarlanır. Yani bu pinlere bağlanmış LED'lerin kontrol edilebilmesi sağlanır.
  
   pinMode(i, OUTPUT); 
  
  }  
}

void loop()
{
  for(int i=2; i<9; i++)// selects each pin, from pin 2 to pin 8, one at a time. -- pin 2’den pin 8’e kadar her bir pini sırayla seçer.
  {
    digitalWrite(i,1);// sets the selected pin (i) to HIGH, which turns it on. If an LED is connected, it will light up. -- seçilen pini (i) HIGH yaparak açar. Eğer pine bir LED bağlıysa, LED yanar.
    delay(70);// pauses for 70 milliseconds, keeping the LED on for this duration. --  LED’in 70 milisaniye boyunca yanmasını sağlar.
    digitalWrite(i,0);// After 70 milliseconds sets the selected pin (i) to LOW, turning it off. This makes the LED turn off.-- 70 milisaniyelik beklemeden sonra,seçilen pini (i) LOW yaparak kapatır. Böylece LED söner.
  
  }
  
  for(int i=9; i>=2; i--)// selects each pin, from pin 2 to pin 8, one at a time. -- pin 2’den pin 8’e kadar her bir pini sırayla seçer.
  {
    digitalWrite(i,1);// sets the selected pin (i) to HIGH, which turns it on. If an LED is connected, it will light up. -- seçilen pini (i) HIGH yaparak açar. Eğer pine bir LED bağlıysa, LED yanar.
    delay(70);// pauses for 70 milliseconds, keeping the LED on for this duration. --  LED’in 70 milisaniye boyunca yanmasını sağlar.
    digitalWrite(i,0);// After 70 milliseconds sets the selected pin (i) to LOW, turning it off. This makes the LED turn off.-- 70 milisaniyelik beklemeden sonra,seçilen pini (i) LOW yaparak kapatır. Böylece LED söner.

  }

}
