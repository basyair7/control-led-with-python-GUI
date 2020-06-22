from tkinter import *
from tkinter import font as tkfont
import serial

# create function led
def led_1_on():
    board.write(b'0') # write(b'1')

def led_1_off():
    board.write(b'1')

def led_2_on():
    board.write(b'2') # write(b'2')

def led_2_off():
    board.write(b'3')

# Create home App tkinter
home = Tk(); home.geometry('260x170')
home.title("control led v0.1")

# Create label for led 1
lbl_led_1 = Label(home, text="Led 1", font="Purisa")
lbl_led_1.grid(row=0, column=1, pady=(10,0))

# Create button for led 1
btn_led_1_on = Button(home, text="Led 1 ON", font="chilanka", command=led_1_on)
btn_led_1_on.grid(row=1, column=1, columnspan=2, pady=10, padx=10, ipadx=15)
btn_led_1_off = Button(home, text="Led 1 OFF", font="chilanka", command=led_1_off)
btn_led_1_off.grid(row=3, column=1, columnspan=2, ipadx=10)

# Create label for Led 2
lbl_led_2 = Label(home, text="Led 2", font="Purisa")
lbl_led_2.grid(row=0, column=3, pady=(10,0), padx=12)

# Create button for led 2
btn_led_2_on = Button(home, text="Led 2 ON", font="chilanka", command=led_2_on)
btn_led_2_on.grid(row=1, column=3, columnspan=2, ipadx=15)
btn_led_2_off = Button(home, text="Led 2 OFF", font="chilanka", command=led_2_off)
btn_led_2_off.grid(row=3, column=3, columnspan=2, ipadx=10)

# Create author app
author = Label(home, text="Creator : @basyair07", font="chilanka")
author.grid(row=6, column=1, columnspan=5, pady=12, padx=12)

# create connect to serial
board = serial.Serial('com3', 9600) # see in device manager or port in tool arduino

# home window mainloop
home.mainloop()
