void setup()
{
  pinMode(2, OUTPUT);// yellow led - sarı led
   pinMode(3, OUTPUT);// green led - yeşil led
   pinMode(4, OUTPUT);// red led - kırmızı led
   pinMode(5, OUTPUT);// blue led - mavi led
}

void loop()
{
  for(int i=2; i<6; i++)// leds high - ledleri yak 
  {
    digitalWrite(i,1);
  
  }
  delay(1000); // wait 1 second - 1 saniye bekle 
  
   for(int i=2; i<6; i++) // leds low - ledleri söndür 
  {
    digitalWrite(i,0);
  
  }
  delay(1000); // wait 1 second - 1 saniye bekle 
}
