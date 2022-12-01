# Project 10：8×8 Dot-matrix Display

1.  **Introduction**

The dot-matrix display is an electronic digital display device that can
show information on machines, clocks and many other devices. In this
project, we will use the pico board control the 8x8 LED dot matrix to
make a“❤”pattern.

2.  **Components Required**

<table>
<tbody>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/b18fe281156b29c44796f72222718d58.jpeg" style="width:2.37431in;height:0.94514in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/bbed91c0b45fcafc7e7163bfeabf68f9.png" style="width:1.67014in;height:1.28472in" /></td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="even">
<td>Raspberry Pi Pico*1</td>
<td>Raspberry Pi Pico Expansion Board*1</td>
<td></td>
<td></td>
<td></td>
</tr>
<tr class="odd">
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/d226a1f3c801ac78321f0692143c853e.png" style="width:1.09375in;height:1.05208in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/098a2730d0b0a2a4b2079e0fc87fd38b.png" style="width:0.90833in;height:0.23681in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e9a8d050105397bb183512fb4ffdd2f6.png" style="width:1.03333in;height:1.02708in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/e380dd26e4825be9a768973802a55fe6.png" style="width:0.50347in;height:1.23333in" /></td>
<td><img src="https://raw.githubusercontent.com/keyestudio/KS3025-KS3025F-Keyestudio-Raspberry-Pi-Pico-Learning-Kit-Complete-Edition-Arduino/master/media/7dcbd02995be3c142b2f97df7f7c03ce.png" style="width:1.05903in;height:0.56667in" /></td>
</tr>
<tr class="even">
<td>8*8 Dot-matrix Display *1</td>
<td>220Ω Resistor*8</td>
<td>Jumper Wire</td>
<td>breadboard*1</td>
<td>USB Cable*1</td>
</tr>
</tbody>
</table>

3.  **Component Knowledge**

**8\*8 Dot-matrix display module:**

The 8\*8 dot matrix is composed of 64 LEDs, and each LED is placed at
the intersection of a row and a column. When using a single-chip
microcomputer to drive an 8\*8 dot matrix, we need to use a total of 16
digital ports, which greatly wastes the data of the single-chip
microcomputer. For this reason, we specially designed this module, using
the HT16K33 chip to drive an 8\*8 dot matrix, and only need to use the
I2C communication port of the single-chip microcomputer to control the
dot matrix, which greatly saves the microcontroller resources.

![](/media/69c719a7898907ab32f089f0cbbaff13.png)

![](/media/bcfa2498367eaf9c7733da15af32eae7.png)

4.  **Circuit diagram and wiring diagram:**

![](/media/dc2d64f3098b039937483e04589cbc17.png)

![](/media/094a47e28b2c735ab475ede10c0deb43.png)

**8. Test Code**

You can open the code we provide:

Go to the folder KS3025 Keyestudio Raspberry Pi Pico Learning Kit
Complete Edition\\2. Windows System\\2. C\_Tutorial\\2.
Projects\\Project 10：8×8 Dot-matrix
Display\\Project\_10\_8×8\_Dot\_Matrix\_Display

<table>
<tbody>
<tr class="odd">
<td><p>//**********************************************************************</p>
<p>/*</p>
<p>* Filename : 8×8 Dot-matrix Display</p>
<p>* Description : 8×8 Dot-matrix displays numbers from 0 to 9.</p>
<p>* Auther : http//www.keyestudio.com</p>
<p>*/</p>
<p>int R[] = ;</p>
<p>int C[] = ;</p>
<p>unsigned char data_0[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_1[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_2[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_3[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_4[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_5[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_6[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_7[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_8[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>unsigned char data_9[8][8] =</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p>,</p>
<p></p>
<p>};</p>
<p>void Display(unsigned char dat[8][8])</p>
<p></p>
<p>delay(1);</p>
<p>Clear();</p>
<p>}</p>
<p>}</p>
<p>void Clear()</p>
<p></p>
<p>}</p>
<p>void setup()</p>
<p>}</p>
<p>void loop()</p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>for (int i = 1; i &lt;= 100; i = i + (1)) </p>
<p>}</p>
<p>//**********************************************************************</p></td>
</tr>
</tbody>
</table>

Before uploading Test Code to Raspberry Pi Pico, please check the
configuration of Arduino IDE.

Click "Tools" to confirm that the board type and ports.

![](/media/a0200c149c6608301b678a00ce1bb537.png)

Click ![](/media/b0d41283bf5ae66d2d5ab45db15331ba.png) to upload the test code to the Raspberry
Pi Pico board

![](/media/7ccd16d15eb1cd31e205ef55347837b2.png)

The code was uploaded successfully.

![](/media/7ec630e587152fa8ce6d0f9a83a9783d.png)

9.  **Test Result：**

You will view the 8\*8 dot matrix show 0\~9
