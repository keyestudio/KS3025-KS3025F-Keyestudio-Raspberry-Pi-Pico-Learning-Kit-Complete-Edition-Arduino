# Project 09：4-Digit Digital Tube

1.  **Introduction**

The 4-digit 7-segment digital tube is a very practical display device,
and it is used for devices such as electronic clocks and score counters.
Due to the low price and it is easy to use, more and more projects will
use 4-digit 7-segment digital tubes. In this project, we will use the
PLUS control board to control a 4-bit 7-segment digital tube to create a
manual counter.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:0.90833in;height:0.23681in" /></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Development Board*1</td>
<td>220Ω Resistor*8</td>
<td></td>
</tr>
<tr class="odd">
<td><p><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></p>
<p><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/723dc2c4078b7d3f84b7f1ae76edbabe.png" style="width:0in;height:0in" /></p></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:0.90694in;height:0.90069in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/ee7a4ecd35ef268149e31fb9d62c8227.png" style="width:0.94792in;height:0.71736in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>Breadboard*1</td>
<td>Jumper Wires</td>
<td>4-digit Tube Display*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

![](/media/ce987bf9a2ab398945c98b34d3f8a003.png)

4-digital tube display:

The 4-digital tube display is is a semiconductor light-emitting device.
Its basic unit is a light-emitting diode (LED). The digital tube display
can be divided into 7-segment digital tube and 8-segment digital tube
according to the number of segments. The 8-segment digital tube has one
more LED unit than the 7-segment digital tube (used for decimal point
display). Each segment of the 7-segment LED display is a separate LED.
According to the connection mode of the LED unit, the digital tube can
be divided into a common anode digital tube and a common cathode digital
tube.

In the common cathode 7-segment digital tube, all the cathodes (or
negative electrodes) of the segmented LEDs are connected together, so
you should connect the common cathode to GND. To light up a segmented
LED, you can set its associated pin to“HIGH”.

Pins of control bit are G1, G2, G3 and G4.

![](/media/37113fa53213973132086c285d67686b.png)

![](/media/ea75d1b7414bf6f8c187fb32fea9bc83.png)

4.  **Wiring Diagram**

![](/media/4f64b9bf6b74ab49584f69c7465efa73.png)

![](/media/6bf1bae6af0324d50a37ab7a0cabee11.png)

**5.Test Code:**

Go to the folder KS3025 Keyestudio Raspberry Pi Pico Learning Kit
Complete Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 09：4-Digit Digital
Tube\\Project\_09\_Four\_Digit\_Digital\_Tube

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 4-Digit Digital Tube</p>
<p>* Description : Four Digit Tube displays numbers from 0000 to 9999.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>#define d_a 21 //Define nixie tube a to pin 21</p>
<p>#define d_b 28</p>
<p>#define d_c 16</p>
<p>#define d_d 18</p>
<p>#define d_e 19</p>
<p>#define d_f 22</p>
<p>#define d_g 15</p>
<p>#define d_dp 17</p>
<p>#define G1 20 //Define the first set of nixtube G1 to pin 20</p>
<p>#define G2 26</p>
<p>#define G3 27</p>
<p>#define G4 14</p>
<p>//Nixie tube 0-F code value</p>
<p>unsigned char num[17][8] =</p>
<p>, //0</p>
<p>, //1</p>
<p>, //2</p>
<p>, //3</p>
<p>, //4</p>
<p>, //5</p>
<p>, //6</p>
<p>, //7</p>
<p>, //8</p>
<p>, //9</p>
<p>, //A</p>
<p>, //B</p>
<p>, //C</p>
<p>, //D</p>
<p>, //E</p>
<p>, //F</p>
<p>, //.</p>
<p>};</p>
<p>void setup()</p>
<p></p>
<p>void loop()</p>
<p></p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>}</p>
<p>//Display functions: g ranges from 1 to 4,num ranges from 0 to 9</p>
<p>void Display(unsigned char g,unsigned char n)</p>
<p></p>
<p>digitalWrite(d_a,num[n][0]); //a Queries the code value table</p>
<p>digitalWrite(d_b,num[n][1]);</p>
<p>digitalWrite(d_c,num[n][2]);</p>
<p>digitalWrite(d_d,num[n][3]);</p>
<p>digitalWrite(d_e,num[n][4]);</p>
<p>digitalWrite(d_f,num[n][5]);</p>
<p>digitalWrite(d_g,num[n][6]);</p>
<p>digitalWrite(d_dp,num[n][7]);</p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/4bb316b7a6cf57d36228140655edc7b4.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/65a5c201e42510df916c6ef38c8ff616.png)

The code was uploaded successfully.

![](/media/e069c4c62d02a242a787bf1269617f9d.png)

5.  **Result**

Upload the project code, wire up and power on, 4-digit digital tube
circularly displays numbers from 0000 to 9999.
