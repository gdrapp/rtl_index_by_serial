# rtl_index_by_serial

rtl_index_by_serial will return the RTL-SDR device index for the provided serial number

## Compiling

```bash
gcc rtl_index_by_serial.c -lrtlsdr -o rtl_index_by_serial
```

## Usage
```bash
./rtl_index_by_serial 10
0

./rtl_index_by_serial NON_EXISTANT_SERIAL
-3
```

## License
[MIT](https://choosealicense.com/licenses/mit/)