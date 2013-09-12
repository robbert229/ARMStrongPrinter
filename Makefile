#CC=arm-none-linux-gnueabi-gcc
FLAGS=-Wall -std=c99 -lm
ArmStrongPrinting:ArmStrongPrinting.c quicklz.c
	$(CC) ArmStrongPrinting.c quicklz.c -o ArmStrongPrinting $(FLAGS)