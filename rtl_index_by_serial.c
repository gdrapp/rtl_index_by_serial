#include <stdio.h>
#include <stdlib.h>
#include <rtl-sdr.h>

void usage(void)
{
  printf("rtl_index_by_serial, get the RTL2832 device index by device serial number\n\n"
	 "Usage: rtl_index_by_serial serial_number\n"
	  "Returns:\n"
	  "\tDevice index of first matching device found\n"
	  "\t-2 if no devices were found at all\n"
	  "\t-3 if devices were found, but none with matching serial number\n");
}

int main(int argc, char **argv)
{
  if (argc != 2) {
    printf("ERROR: Invalid number of arguments supplied.\n\n");
    usage();
    exit(EXIT_FAILURE);
  }

  int idx = rtlsdr_get_index_by_serial(argv[1]);
  printf("%d\n", idx);

  return EXIT_SUCCESS;
}
