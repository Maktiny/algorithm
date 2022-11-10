#include <stdio.h>
#include <stdlib.h>
#include <lsxintrin.h>

int main()
{
    v4u32 var = {0x87aebeef, 0xfc910034, 0x87aebeef, 0xfc910034};
    v4u32 out = {0x87aebeef, 0xfc910034, 0x87aebeef, 0xfc910034};
    int fcsr_init, fcsr_out = 0;
    int fcsr_in = 0x0;
    asm (
        "movgr2fcsr $r0, %[fcsr_modify]\n"
        "movfcsr2gr %[fcsr_init], $r0\n"
	"vld $vr0, %[src] \n"
	"li.d $r11, 0x7c \n"
	"syscall 0 \n"
        "ftint.w.s $f0, $f0 \n"
	"vst $vr0, %[dest] \n"
        "movfcsr2gr %[fcsr_out], $r0\n"
        : [dest]"=m"(out), [fcsr_init]"=r"(fcsr_init), [fcsr_out]"=r"(fcsr_out)
        : [src]"m"(var), [fcsr_modify]"r"(fcsr_in)
    );
    printf("%x, %x, %x, %x fcsr: %x\n", var[0], var[1], var[2], var[3], fcsr_init);
    printf("%x, %x, %x, %x fcsr: %x\n", out[0], out[1], out[2], out[3], fcsr_out);
    asm (
        "movgr2fcsr $r0, %[fcsr_modify]\n"
        "movfcsr2gr %[fcsr_init], $r0\n"
	"vld $vr0, %[src] \n"
	"li.d $r11, 0x7c \n"
	"syscall 0 \n"
        "vftint.w.s $vr0, $vr0 \n"
	"vst $vr0, %[dest] \n"
        "movfcsr2gr %[fcsr_out], $r0\n"
        : [dest]"=m"(out), [fcsr_init]"=r"(fcsr_init), [fcsr_out]"=r"(fcsr_out)
        : [src]"m"(var), [fcsr_modify]"r"(fcsr_in)
    );
    printf("%x, %x, %x, %x fcsr: %x\n", var[0], var[1], var[2], var[3], fcsr_init);
    printf("%x, %x, %x, %x fcsr: %x\n", out[0], out[1], out[2], out[3], fcsr_out);
}
