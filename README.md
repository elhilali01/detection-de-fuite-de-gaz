# detection-de-fuite-de-gaz
La réalisation d'un système de détection de fuite de gaz 
![alt tag](https://github.com/elhilali01/detection-de-fuite-de-gaz/blob/main/pic.jpg)
# Composants nécessaires :
  
-	Carte Arduino UNO.
-	Capteur de gaz MQ-2.
-	Résistances.
-	Leds.
-	Afficheur LCD.
-	Buzzer.
-	Des fils de connexion.
-	Une plaque d’essai.
  
# Description du prototype : 
Le prototype réalisé est constitué de trois blocs distincts :

 ✔ Bloc de détection de la présence du gaz:
 ✔ Bloc d'activation d'alarme:


# fonctionnement de systeme :
Le prototype de détection de fuite de gaz comporte un circuit qui reste inactif en l'absence de fuite. Dans ce cas, la LED verte est allumée, indiquant que le gaz n'est pas détecté. Cependant, si la concentration de gaz dépasse 350 ppm, le capteur MQ-2 envoie un signal à la carte Arduino, activant le circuit d'alarme. Cela se traduit par l'extinction de la LED verte, l'allumage de la LED rouge et le déclenchement du buzzer. La carte Arduino affiche alors le message '' gas is detected '' sur l'écran LCD. 
 ![alt tag](https://github.com/elhilali01/detection-de-fuite-de-gaz/blob/main/schema.png)

