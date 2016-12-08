# Obfuscate
#### An extremely simple utility that obfuscates data by incrementing each byte.

### Usage

`obfuscate [-d]`

Obfuscate:

`echo "Hello World!" | obfuscate > output.txt`

Deobfuscate:

`cat output.txt | obfuscate -d`

### Build
This utility is so simple that I didn't use a build system. To build, run:

`gcc -o obfuscate obfuscate.c`
