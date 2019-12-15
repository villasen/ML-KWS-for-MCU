#TARGET = DISCO_F746NG
#TARGET = NUCLEO_F411RE
#TARGET = DISCO_F407VG
TARGET = NUCLEO_F746ZG
TOOLCHAIN = GCC_ARM

all:
	mkdir -p build/$(TARGET)/$(TOOLCHAIN)
	echo '*' > build/$(TARGET)/$(TOOLCHAIN)/.mbedignore
	mbed compile -t $(TOOLCHAIN) -m $(TARGET) -f \
  		--source . \
  		--source ../CMSIS_5/CMSIS/NN/Include \
		--source ../CMSIS_5/CMSIS/NN/Source \
  		--source ../CMSIS_5/CMSIS/DSP/Include \
		--source ../CMSIS_5/CMSIS/DSP/Source \
  		--source ../CMSIS_5/CMSIS/Core/Include

clean:
	rm -rf build
