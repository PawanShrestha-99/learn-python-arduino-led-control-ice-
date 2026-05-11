#python + electronic project 1

import serial
import time


arduino = serial.Serial('COM3', 9600)
time.sleep(2) 

print("Python + Electronics - Day 1")
print("Type 1 for ON, 0 for OFF, q to quit")

while True:
    cmd = input("Enter command: ")
    
    if cmd == 'q':
        print("Goodbye!")
        break
    elif cmd == '1':
        arduino.write(b'1')  # b means bytes
        print("💡 LED ON")
    elif cmd == '0':
        arduino.write(b'0')
        print("🌑 LED OFF")
    else:
        print("Try: 1, 0, or q")

arduino.close()
