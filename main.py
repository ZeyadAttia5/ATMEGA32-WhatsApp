import selenium.webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from time import sleep
from pynput.keyboard import Key, Controller
import time
keyboard = Controller()


def puttycontrol(msg):
    keyboard.press(str(msg))
    keyboard.release(str(msg))
    time.sleep(0.5)


driver = selenium.webdriver.Chrome("C:\Program Files\chromedriver_win32\chromedriver.exe")
driver.get("https://web.whatsapp.com/")
sleep(60)

while True:
    classMsg = driver.find_elements(By.XPATH, "//span[@class='i0jNr selectable-text copyable-text'][1]")
    try:
        msg = int(classMsg[-1].text)
        putty.puttycontrol(msg)
    except ValueError:
        print("Invalid Input")
        print(classMsg[-1].text)



