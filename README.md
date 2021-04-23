# Serial_communication-_pyhton_with_arduino

### Step1: Download arduino code  

### Step2: Upload the arduino code to arduino board by using arduino IDE

Since you are going to use a built in led in arduino, you don't need an external led. Just arduino and USB cable to connect to the computer.  

You will see some text with COM Port number in the bottom right corner in Arduino IDE. This number will be used to initiate our Python serial connection.

### Step3: Install PySerial

Run cmd and type the foloowing line

`> pip install pyserial`

### Step4: Download a python file x.py to your computer 

Now, open the file with any editor and edit the COM port number inside python file with the number you have seen in Step2

`arduino = serial.Serial('COM9', 115200, timeout=.1)`

### Step5: Run python file in cmd

`> python x.py`

### Finally, you will see the builtIn LED on your board is blinking. 
