import serial
ser = serial.Serial('/dev/ttyACM0', 9600)
while 1: 
    if(ser.in_waiting >0):
        line = ser.readline()
        line = line.decode("utf-8").strip('\r\n').strip()
        print(line)