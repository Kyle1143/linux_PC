cmd_drivers/regulator/built-in.o :=  rm -f drivers/regulator/built-in.o; arm-linux-gnueabihf-ar rcSTPD drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/fixed-helper.o drivers/regulator/helpers.o drivers/regulator/devres.o drivers/regulator/of_regulator.o 