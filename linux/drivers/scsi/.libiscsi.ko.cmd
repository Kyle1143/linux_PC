cmd_drivers/scsi/libiscsi.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/scsi/libiscsi.ko drivers/scsi/libiscsi.o drivers/scsi/libiscsi.mod.o ;  true
