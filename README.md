# ![alt text](https://staticwww.asml.com/imglib/structure/asml_logo.png "ASML Netherlands B.V.")

ASML Netherlands B.V. provides chipmakers with everything they need - hardware, software and services - to mass produce patterns on silicon, helping to increase the value and lower the cost of a chip. Our key technology is the lithography system, which brings together high-tech hardware and advanced software to control the chip manufacturing process down to the picometer.
All of the world’s top chipmakers like Samsung, Intel and TSMC use our technology, enabling the waves of innovation that help tackle the world’s toughest challenges.

## The ASML C++ Hackaton
The second half of 2018 ASML is organizing a C++ Hackaton. The hackaton assigment tries to approach the daily challenges an ASML software employee faces in a:
* embedded,
* high performance,
* real time,
* distributed
system.


This project forms the basis and head-start of the ASML C++ Hackaton assignment.


# Assignment details

## Hardware
* 4 Huzzah Feather ESP8266@80MHz :
   * 80KB user RAM
   * 4MB flash
* 1 Chain of four MAX7219 8x8 dot matrix LED modules
* 1 Five wire female-female jumper wires


The four chained together MAX7219 modules can be connected to the Huzzah Feather
as follows:

|MAX7219    |  ESP8266                    | Description                      |
|-----------|-----------------------------|----------------------------------|
|VCC        |	3V3                        | +3.3V (max 400mA)                |
|GND	      |  GND                        | Ground (0V)                      |
|DIN	      |  GPIO13/MOSI                | Serial Peripheral Interface Data |
|CS	      |  Any GPIO (e.g. GPIO16) except MISO  | Chip select             |
|CLK	      |  GPIO14/SCK                 | Clock pulse                      |
