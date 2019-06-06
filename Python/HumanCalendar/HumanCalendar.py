#! /usr/bin/env python3


import tkinter, datetime, calendar
class boxiboi:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.geometry("300x100")
    
        self.gLabel = tkinter.Label(self.main_window, text = 'Gregorian(DD/MM/YYYY):')
        self.gLabel.grid(row = 0, column = 0, sticky = "W")
    
        self.hLabel = tkinter.Label(self.main_window, text = "Human Calendar:")
        self.hLabel.grid(row = 0, column = 1, sticky = "W")
    
        self.gTextBox = tkinter.Entry(self.main_window, bd = 5)
        self.gTextBox.grid(row = 1, column = 0, sticky = "W")
    
        self.hTextBox = tkinter.Entry(self.main_window, bd = 5, state = 'normal')
        self.hTextBox.grid(row = 1, column = 1, sticky = "W")
    
        self.g2hButton = tkinter.Button(self.main_window, text = ">>>>", command = self.main)
        self.g2hButton.grid(row = 2, column = 1, sticky = "W")
    
        self.currentDT = datetime.datetime.now().date().strftime("%d/%m/%Y")

        self.systemt()
    
        self.cLabel = tkinter.Label(self.main_window, text = self.currentDT)
        self.cLabel.grid(row = 3, column = 0, sticky = "W")
    
        self.main_window.title("Calendar Conversion")
        tkinter.mainloop()

    def systemt(self):
        date = self.currentDT.split('/')
        if(calendar.isleap(int(date[2]))==True):
            date[0]=int(date[0])
            date[1]=int(date[1])
            if(date[1]==1): 
                if (date[0] <29):
                    month = 'January'
                    day = date[0]

                else:
                    month = 'February'
                    day = date[0] - int(28)

            elif(date[1]==2):
                if(date[0]<26):
                    month = 'February'
                    day = date[0]+3

                else:
                    month = 'March'
                    day = date[0]-26

            elif(date[1]==3):
                if(date[0]<26):
                    month = 'March'
                    day = date[0]+4

                else:
                    month = 'April'
                    day = date[0]-26

            elif(date[1]==4):
                if(date[0]<23):
                    month='April'
                    day = date[0]+7

                else:
                    month = 'May'
                    day = date[0]-23

            elif(date[1]==5):
                if(date[0]<21):
                    month = 'May'
                    day = date[0]+9

                else:
                    month = 'June'
                    day = date[0]-21

            elif(date[1]==6):
                if(date[0]<18):
                    month = 'June'
                    day = date[0]+12

                else:
                    month = 'Sol'
                    day = date[0]-17

            elif(date[1]==7):
                if(date[0]<16):
                    month='Sol'
                    day=date[0]+13

                else:
                    month='July'
                    day=date[0]-15

            elif(date[1]==8):
                if(date[0]<13):
                    month='July'
                    day=date[0]+16

                else:
                    month='August'
                    day=date[0]-12

            elif(date[1]==9):
                if(date[0]<10):
                    month='August'
                    day=date[0]+19

                else:
                    month='September'
                    day=date[0]-9

            elif(date[1]==10):
                if(date[0]<8):
                    month='September'
                    day=date[0]+21

                else:
                    month='October'
                    day=date[0]-7

            elif(date[1]==11):
                if(date[0]<5):
                    month='October'
                    day=date[0]+24

                else:
                    month='November'
                    day=date[0]-4

            else:
                if(date[0]<3):
                    month='November'
                    day=date[0]+26

                else:
                    month='December'
                    day=date[0]-2
            monthString = str(month) + " " + str(day) + "," + date[2]
            self.chLabel = tkinter.Label(self.main_window, text = monthString)
            self.chLabel.grid(row = 3, column = 1, sticky = "W")
        else:
            date[0]=int(date[0])
            date[1]=int(date[1])
            if(date[1]==1): 
                if (date[0] <29):
                    month = 'January'
                    day = date[0]

                else:
                    month = 'February'
                    day = date[0] - int(28)

            elif(date[1]==2):
                if(date[0]<26):
                    month = 'February'
                    day = date[0]+3

                else:
                    month = 'March'
                    day = date[0]-25

            elif(date[1]==3):
                if(date[0]<26):
                    month = 'March'
                    day = date[0]+3

                else:
                    month = 'April'
                    day = date[0]-25

            elif(date[1]==4):
                if(date[0]<23):
                    month='April'
                    day = date[0]+6

                else:
                    month = 'May'
                    day = date[0]-22

            elif(date[1]==5):
                if(date[0]<21):
                    month = 'May'
                    day = date[0]+8

                else:
                    month = 'June'
                    day = date[0]-20

            elif(date[1]==6):
                if(date[0]<18):
                    month = 'June'
                    day = date[0]+11

                else:
                    month = 'Sol'
                    day = date[0]-17

            elif(date[1]==7):
                if(date[0]<16):
                    month='Sol'
                    day=date[0]+13

                else:
                    month='July'
                    day=date[0]-15

            elif(date[1]==8):
                if(date[0]<13):
                    month='July'
                    day=date[0]+16

                else:
                    month='August'
                    day=date[0]-12

            elif(date[1]==9):
                if(date[0]<10):
                    month='August'
                    day=date[0]+19

                else:
                    month='September'
                    day=date[0]-9

            elif(date[1]==10):
                if(date[0]<8):
                    month='September'
                    day=date[0]+21

                else:
                    month='October'
                    day=date[0]-7

            elif(date[1]==11):
                if(date[0]<5):
                    month='October'
                    day=date[0]+24

                else:
                    month='November'
                    day=date[0]-4

            else:
                if(date[0]<3):
                    month='November'
                    day=date[0]+26

                else:
                    month='December'
                    day=date[0]-2
            monthString = str(month) + " " + str(day) + "," + date[2]
            self.chLabel = tkinter.Label(self.main_window, text = monthString)
            self.chLabel.grid(row = 3, column = 1, sticky = "W")

    def leapyear(self,date):
        date[0]=int(date[0])
        date[1]=int(date[1])
        if(date[1]==1): 
            if (date[0] <29):
                month = 'January'
                day = date[0]
                
            else:
                month = 'February'
                day = date[0] - int(28)
                
        elif(date[1]==2):
            if(date[0]<26):
                month = 'February'
                day = date[0]+3
                
            else:
                month = 'March'
                day = date[0]-26
                
        elif(date[1]==3):
            if(date[0]<26):
                month = 'March'
                day = date[0]+4
                
            else:
                month = 'April'
                day = date[0]-26
                
        elif(date[1]==4):
            if(date[0]<23):
                month='April'
                day = date[0]+7
                
            else:
                month = 'May'
                day = date[0]-23
                
        elif(date[1]==5):
            if(date[0]<21):
                month = 'May'
                day = date[0]+9
                
            else:
                month = 'June'
                day = date[0]-21
                
        elif(date[1]==6):
            if(date[0]<18):
                month = 'June'
                day = date[0]+12
                
            else:
                month = 'Sol'
                day = date[0]-17
                
        elif(date[1]==7):
            if(date[0]<16):
                month='Sol'
                day=date[0]+13
                
            else:
                month='July'
                day=date[0]-15
                
        elif(date[1]==8):
            if(date[0]<13):
                month='July'
                day=date[0]+16
                
            else:
                month='August'
                day=date[0]-12
                
        elif(date[1]==9):
            if(date[0]<10):
                month='August'
                day=date[0]+19
                
            else:
                month='September'
                day=date[0]-9
                
        elif(date[1]==10):
            if(date[0]<8):
                month='September'
                day=date[0]+21
                
            else:
                month='October'
                day=date[0]-7
                
        elif(date[1]==11):
            if(date[0]<5):
                month='October'
                day=date[0]+24
                
            else:
                month='November'
                day=date[0]-4
                
        else:
            if(date[0]<3):
                month='November'
                day=date[0]+26
                
            else:
                month='December'
                day=date[0]-2
        monthString = str(month) + " " + str(day) + "," + date[2]
        self.hTextBox.delete("0", "end")
        self.hTextBox.insert("0", monthString)

    def regyear(self,date):
        date[0]=int(date[0])
        date[1]=int(date[1])
        if(date[1]==1): 
            if (date[0] <29):
                month = 'January'
                day = date[0]
                
            else:
                month = 'February'
                day = date[0] - int(28)
                
        elif(date[1]==2):
            if(date[0]<26):
                month = 'February'
                day = date[0]+3
                
            else:
                month = 'March'
                day = date[0]-25
                
        elif(date[1]==3):
            if(date[0]<26):
                month = 'March'
                day = date[0]+3
                
            else:
                month = 'April'
                day = date[0]-25
                
        elif(date[1]==4):
            if(date[0]<23):
                month='April'
                day = date[0]+6
                
            else:
                month = 'May'
                day = date[0]-22
                
        elif(date[1]==5):
            if(date[0]<21):
                month = 'May'
                day = date[0]+8
                
            else:
                month = 'June'
                day = date[0]-20
                
        elif(date[1]==6):
            if(date[0]<18):
                month = 'June'
                day = date[0]+11
                
            else:
                month = 'Sol'
                day = date[0]-17
                
        elif(date[1]==7):
            if(date[0]<16):
                month='Sol'
                day=date[0]+13
                
            else:
                month='July'
                day=date[0]-15
                
        elif(date[1]==8):
            if(date[0]<13):
                month='July'
                day=date[0]+16
                
            else:
                month='August'
                day=date[0]-12
                
        elif(date[1]==9):
            if(date[0]<10):
                month='August'
                day=date[0]+19
                
            else:
                month='September'
                day=date[0]-9
                
        elif(date[1]==10):
            if(date[0]<8):
                month='September'
                day=date[0]+21
                
            else:
                month='October'
                day=date[0]-7
                
        elif(date[1]==11):
            if(date[0]<5):
                month='October'
                day=date[0]+24
                
            else:
                month='November'
                day=date[0]-4
                
        else:
            if(date[0]<3):
                month='November'
                day=date[0]+26
                
            else:
                month='December'
                day=date[0]-2
        monthString = str(month) + " " + str(day) + "," + date[2]
        self.hTextBox.delete("0", "end")
        self.hTextBox.insert("0", monthString)

    def main(self):
        greg = self.gTextBox.get().split('/')
        if(calendar.isleap(int(greg[2]))==True):
            self.leapyear(greg)
        else:
            self.regyear(greg)

boi = boxiboi()