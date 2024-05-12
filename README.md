# detection-de-fuite-de-gaz
La réalisation d'un système de détection de fuite de gaz 

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
 L’élément principal de détection utilisé dans notre prototype est le MQ-2. Ce capteur passif est relié avec la carte ARDUINO via une sortie  numérique. Lors du contact entre la couche sensible du capteur et le gaz, la résistance entre les électrodes métalliques change proportionnellement à la concentration du gaz. 

 https://github.com/elhilali01/detection-de-fuite-de-gaz/blob/main/bloc1.jpg?raw=true
 
 ✔ Bloc d'activation d'alarme:
 Le système d’alarme est composé d’un Buzzer et deux LEDS de signalisation : verte et rouge. Ces éléments sont reliés à la carte Arduino.
Le contrôle de ces éléments (activation ou désactivation) est géré via un programme téléversé vers la carte Arduino. Dans le cas d'absence d'une excitation externe, la LED verte est passante (allumée). Par contre la LED rouge est bloquée (éteinte) et le buzzer est inactif. Dans le cas inverse, la LED rouge est allumée et le buzzer est actif. Par conséquent, la LED vert est éteinte.

# fonctionnement de systeme :
Le prototype de détection de fuite de gaz comporte un circuit qui reste inactif en l'absence de fuite. Dans ce cas, la LED verte est allumée, indiquant que le gaz n'est pas détecté. Cependant, si la concentration de gaz dépasse 350 ppm, le capteur MQ-2 envoie un signal à la carte Arduino, activant le circuit d'alarme. Cela se traduit par l'extinction de la LED verte, l'allumage de la LED rouge et le déclenchement du buzzer. La carte Arduino affiche alors le message '' gas is detected '' sur l'écran LCD. 

