import time  
import serial

arduino = serial.Serial('COM9', 115200, timeout=.1)

def blink():
  while True:
    arduino.write(b'H')
    time.sleep(1)
    arduino.write(b'L')
    time.sleep(1)

blink()