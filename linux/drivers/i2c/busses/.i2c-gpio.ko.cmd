cmd_drivers/i2c/busses/i2c-gpio.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/i2c/busses/i2c-gpio.ko drivers/i2c/busses/i2c-gpio.o drivers/i2c/busses/i2c-gpio.mod.o ;  true