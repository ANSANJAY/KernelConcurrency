Maximum number of processors that an SMP kernel could support

$ grep NR_CPUS /boot/config-`uname -r`

You can override this with the nr_cpus kernel parameter in the bootloader command line.

nr_cpus=12

Use num_online_cpus() function to get the number of cpus online.

