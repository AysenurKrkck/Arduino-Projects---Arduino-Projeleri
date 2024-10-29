void setup()
{
  pinMode(2, OUTPUT); // red_1 pin -- kırmızı_1 pin
   pinMode(3, OUTPUT);// blue_1 pin -- mavi_1 pin
   pinMode(4, OUTPUT);// red_2 pin -- kırmızı_2 pin
   pinMode(5, OUTPUT);// blue_2 pin -- mavi_2 pin
}

void loop()
{
  for(int i=2; i<6; i++)// selects each pin, from pin 2 to pin 5, one at a time. -- pin 2’den pin 5’e kadar her bir pini sırayla seçer.
  {
    digitalWrite(i,1);// sets the selected pin (i) to HIGH, which turns it on. If an LED is connected, it will light up. -- seçilen pini (i) HIGH yaparak açar. Eğer pine bir LED bağlıysa, LED yanar.
    delay(100);// pauses for 100 milliseconds, keeping the LED on for this duration. --  LED’in 100 milisaniye boyunca yanmasını sağlar.
    digitalWrite(i,0);// After 100 milliseconds sets the selected pin (i) to LOW, turning it off. This makes the LED turn off.-- 100 milisaniyelik beklemeden sonra,seçilen pini (i) LOW yaparak kapatır. Böylece LED söner.
  
  }

 /* Bu yapı, LED'ler bağlıysa onları soldan sağa doğru sırayla yanıp söndüren bir efekt verir. Her LED 100 ms yanıp sönüyor ve bir sonrakine geçiyor.
 Bu efekti daha hızlı veya yavaş yapmak isterseniz, delay(100); değerini değiştirebilirsiniz. Örneğin, delay(200); yaparak efekti biraz yavaşlatabilirsiniz*/
 /*"This structure provides an effect where LEDs, if connected, light up sequentially from left to right. Each LED flashes for 100 ms and then moves on to the next one. 
   If you want to make this effect faster or slower, you can change the value of delay(100);. For example, by setting it to delay(200);, you can slow down the effect a bit."*/
}
