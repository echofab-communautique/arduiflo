import serial
from datetime import datetime

AdressPortSerie = "/dev/ttyACM0"
BaudRate = 9600

#ouvre le port serie
ser = serial.Serial(AdressPortSerie, BaudRate)

#retourne le temps en format AAAA-MM-JJ
def Temps():
    
    #affecte le temps à une string en format AAAA-MM-JJ
    a = str(datetime.now())
    b = a.split()
    return str(b[0])

#lit le buffer du port serie et écrit en ajout dans le fichier nommé la date actuel, à l'infinie.  
while 1:
    if(ser.inWaiting()!=0):
        f = open(Temps(),"a")
        #lit la ligne du port serie
        a =str(ser.readline())     
        
        #divise en plusieurs chaine contenant le nom et la valeur 
        a = a.split("\\r\\n") 
        a = a[0].replace("b'", "")
        
        #écrit la valeur dans un fichier
        f.write(a)
        print(a)
        f.close()
        

     
        