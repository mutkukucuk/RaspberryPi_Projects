# Raspberry Pi Mini Projects

Some projects you can do with Raspberry Pi

## Tech

Some electronic parts are needed to be able to do the projects in this Repository.

<h3>Software</h3>

- [Geany](https://www.geany.org/) - The IDE that we will work on the Raspbian OS will allow us to run these IDE codes on our Raspberry Pi device.

<h3>Hardware</h3>

- [Raspberry Pi](https://www.raspberrypi.org/products/raspberry-pi-3-model-b/) - The electronic device we will be working on.
- [Breadboard](https://en.wikipedia.org/wiki/Breadboard)
- [Jumper Wires](https://www.amazon.com/jumper-wires/s?k=jumper+wires)
- [Led](https://www.amazon.com/eBoot-Pieces-Emitting-Diodes-Assorted/dp/B06XPV4CSH/ref=sr_1_36?dchild=1&keywords=led&qid=1627051339&sr=8-36)
- [Button](https://www.amazon.com/s?k=button+switch&ref=nb_sb_noss_1)
- [Buzzer](https://www.amazon.com/BNYZWOT-Active-Industrial-Electric-Alarmer/dp/B07VQ94DM1/ref=sr_1_21?dchild=1&keywords=buzzer&qid=1627051580&sr=8-21)
- [Servo](https://www.amazon.com/s?k=Servo&ref=nb_sb_noss_2)


## Installation

Projects require the WiringPi framework to run.

```sh
sudo apt-get install wiringpi
```

## Roadmap

- <h3>Configuration</h3>

<div align="center"><img src="https://user-images.githubusercontent.com/77547655/126806290-45c86557-a441-4b9e-863e-1e5190c2f983.png" width="450"></div>
<div align="center"><img src="https://user-images.githubusercontent.com/77547655/126807468-4c63b53c-b7a7-41ba-a5c2-9d62d18d815c.png" width="450"></div>
<br>
<p>Enter the Raspberry Pi Configuration settings and choose the options you will use in your projects.</p>

- <h3>Open Geany</h3>
 
<div align="center" ><img src="https://user-images.githubusercontent.com/77547655/126808704-884fdf25-17b5-4cfe-a6d8-71a848966521.png" width="450" height="460"></div>
<br>
<p>We will write our codes with the Geany IDE that comes with the Raspbian OS.</p>

If this IDE is not available on your Raspberry device, you can download it here [Geany](https://www.geany.org/). 

- <h3>In-IDE Settings</h3>

<div align="center" ><img src="https://user-images.githubusercontent.com/77547655/126810781-b041db2a-e156-4e42-9bbc-c3151a4d7594.png" width="450" height="460"><p>First you need to create a new mold. Since I will write C codes, I created a mold for C.</p></div>
  
<div align="center" ><img src="https://user-images.githubusercontent.com/77547655/126812526-c3a4a641-20a5-46e2-aa09-800e26b88349.png" width="450" height="460"><p>Go to the "İnşa Et"(Build) box and add the "-lwiringPi" text you see in the picture from the screen that appears.</p></div>

<div align="center" ><img src="https://user-images.githubusercontent.com/77547655/126813738-82ff35b1-88dd-47d6-a99e-32f69f8f61d9.png" width="450" height="460"><p>Finally, don't forget to include the lwiringPi library in your code!</p></div>

## License

MIT

