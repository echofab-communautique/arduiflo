# Arduiflo

>Créateur = Frédéric Cantin, Laurent Charbonneau, Raphaël Dermers, Serge Dubé, Marc-Olivier Ducharme, Anthony Lapointe, Stéphanie Lessard-Bérubé, Stéphanie Perron, Stéphane Rousseau
Description projet = Système d’irrigation de plantes ou de jardin de balcon commandé par un module Arduino et une pompe solaire.
Ingrédient = Multiplexeur 74HC4052N: [[http://www.digikey.ca/product-detail/en/74HC4052N652/568-1457-5-ND/763061]], 
Support de circuit intégré DIP-16 pour le multiplexeur (facultatif): [[http://www.digikey.ca/product-detail/en/1-390261-4/A100206-ND/1125624]], 
Transistor 2n2222: [[ http://www.digikey.ca/product-detail/en/P2N2222AG/P2N2222AGOS-ND/920244 ]], 
Resistance 100KΩ: [[ http://www.digikey.ca/product-detail/en/CF14JT100K/CF14JT100KCT-ND/1830399 ]], 
Relais 5V Normalement Ouvert: [[ http://www.digikey.ca/product-detail/en/OJE-SH-105DM000/PB874-ND/1095199 ]], 
Une Diode 1N4001: [[ http://www.digikey.ca/product-detail/en/1N4001-E3%2F54/1N4001-E3%2F54GICT-ND/868984 ]], 
Connecteurs pour l'arduino: [[ http://www.sparkfun.com/products/10007 ]]
Outil utilisé=Arduino, Outils d'électronique
Status=Terminé
License=GPL

![Arduiflo_Logo](https://user-images.githubusercontent.com/65183668/84669467-310fef00-af25-11ea-84d9-532559247170.jpg)
Image principale projet

Image projet=
![Arduiflo0 1](https://user-images.githubusercontent.com/65183668/84669468-310fef00-af25-11ea-8037-ec457a4d6f1a.jpg)
![Arduiflo1 0Circuit](https://user-images.githubusercontent.com/65183668/84669469-31a88580-af25-11ea-9300-0ecc5559b06c.jpg)
![Arduiflocondition](https://user-images.githubusercontent.com/65183668/84669472-32411c00-af25-11ea-9f2d-151e67a75f87.jpg)

SerialdeBase.jpg, CapteurE 4.JPG, ActionArduiflo.jpg, TestPompe6.JPG, ArduifloShield.jpg
Taille image=Petite

Cadre=Puisque le lab dispose de deux [[http://www.woollypocket.com/|Woolly Pockets]], nous avons décider de créer un mur vert dans nos bureaux. Nous voulons automatiser l’arrosage des plantes en fonction d'une lecture de capteur d'humidité placés dans les bacs de terre.<br />L’agriculture urbaine, que ce soit pour des jardins de toit, des jardins de balcon ou encore des murs verts est en plein essor. Les citoyens sont de plus en plus nombreux à mettre en place des systèmes de jardin au coeur de la ville.Ce projet est collaboratif et ouvert. Utilisez le [[https://github.com/ZagZig/arduiflow|wiki du GitHub]] pour faire avancer le projet.
}}

## Plans, Schémas & Code
Arduiflo terminée: ![Arduiflo0 1](https://user-images.githubusercontent.com/65183668/84669468-310fef00-af25-11ea-8037-ec457a4d6f1a.jpg)

Détail du PCB: ![Arduiflo1 0Circuit](https://user-images.githubusercontent.com/65183668/84669469-31a88580-af25-11ea-9300-0ecc5559b06c.jpg)

Le [[https://dl.dropboxusercontent.com/u/103145367/Arduiflo/Arduiflo%201.0.fzz|plan d'Arduiflo]] est maintenant en ligne au format "Fritzing"


### Capteur d'humidité


Nous avons décidés, entre autre, de développer un capteur d'humidité au lab ce qui n'a pas été de facile et de tout repos. Le capteur est en constante évolution (du moins je l'espère!) et prendra plusieurs formes. Voici quelque exemple de prototype raté, ainsi que de prototype que nous croyons fonctionnel.

----
#### Essai de capteur

**Modèle D:**

![TestCapteur-1](https://user-images.githubusercontent.com/65183668/84670298-3a4d8b80-af26-11ea-8c02-8ec012f2f664.JPG)

**Mise à jour: ce capteur semble fonctionel, par contre il n'est pas facile à reproduire. Étant donné que les fils ne sont pas attachés à la mine de crayon, mais enroulé, ils ont tendance à se déconnecter durant la cuisson. Sur les 3 capteurs construits seulement 1 fonctionnait.**

Ce prototype semble bien fonctionné et fonctionne sur une base de résistance au courant électrique. Selon le concept que plus la terre est mouillée plus le courant va traverser et moins elle est humide et moins le courant va traverser. Nous utilisons de la pâte polymère pour que le capteur soit étanche et solide. Nous utilisons aussi des mines de crayons, car elle contienne une grande teneur en graphite, qui conduit très bien l'électricité, et parce qu'elle ne rouille pas.


##### Étape_de_fabrication

-On enroule 2 petits fil conducteur aux 2 tiges de métal et on enroule l'autre bout aux mines de crayon.

-On enrobe de pâte polymère en s'assurant que les fils ne se touchent pas et que le capteur est étanche

-On retire l'excédent de pâte.

-On s'assure que la conductivité est bonne et indépendante l'une de l'autre avec un multi-mètre

-On met au four le temps indiqué par le fabricant de la pâte polymère.

-On soude 2 fils sur les 2 tiges de métal. 

Bingo prêt à brancher sur un micro-contrôleur! 


![FaireCapteur-5](https://user-images.githubusercontent.com/65183668/84669963-c0b59d80-af25-11ea-8a84-c51ddede7e23.JPG)

![FaireCapteur-2](https://user-images.githubusercontent.com/65183668/84669958-beebda00-af25-11ea-9399-1f8ece59842f.JPG)

![FaireCapteur-3](https://user-images.githubusercontent.com/65183668/84669960-beebda00-af25-11ea-9489-770cb7bb2c61.JPG)
![FaireCapteur-1](https://user-images.githubusercontent.com/65183668/84669953-bdbaad00-af25-11ea-9c45-66da0d8a9b1f.JPG)

![FaireCapteur-7](https://user-images.githubusercontent.com/65183668/84669965-c14e3400-af25-11ea-9462-a8698db15cdf.JPG)

![FaireCapteur-9](https://user-images.githubusercontent.com/65183668/84669967-c1e6ca80-af25-11ea-8103-989ca53eb656.JPG)

![FaireCapteur-10](https://user-images.githubusercontent.com/65183668/84669969-c27f6100-af25-11ea-8240-f777420787eb.JPG)

![FaireCapteur-11](https://user-images.githubusercontent.com/65183668/84669971-c27f6100-af25-11ea-832a-74306c8043c3.JPG)

![FaireCapteur-12](https://user-images.githubusercontent.com/65183668/84669972-c317f780-af25-11ea-93dd-aa7b860bcb2a.JPG)

![FaireCapteur-13](https://user-images.githubusercontent.com/65183668/84669973-c3b08e00-af25-11ea-84ee-46b34f790011.JPG)

![FaireCapteur-14](https://user-images.githubusercontent.com/65183668/84669976-c3b08e00-af25-11ea-884b-dcd242984193.JPG)

![FaireCapteur-15](https://user-images.githubusercontent.com/65183668/84669978-c4492480-af25-11ea-9346-916aacf922f3.JPG)

![FaireCapteur-17](https://user-images.githubusercontent.com/65183668/84669982-c4e1bb00-af25-11ea-82be-1430c8b0319d.JPG)

![FaireCapteur-18](https://user-images.githubusercontent.com/65183668/84669983-c57a5180-af25-11ea-8c24-3c4d780ab84d.JPG)

![FaireCapteur-16](https://user-images.githubusercontent.com/65183668/84669979-c4492480-af25-11ea-97b6-893afaa19e3f.JPG)

![FaireCapteur-8](https://user-images.githubusercontent.com/65183668/84669966-c14e3400-af25-11ea-8466-c10832f5ded9.JPG)

![FaireCapteur-6](https://user-images.githubusercontent.com/65183668/84669964-c0b59d80-af25-11ea-94ff-24c4870c78dd.JPG)

![FaireCapteur-4](https://user-images.githubusercontent.com/65183668/84669961-c01d0700-af25-11ea-8518-96a31f9b624a.JPG)




**Modèle C:**
<br>
Troisième itération du capteur d'humidité. En plus d'utiliser les mines de crayon, nous utilisons une structure à base de pâte polymère ([[http://en.wikipedia.org/wiki/Sculpey|//pâte polymère Sculpey//]])qui offre une solidité relative. Un problème que nous avons rencontré est que le capteur n'a pas assez cuit et est trop mout. De plus, les 2 bouts du capteur offres des mines de crayon et l'étain ne colle pas au mine crayon il est très difficile de souder une mine de crayon un fil. 

![1280px-PrototypeCapteurC-1](https://user-images.githubusercontent.com/65183668/84670238-2570f800-af26-11ea-9335-fa965c2cd114.JPG)


![PrototypeCapteurC-2](https://user-images.githubusercontent.com/65183668/84670335-49ccd480-af26-11ea-8a9e-4b163a35c6e9.JPG)



**Modèle B:**
<br> 
Deuxième itération du capteur d'humidité. Ce capteur est basé sur l'idée d'utiliser le graphite(dans notre cas une mine de crayon) comme élément conducteur, car il ne rouille pas. Il n'a pas très bien fonctionné, car il n'a pas de structure solide en son long et a une étanchéitée au niveau des fils qui laissent à désirer. 

![PrototypeCapteurB-1](https://user-images.githubusercontent.com/65183668/84670376-59e4b400-af26-11ea-80bb-9e5e06f07120.JPG)


![PrototypeCapteurB-2](https://user-images.githubusercontent.com/65183668/84670406-62d58580-af26-11ea-9121-f2e0372504ed.JPG)


[[Fichier:PrototypeCapteurB-3.JPG|500px|]]




**Modèle A:** <br>
Première itération du capteur d'humidité. Ce capteur est inspiré de quelques expérimentations que nous avons vues sur le web. Ce capteur fonctionne très bien. Sauf qu'il a une très courte durée de vie. En effet même si nous utilisions des capteurs galvanisés au zinc la rouille a pris le dessus sur le capteur après seulement une semaine! Nous croyons que c'est l'effet anode cathode qui fait rouillé le capteur plus rapidement.
 
![PrototypeCapteurA-1](https://user-images.githubusercontent.com/65183668/84670454-7254ce80-af26-11ea-9857-e3b6964c4367.JPG)


![PrototypeCapteurA-2](https://user-images.githubusercontent.com/65183668/84670456-7385fb80-af26-11ea-8b20-4ae0034c8e1a.JPG)

#### En test et développement

![ArduinoRaspberry5](https://user-images.githubusercontent.com/65183668/84670512-839ddb00-af26-11ea-91a0-80e53eaa335c.JPG)

Voici le nouveau capteur que nous testons nous avons ajouté des petits connecteur qui relie les mines de crayons bien en place avec les fils. sur les 3 que nous avons produits, 2 donnent des valeurs pratiquement identiques!

##### Contruction_du_capteurE

![CapteurE_1](https://user-images.githubusercontent.com/65183668/84670577-987a6e80-af26-11ea-9451-625ba2f57fca.JPG)
![CapteurE_2](https://user-images.githubusercontent.com/65183668/84670586-9adcc880-af26-11ea-9311-28683614f2e0.JPG)
![CapteurE_3](https://user-images.githubusercontent.com/65183668/84670591-9ca68c00-af26-11ea-960a-68449121fc26.JPG)
![CapteurE_4](https://user-images.githubusercontent.com/65183668/84670599-9e704f80-af26-11ea-892d-5b67f43fd64f.JPG)
![CapteurE_5](https://user-images.githubusercontent.com/65183668/84670606-a0d2a980-af26-11ea-89a1-b767dfaf9e4e.JPG)

###### Test du capteurE
 

Nous avons testé pendant un certain temps les capteurs avec mon ordinateur, mais plus maintenant
Nous testons présentement les capteurs d'humidité avec le Raspberry Pi!

![ArduinoRaspberry1](https://user-images.githubusercontent.com/65183668/84670737-c6f84980-af26-11ea-9b56-e16f3803b306.JPG)
![ArduinoRaspberry3](https://user-images.githubusercontent.com/65183668/84670783-d4153880-af26-11ea-997e-e41c7d190b3d.JPG)
![ArduinoRaspberry5](https://user-images.githubusercontent.com/65183668/84670798-d7102900-af26-11ea-84bf-a9599ca68eb8.JPG)



--------
**Graphique des capteurs**

Sur le 3 capteurs de cette ittération que nous avons produit, 2 donnent des valeurs très proches. Nous testons les capteurs dans 3 pots différents, car nous n'avons pas encore réglé le problème de la variation des données lorsque les capteurs sont dans le même sol. Nous avons saturés d'eau les 3 pots de terre (vraiment submergé dans l'eau). Voici le résultat du taux d'humidité. 


**mise à jour voici les résultats du test des capteurs d'humidité pour les 21 derniers jours:**

Voici les résultats de 21 jours de test des capteurs d'humidités. Les résultats sont intéressants, sauf que lors du 12-13-14 décembre(jour 11,12,13, il semblerait que l'humidité du capteur d'humidité A(bleu) à augmenté. On peut tout de même clairement voire que l'humidité diminue avec le temps.

le graphique et en jour et l'humidité est de 0 à 1024

voici le résultat avec les 3 capteurs(comme mentionné plus bas le capteur C(rouge) ne donnent pas les même résultats que les 2 autres capteurs.

![HumiditéSur20Jour_R1000_ABC](https://user-images.githubusercontent.com/65183668/84670833-e98a6280-af26-11ea-854f-c6c735ac9e6d.png)

Voici le résultat des 2 capteurs significatifs:

![HumiditéSur21Jour_R1000](https://user-images.githubusercontent.com/65183668/84670900-fc9d3280-af26-11ea-9235-9a3321569c41.png)

le graphique et en minute et l'humidité est de 0 à 1024
 

**2012-12-06:**

![ABC_2012-12-06](https://user-images.githubusercontent.com/65183668/84670931-0a52b800-af27-11ea-8a5f-aa0262aab340.png)

Comme vous pouvez le constater, il y a un capteur qui est vraiment loin des 2 autres nous l'avons donc retiré des graphiques pour mieu comprendre les 2 autres capteurs.

 
**2012-11-29:**

![2012-11-29](https://user-images.githubusercontent.com/65183668/84670970-18083d80-af27-11ea-94fb-f762ecbf6b1f.png)

 
**2012-11-30:**

![2012-11-30](https://user-images.githubusercontent.com/65183668/84671019-248c9600-af27-11ea-8d92-cbd3d572a8f3.png)

 
**2012-12-01:**

![2012-12-01](https://user-images.githubusercontent.com/65183668/84671047-2eae9480-af27-11ea-8585-a3a735feeb80.png)

 
**2012-12-02:**

![2012-12-02](https://user-images.githubusercontent.com/65183668/84671126-45ed8200-af27-11ea-9072-a34e50425508.png)

**2012-12-03:**

![2012-12-03](https://user-images.githubusercontent.com/65183668/84671168-53a30780-af27-11ea-84b0-aea7fa5c8cd7.png)

**2012-12-04:**

![2012-12-04](https://user-images.githubusercontent.com/65183668/84671191-5d2c6f80-af27-11ea-8173-c2800c68a6e5.png)

**2012-12-05:**

![2012-12-05](https://user-images.githubusercontent.com/65183668/84671225-674e6e00-af27-11ea-9e0a-9dfedeb2fd23.png)

**2012-12-06:**

![2012-12-06](https://user-images.githubusercontent.com/65183668/84671266-733a3000-af27-11ea-9c04-1df7d95ea042.png)

Les valeurs des capteurs changes parfois drastiquement, mais j'ai parfois utilisé mon ordinateur et arrêté de collecter les données des capteurs. 
On peut constater que si les capteur sont vraiment dans l'eau saturé, ils vont donner une valeure moins grande d'humitié. Lorsque la terre est humide comme de la boue et non comme du de l'eau avec de la terre dedans, le taux d'humidité commence à descendre.

Mon interprétation subjective:
750 d'humidité semble être la valeur d'humidité dont les plantes ont besoins
800 à 850 étant de la terre de marais.

Le problème est que 700 à 750 est aussi la valeur donné pour une terre complètement saturé d'eau.

d'autre test seront necessaire pour régler ce problème.

#### code de test


**Mise à jour:** tout le code à été migré vers le GitHub arduiflo disponible ici: [[https://github.com/AnthonyLapointe/arduiflo]] 

Vous êtes encouragé à contribuer au code au même titre qu'au développement du hardware!


pour référence seulement voici le code en date du 7 décembre:

``` const int BAUD_RATE = 9600;

 const int PIN_ECRITURE_CAPT_A = 3;
 const int PIN_LECTURE_CAPT_A = 3;
 const int PIN_ECRITURE_CAPT_B = 4;
 const int PIN_LECTURE_CAPT_B = 4;
 const int PIN_ECRITURE_CAPT_C = 5;
 const int PIN_LECTURE_CAPT_C = 5;

 const int PIN_ECRITURE_RELAY = 8;


 const long ATTENTE_APRES_ARROSAGE_MS = 60000;<nowiki>//</nowiki>(1000 * 60 * 10); 
 const int ATTENTE_ENTRE_LECTURE_MS = 1000;
 const int ATTENTE_ENTRE_CAPT = 2000;
 const int DURE_ARROSAGE_MS = 4000;
 const int MIN_HUM = 700;


 void setup()
 {

  Serial.begin(BAUD_RATE);

  pinMode(PIN_ECRITURE_CAPT_A,OUTPUT);
  digitalWrite(PIN_ECRITURE_CAPT_A,LOW);

  pinMode(PIN_ECRITURE_CAPT_B,OUTPUT);
  digitalWrite(PIN_ECRITURE_CAPT_B,LOW);

  pinMode(PIN_ECRITURE_RELAY,OUTPUT);
  digitalWrite(PIN_ECRITURE_RELAY,LOW);

  <nowiki>//</nowiki>Serial.println(ATTENTE_APRES_ARROSAGE_MS);

 }

 void loop()
 { 

  int humidite = 0;

  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_A,PIN_LECTURE_CAPT_A);
  Serial.print("A:");
  Serial.print(humidite);
  Serial.print(" ");

  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_B,PIN_LECTURE_CAPT_B);
  Serial.print("B:");
  Serial.print(humidite);
  Serial.print(" ");
  
  humidite = litValeurCapteur(PIN_ECRITURE_CAPT_C,PIN_LECTURE_CAPT_C);
  Serial.print("C:");
  Serial.print(humidite);
  Serial.print(" ");
  
  Serial.println();

  delay(ATTENTE_ENTRE_LECTURE_MS); 

 }

 int litValeurCapteur(const int PIN_ECRITURE,const int PIN_LECTURE)
 {

  const int ATTENTE_LECTURE_MS = 200;

  digitalWrite(PIN_ECRITURE,HIGH);
  delay(ATTENTE_LECTURE_MS);
  int humidite = analogRead(PIN_LECTURE);
  digitalWrite(PIN_ECRITURE,LOW);  
  return humidite;

 }

 void ControleHumidite()
 {

  /* if( humidite < MIN_HUM)
   {
   digitalWrite(PIN_ECRITURE_RELAY,HIGH);
   delay(DURE_ARROSAGE_MS);
   digitalWrite(PIN_ECRITURE_RELAY,LOW);
   
   delay(ATTENTE_APRES_ARROSAGE_MS);
   }
   
   delay(ATTENTE_ENTRE_CAPT);
   */

 }
 ```
 
[[Code Python]]

---
### Pompe et panneau solaire

#### Test de la pompe avec le nouveau panneau solaire:

Le test à été concluant! La pompe avec le panneau solaire à batterie donne de très bon résultat!

![TestPompe1](https://user-images.githubusercontent.com/65183668/84669488-35d4a300-af25-11ea-92cc-b040e5cd270a.JPG)

![TestPompe2](https://user-images.githubusercontent.com/65183668/84669495-3705d000-af25-11ea-91a2-13245aed7129.JPG)
![TestPompe3](https://user-images.githubusercontent.com/65183668/84669504-39682a00-af25-11ea-8fa0-e53f7410ca5d.JPG)
![TestPompe4](https://user-images.githubusercontent.com/65183668/84669519-3c631a80-af25-11ea-92dc-0b9aa0656afe.JPG)
![TestPompe5](https://user-images.githubusercontent.com/65183668/84669530-3ec57480-af25-11ea-891a-bef6576a2fd6.JPG)
![TestPompe6](https://user-images.githubusercontent.com/65183668/84669534-408f3800-af25-11ea-9144-a99043e323e4.JPG)
![TestPompe7](https://user-images.githubusercontent.com/65183668/84669542-41c06500-af25-11ea-8a64-d021579889f9.JPG)

![TestPompe10](https://user-images.githubusercontent.com/65183668/84669557-44bb5580-af25-11ea-8f41-1e71901b6cf3.JPG)
![TestPompe11](https://user-images.githubusercontent.com/65183668/84669560-45ec8280-af25-11ea-9b17-b36e0146e0d8.JPG)
![TestPompe12](https://user-images.githubusercontent.com/65183668/84669567-46851900-af25-11ea-9143-b4e2b0648c4e.JPG)
![TestPompe13](https://user-images.githubusercontent.com/65183668/84669571-47b64600-af25-11ea-9c21-18ac963a5255.JPG)

#### Panneau solaire ouvert:


![PanneauSolaire4](https://user-images.githubusercontent.com/65183668/84671433-aa104600-af27-11ea-9118-27e9692b0f2c.JPG)
![PanneauSolaire1](https://user-images.githubusercontent.com/65183668/84671437-abda0980-af27-11ea-8801-4f96147419e7.JPG)
![PanneauSolaire3](https://user-images.githubusercontent.com/65183668/84671434-ab417300-af27-11ea-845a-dc9c1304540f.JPG)
![PanneauSolaire5](https://user-images.githubusercontent.com/65183668/84671429-a977af80-af27-11ea-903e-f59c8f7d3a9c.JPG)

---

### Shield_Arduiflo

![ArduifloShield](https://user-images.githubusercontent.com/65183668/84669477-33724900-af25-11ea-9c51-ad41796974f3.jpg)

#### Circuit

##### Plan

Voici la version 0.1 du shield arduiflo:
![Arduiflo2_pcb](https://user-images.githubusercontent.com/65183668/84669471-31a88580-af25-11ea-885d-761cd47ad2d0.jpg)


Nous avons utilisé le logiciel, open source, de dessein de circuit Fritzing [[http://fritzing.org/]] pour faire le ce circuit. Nous ne sommes pas particulièrement content de notre shéma, il est un peut difficile à comprendre, mais le voici.

![ShemaArduiflo_bb](https://user-images.githubusercontent.com/65183668/84671594-dcba3e80-af27-11ea-9c1a-94442d6e87ae.jpg)

![ShemaArduiflo_schem](https://user-images.githubusercontent.com/65183668/84671588-dc21a800-af27-11ea-9f56-c892b8cc15f9.jpg)

[[Fichier:Alim_mixte.pdf]]

##### Problème encouru

##### Fuite de courrant

Lorsque nous avons branché plusieurs capteurs d'humidité sur le circuit du arduiflo et que nous les avons mis dans le même pot de terre. Nous nous sommes rapdiement rendu compte que les valeurs des capteurs était affecté l'une par l'autre et ce même avec environs un mètre de distance. Nous en sommes arrivé à la conclusion que le courant des  capteurs fuyait mutuellement  un dans l'autre ce qui modifiais les valeurs des capteurs d'humidités et les rendaient ininterprétables.

###### Solution
Nous avons ajouté un multiplexeur 4052 [[http://www.spikenzielabs.com/Catalog/index.php?main_page=product_info&cPath=24&products_id=506]] au circuit, ce qui permet d'utiliser 4 capteurs d'humidité avec seulement 3 pin du arduino(2 digital et 1 analogique), ainsi que d'isoler les mises à terre(Ground) de chaque capteurs d'humidité. Après quelques test nous avons réussie à isoler les capteurs les un des autres et ainsi régler le problème de fuite de courrant. 

###### Échec
Nous avons d'abord esseyé avec un multiplexeur de type 4051 [[http://playground.arduino.cc/learning/4051]] ce qui nous aurait permit d'avoir 8 capteur avec seulement 4 pin du arduino, mais le multiplexeur n'isole pas les mises à terre des capteurs d'humidité.

#### Fermeture automatique du panneau solaire

Le panneau solaire a batterie SuYou [[https://www.sparkfun.com/products/11496]] s'éteint tous seul lorsque nous l'avons utilisé pour fournir le courant du mur végétal. Il y a une fermeture automatique du panneau solaire lorsqu'il n'y a pas de courant qui est utilisé. Il semble que nous devions tirer plus de courant pour ne pas que le panneau solaire ne se ferme tout seul. Court-circuiter le panneau solaire ne semble pas fonctionner. Nous avons réussi à activer un moteur avec le panneau solaire à batterie et il ne s'éteint pas.




#### Code Arduino
**Lecture Simple**: [[https://dl.dropboxusercontent.com/u/103145367/Arduiflo/Arduiflo_lectureSimple.ino]]
**Lecture + Arrosage de base**: [[https://dl.dropboxusercontent.com/u/103145367/Arduiflo/ArduifloLectureArrosage.ino]]

![SerialdeBase](https://user-images.githubusercontent.com/65183668/84671757-083d2900-af28-11ea-9e9d-4d56b4294409.jpg)

![Arduiflocondition](https://user-images.githubusercontent.com/65183668/84671796-12f7be00-af28-11ea-93d7-a2fbdd8878da.jpg)



#### Documentation Externe

**Relais**
Schéma de "Make": [[http://blog.makezine.com/2009/02/02/connecting-a-relay-to-arduino/]]

**Shield Arduino pour controler les solenoids**
http://www.ohanda.org/products/solenoid-shield

## Contact et questions

Pour toutes questions en lien avec le projet, veuillez nous écrire au [[mailto:info@echofab.org|info@echofab.org]]


## Ont contribués à ce projet


  * Frédéric Cantin - RD Électronique et mécanique
  * Laurent Charbonneau - Brainstorm
  * Raphaël Dermers - Électronique et Arduino et conception technique
  * Serge Dubé - RD Électronique et mécanique - Résolution de problèmes
  * Marc-Olivier Ducharme -  Conception originale et démarage du projet - Soutien technique
  * Anthony Lapointe - Project leader - Programmation et conception techniques
  * Stéphanie Lessard-Bérubé - Vidéo Indiegogo
  * Stéphanie Perron - Communications
  * Stéphane Rousseau - Soutien technique et RD

Si votre nom n'apparait pas n'hésitez pas à l'ajouter à la liste ou nous contacter!

## Avancement du projet
Statut actuel: Le projet est suspendu jusqu'à ce que nous terminé notre déménagement.




## Suite du projet

[[création d'un nouveau système Arduiflo miniature]]
