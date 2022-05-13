# Operation
- The RED LED is considered for the ACC position. Once the push button is pressed for 2 seconds, the RED LED keeps continuously glowing until the stop of the engine signifying the engine condition to be turned ON.
- On press of the user input push button, the other three Blue, Green and Orange LEDs come ON one at a time with the set frequency. The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz.
- The LED glow pattern stops on the 4th press; the wiper action starts with the next press.
- If the push button is pressed for 2 seconds continuously, the RED light goes off and the pattern stops bringing it to default position which signifies the engine is turned OFF.
# Requirements
## High Level Requirements
| ID | Description| Status|
|---|---|---|
|HLR01|ACC Mode Execution|Implemented|
|HLR02|Wiper ON	|Implemented|
|HLR03|Wiper Speed Change|Implemented|
|HLR04|Wiper Off|Implemented|
## Low Level Requirements
| ID|Description|Operation|Status|
|---|---|---|---|
| LR01|Button pressed once for 2 secs|Red LED ON|Implemented|
| LR02|Button pressed second time|1 Hz speed - Blue, Green Orange alternative|Implemented|
| LR03|Button pressed third time|4 Hz speed - Blue, Green Orange alternative|Implemented|
| LR04|Button pressed fourth time|8 Hz speed - Blue, Green Orange alternative|Implemented|
| LR05|Button pressed again for two seconds|Turn Off all LEDs|Implemented|
# SWOT Analysis
## Strengths
- By providing ON/OFF push buttons, it can be operated manually or automatically.
- Clear Visibility to the Driver for neat ride.
- Safety for the driver as well as the passengers in the vehicle.
## Weakness
- This system applicable only in the case of rainfall on the glass.
- The total cost of the wiper system is high if implemented in real-time.
## Opportunity
- Rain sensing and automatic operation can be implemented as further enhancement.
## Threats
- Noise occurs due to slackness or tightness of the mechanical drive system. Also it occurs when the moving parts in the linkage come in contact with other parts such as the metal tubing of the screen washer tube.
- Can't have more functions as the functionality of the board is very basic.
# 4W's & 1H
## What
- A wiper speed control system for an automotive wiper controls the operational speed of a wiper in accordance with rain conditions.
## Where
- It is an element which is present in the windshield of the automobile.
## Who
- It is highly useful for drivers of any kind of automobile who needs clear vision of the road in case of dust or rain.
## Why
- To get a clear vision of the road.
## How 
- It is implemented with the help of STM32 with the desired operation of turning on the engine, changing of speeds and turning off with the help of Embedded c Programming.
