cmd_net/ipv4/ipip.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv4/ipip.ko net/ipv4/ipip.o net/ipv4/ipip.mod.o ;  true
