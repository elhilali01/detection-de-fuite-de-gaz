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
 L’élément principal de détection utilisé dans notre prototype est le MQ-2. Ce capteur passif est relié avec la carte ARDUINO via une sortie 
  numérique. Lors du contact entre la couche sensible du capteur et le gaz, la résistance entre les électrodes métalliques change proportionnellement à la concentration du gaz.
 
 ✔ Bloc d'activation d'alarme:
 Le système d’alarme est composé d’un Buzzer et deux LEDS de signalisation : verte et rouge. Ces éléments sont reliés à la carte Arduino.
Le contrôle de ces éléments (activation ou désactivation) est géré via un programme téléversé vers la carte Arduino. Dans le cas d'absence d'une excitation externe, la LED verte est passante (allumée). Par contre la LED rouge est bloquée (éteinte) et le buzzer est inactif. Dans le cas inverse, la LED rouge est allumée et le buzzer est actif. Par conséquent, la LED vert est éteinte.



