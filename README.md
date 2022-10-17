# ATMEGA32-WhatsApp
Control the ATMEGA32 via WhatsApp

As the title suggests, in this project I aimed to control the ATMEGA32 via WhatsApp.
This is possible by webscraping WhatsApp messages using python and then sending the data to the microcontroller via USART communication protocol.

Libraries used:
  -Selenium
  -pynput
  
Software used:
  -putty
  -IDEs: (pycharm, eclipse)
  
  
  
The script gives the user 60 sec to login to WhatsApp web, open the contact, whose messages will be scraped, and open putty.
Then, it starts scraping the messages and sending them to the ATMEGA32.
The ATMEGA32 handels the data however it was programmed. In the demo, the microcontroller is programmed as follows:

1 --> turn on LED 1
2 --> turn on LED 2
3 --> turn on LED 5
Anything else --> turn off all LEDs
