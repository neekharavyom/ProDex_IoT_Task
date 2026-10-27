# ProDex_IoT_Task
First task given by ProDex based on IoT. It included 3 tasks which were based on a real life problem and a solution to it. This repository includes the tinkercad circuit diagram and the code. 
The project given here is based on a smart solar panel which rotates itself according to the intensity of light i.e. it moves the solar panel such that sun light directly falls perpendicularly on the panel.
The prototype here includes two servo motors which align the solar panel accordingly.
It includes 4 photoresistors ,as LDRs were not present in tinkercad, which are embedded on the four corners of the solar panel and give the readings for the light intensities. Accordingly the intensities along the four directions are defined as the sum of two photoresistor intensities in the respective directions which are top right left and below.
If the intensity in top direction is more than that in the bottom direction, the servo along the vertical direction move towards the top. Similar for the horizontal motor.
It was also mentioned that the motors were to move only when the total intensity of light attained a minimum value, that threshold value however was not mentioned so I assumed it to be 30.
ALso if the intensity is below 10 then there is too less sunlight so then also the motors dont move.
All these components are connected together using Arduino R3 and it controls all the components.
