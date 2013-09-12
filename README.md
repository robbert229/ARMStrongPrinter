ArmStrongPrinter
================

The first arm specific 3d printing firmware that I know of. It is currently capable of parsing gcode and turning it into code that an ARM fiq can use to move the stepper motors. It also has the ability to compress the data. Doing so significantly reduces the file sizes.

Currently I have been working on this with the CFA10049 in mind. The 10049 is a Linux SOM that is freakin awesome. The 10049 has speeds beyond standard Arduinos and is capable of standalone operation. It is capable of surfing thingiverse, picking an stl, slicing it, and then printing it without any other machines.

This tool is almost finished. It can create all of the fiq code required to print, but lacks the ability to load that data into the fiq. The tool that loads the data into the fiq is almost finished, but has issues with larger files. 

Thanks to the people who helped me produce this.
Brian Lilly, Brent Crosby


Usage
----------------------
The program is actually very simple. It takes arguments for an input file ( -i ), an output file ( -o ), whether or not it is going to be compressed ( -c ), and if it should be verbose ( -v ).

