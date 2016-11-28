# BBCOM ENG Golf Cup Challenge

This is the Site Operations golf cup challenge. We took a button out of an old mouse
for the button in the bottom of the pen holder cup.
Using an Arduino Micro and a relay, we will turn on a spinning light when a golf ball
drops into the cup and triggers the button.

## Parts list(With approximate prices)

The only thing I had to purchase was an extension cord to splice into. The rest of the stuff
I used I had as either leftovers or spare parts.

1) Pencil cup holder thing. Something like this would [work](https://www.google.com/shopping/product/6635555690437852289?q=pen+holder+cup&client=ubuntu&hs=tBE&channel=fs&biw=1366&bih=639&bav=on.2,or.r_cp.&bvm=bv.139782543,d.cGw&tch=1&ech=1&psi=mpc7WPWLG8rW0gLCpYf4AQ.1480300443301.3&prds=paur:ClkAsKraXzUjDUJBnjPqCmXN4-z-pGBA_81hVL46lspSk9vve0qqA2BoH-xnhpyg-XDEhgv7CEhrT5dHQ0uzxSr7FhlDRsEOtNsW6CqPX2KZcOSqe-AR8JAF8hIZAFPVH73oYxaWuI6I0GYEICqPc6OuTFsX5w&sa=X&ved=0ahUKEwi2kufytMrQAhXDxFQKHahGCG4Q8wIIvAMwBw). $1

2) [Arduino Micro](https://www.arduino.cc/en/Main/ArduinoBoardMicro). $25

3) Relay. I found a [4 channel relay](http://www.progressiveautomations.com/lc-201?gclid=Cj0KEQiAperBBRDfuMf72sr56fIBEiQAPFXszex4-c4kHztQYyjidWEv7_gen1GyG5N0nIDCvykXL2kaAttN8P8HAQ) like this. $9

4) 6' Extension cord to splice into. $1

5) Tie wire. Duct tapes heavy duty cousin. $1

6) 1 10k resister. $0.20?

7) 1 switch out of a crusty old mouse. $0.10? I found an old PS2 mouse to cannibalize.

8) Soup can lid


## Wiring

Here you can find the [pinout](https://www.arduino.cc/en/uploads/Main/ArduinoMicro_Pinout3.png).
This will be important. From here on, we will refer to the Arduino Micro as AM.

#### Relay Board To AM
There are clearly marked pins on the relay board. Wiring is as follows:

```text
vcc -----> AM 5v power
gnd -----> AM gnd 
IN1 -----> AM pin 2
```

#### Mouse Button To AM
For the mouse button, you will have to bear with me since I don't know the correct terms,
I don't care to learn them today, and there are no markings on this switch. Instead, I have
prepared for you some ascii art. Enjoy. :) 

> NOTE: If you want to see what these buttons look like, here is an image I found while
> googling around: [internal mouse button](http://g04.a.alicdn.com/kf/HTB1rBJjIXXXXXX.XVXXq6xXFXXXn/K7-font-b-Mouse-b-font-font-b-switch-b-font-rectangle-font-b-Mouse-b.jpg)

```text
 ___________
 |    ^    | ------------------> Pin -> AM pin 10 
 |  *****  | ---> Red Button for orientation
 |    ^    | ------------------> Pin -> 10k resistor -> AM gnd
 |         |
 |    ^    | ------------------> Pin -> AM 3v vcc
 |_________| 
```

#### Splicing the relay into the Extension cord
Again, bear with me since I don't know what I am doing here. I found this extension cord
at the dollar store. As such, it was 1 dollar. Furthermore, it doesn't have a ground wire.
There are only 2 wires. I chose to splice into the wire that ran to the fatter "Polarized"
(or something) bit that goes into the wall. More ascii art to describe how I did that:


```text
NOTE: Since the relay that I had was a 4 channel, there were 4 such places to wire it in.
We just need the one. If you use one that is different than the IN1, you will have to change
that accordingly. Duh.

                            |- - - - -|
                            |         |
                            |  Relay  |
                            |         |
                            |_________|
                           |(+)|(+)|(+)|
                            ||| |||
                            ||| |||
                             || ||
---------------Fat end wire -*| |*--Fat end wire----------------------------------
--------------------------Other wire----------------------------------------------
^                                                                                 ^
Extension cord end that plugs into wall            End that you plud the light into
```

## Cup
Since the goal of this project was to engage the button when a golf ball drops into the cup
we need to wire up the cup. This cup was a wire mesh so it was really easy to use tie wire to
stabilize the button. Since we needed to engage if the bottom of the cup was impacted anywhere,
I opted to cut down slightly a soup can lid so that it fit inside the bottom of my pencil holder
cup. I used a cris-cross pattern with the tie wire to achieve stability for
both the button, and the soup can lid that hovers over the button. More ascii art.

```text
    |               |
    |               |
    |               |  Side view(sort of)
    |  ____Lid____  |
    |     [***]     | <--- Button 
    |      ^^^      |
    |      \\\      |
    |       --------|-----> Wiring to the AM
    |_______________|
```

## In Summary
If you upload the include sketch(./golf_cup.ino) to the Arudino micro after you have it wired as 
described, it should work. Or something.


> Maybe if I cared I would include an image of the finished cup. But I don't. Who else would even read this?
