#Sert à faire des graphiques
import matplotlib.pyplot as plt

#Nom du fichier en format AAAA_MM_JJ
NomDuFichierAAfficher = "2012-11-29"


#ouvre et lit le fichier 
#Le sépare en une chaine pour chaque donné 
f = open(NomDuFichierAAfficher,"r")
a = f.read()
a = a.split()

#contient les valeurs brut des capteurs
graphA = []
graphB = []
graphC = []

#enleve le nom du capteur et en fait des listes disctincte pour chaque capteur 
for i in a:
    if i[0]=="A":
        i = i.replace("A:","")
        try:
            graphA.append(int(i)) 
        except ValueError:
            continue
    elif i[0]=="B":
        i = i.replace("B:","")
        try:    
            graphB.append(int(i))
        except ValueError:
            continue
        
    elif  i[0]=="C":
        i = i.replace("C:","")
        try:
            graphC.append(int(i))
        except ValueError:
            continue    
        

#prend les valeurs à racourcir en moyenne, la quantité des limites à enlever,
# la quantité de la division pour la moyenne.
#retourne une nouvelle liste contenant les valeurs divises et par la moyenne de ceux-ci,
# tout en enlevant les valeurs limites 
def faitMoyenne(Valeurs, QteLimiteARetire, QteADiviser):
    NouvelleValeurs = []
    #tant qu'il y a plus de valeurs que la quantité à divier
    while len(Valeurs) > QteADiviser:
        
        #on enleve les valeur limite
        graphtemp = []
        for i in range(0,QteADiviser):
            graphtemp.append(Valeurs.pop(0))
            
        for i in range(0, QteLimiteARetire):
            graphtemp.pop()
            graphtemp.pop(0)
        
        #on fait la moyenne des valeurs 
        moyenne = 0
        for i in graphtemp:
            moyenne += i            
        moyenne = moyenne / len(graphtemp)
        
        #on ajoute la nouvelle valeur à la liste à retourner
        NouvelleValeurs.append(moyenne)    
        
    return NouvelleValeurs    

#réduit les listes pour les capteurs
LIMITE_RETIRER = 10
NB_VALEUR_TRANCHER = 60

graphAMinute = faitMoyenne(graphA,LIMITE_RETIRER,NB_VALEUR_TRANCHER)
graphBMinute = faitMoyenne(graphB,LIMITE_RETIRER,NB_VALEUR_TRANCHER)
graphCMinute = faitMoyenne(graphC,LIMITE_RETIRER,NB_VALEUR_TRANCHER)

#créé un une liste linéaire (0 1 2 3...) pour afficher le graphique
def creeLineaire(valeurGraph):
    Lineaire = []
    indice = 0
    while  indice !=  len(valeurGraph):
        Lineaire.append(indice)
        indice+=1
    return  Lineaire   

#créé et affiche le graphique de chaques capteurs
plt.plot(creeLineaire(graphAMinute),graphAMinute
        ,creeLineaire(graphBMinute),graphBMinute)
        #,creeLineaire(graphCMinute),graphCMinute)
#plt.axis(0,1024,0,10000)
plt.ylabel('Humidité')
#plt.xlabel('Time in sec')
plt.xlabel('Temps en minute')
plt.show()
