cmd_drivers/video/backlight/rpi_backlight.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/video/backlight/rpi_backlight.ko drivers/video/backlight/rpi_backlight.o drivers/video/backlight/rpi_backlight.mod.o ;  true
