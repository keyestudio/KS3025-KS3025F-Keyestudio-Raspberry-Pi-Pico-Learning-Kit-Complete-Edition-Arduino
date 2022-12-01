# Project 30：Keypad Door

1.  **Introduction**

Matrix keypads are the kind of keypads you see on cell phones,
calculators, microwaves ovens, door locks, etc. They’re practically
everywhere.

In this project, we will learn Raspberry Pi Pico and membrane 4\*4
matrix keyboard to control servos and buzzers in the future.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/ea74681ffd2116a2434692d34c25e829.jpeg" style="width:1.92569in;height:0.76667in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.66944in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/cd0bc424e9916881a1a903793821a042.png" style="width:1.25417in;height:1.04792in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/4b4f653a76a82a3b413855493cc58fba.png" style="width:0.86111in;height:0.70069in" /></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td><p>Raspberry Pi Pico</p>
<p>Expansion Board*1</p></td>
<td>Servo*1</td>
<td>Active Buzzer*1</td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/fcd187eb009098d691927511606c991b.jpeg" style="width:1.70972in;height:0.74931in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.90694in;height:0.90139in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:0.99028in;height:0.52986in" /></td>
</tr>
<tr class="even">
<td>4*4 Membrane Matrix Keyboard*1</td>
<td>Jumper Wires</td>
<td>Breadboard*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**
    
    **4\*4 Matrix keyboard:**
    
    The keyboard is a device that integrates many keys. As shown in the
    figure below, a 4x4 keyboard integrates 16 keys.
    
    ![](/media/fcd187eb009098d691927511606c991b.jpeg)
    
    As with the LED matrix integration, in the 4x4 keyboard, each row of
    keys is connected to a pin, each column of keys is the same. This
    connection reduces the use of processor ports. The internal circuit
    is shown below.
    
    ![](/media/5ebdacba906622079e0ef41dc1ea3fdf.png)

You can use row scan or column scan methods to detect the state of the
keys on each column or each line. Take the column scan method as an
example. Send a low level to column 4 (Pin4), detect the state of rows
1, 2, 3 and 4, and determine whether the A, B, C and D keys are pressed.
Then send the low level to columns 3, 2, 1 in turn, and detect whether
other keys are pressed. Then you can get the state of all keys.

4.  **Read the Value**
    
    We start with a simple code to read the values of the 4\*4 matrix
    keyboard and print them in the serial monitor. Its wiring diagram is
    shown below.
    
    ![](/media/a673f15964984f61170e2d7690e959c1.png)

![](/media/681be86e91946320131d4b11b12b77c2.png)

You can open the code we provide:

Go to the folder KS3025 Keyestudio Raspberry Pi Pico Learning Kit
Complete Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 30：Keypad
Door\\Project\_30.1\_4x4\_Matrix\_Keypad\_Display

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : 4x4 Matrix Keypad Display</p>
<p>* Description : Get the value for the matrix keyboard</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "Keypad.h"</p>
<p>void setup()</p>
<p>void loop()</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/780a46fae53666f398c3d26b806f8a2f.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/53561bcdb3e86871015a48f96a37c394.png)

The code was uploaded successfully.

![](/media/85b64c0f738bc2234892e5d823de3c51.png)

Upload the code and power up with a USB cable, open the monitor and set
baud rate to 115200. Then you will see key values on the monitor.

![](/media/2688997d56f6c29ba4ca7d938919940c.png)

5.  Circuit diagram and wiring diagram:
    
    We control the servo and the buzzer with a 4\*4 dot matrix module.

![](/media/f08b9ee128bc06300b3f8a05c73c2375.png)

![](/media/ccb5914d82d2b220e8a6afb944d13c54.png)

6.  **Test Code：**

You can open the code we provide:

Go to the folder KS3025 Keyestudio Raspberry Pi Pico Learning Kit
Complete Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 30：Keypad Door\\Project\_30.2\_Keypad\_Doo

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************************</p>
<p>/*</p>
<p>* Filename : Keypad_Door</p>
<p>* Description : Make a simple combination lock.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#include "Keypad.h"</p>
<p>#include &lt;Servo.h&gt;</p>
<p>Servo myservo; // Create servo object to control a servo</p>
<p>int servoPin = 2; // Define the servo pin</p>
<p>int buzzerPin = 0; // Define the buzzer pin</p>
<p>String passWord = "1234"; // Save the correct password</p>
<p>String keyIn;</p>
<p>void setup() </p>
<p>void loop() </p>
<p>if (isRight) </p>
<p>else </p>
<p>keyIn = ""; // Reset the number of the input characters to 0</p>
<p>}</p>
<p>}</p>
<p>delay(200);</p>
<p>}</p>
<p>//**********************************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/1fd6c3790efaa78d670b2b530f0e2442.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/9532ec8429122b6f4d588c1df5e7af3e.png)

The code was uploaded successfully.

![](/media/8a021c28b4726ecf4b6778898a8c10f3.png)

7.  Test Result:
    
    Upload the code and power up with a USB cable. to power on, you will
    see the phenomenon: press the keyboard to enter a 4-character
    password, if the input is correct (correct password: 1234), the
    servo will rotate a certain angle, and then return to the original
    Location. An input error alert will be issued if an input is made
    incorrectly.

![](/media/f44f19963c4212f6b716bd0e09833129.png)

Keypad.cpp

<table>
<tbody>
<tr class="odd">
<td><p>#include "Keypad.h"</p>
<p>byte rowPin[4] = ;</p>
<p>byte colPin[4] = ;</p>
<p>char keyStrings[4][4] = ,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>int lastTime = 0;</p>
<p>int debounceTime = 20;</p>
<p>int pressKeyRow=0;</p>
<p>int pressKeyCol=0;</p>
<p>bool pressState=false;</p>
<p>void keyInit(void)</p>
<p>for (int c = 0; c &lt; sizeof(colPin); c++)</p>
<p>}</p>
<p>void keyScan(bool state)</p>
<p>}</p>
<p>digitalWrite(colPin[c], HIGH);</p>
<p>}</p>
<p>}</p>
<p>char getKey(bool state)</p>
<p>}</p></td>
</tr>
</tbody>
</table>
