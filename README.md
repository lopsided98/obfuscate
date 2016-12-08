# Obfuscate
#### An extremely simple utility that obfuscates data by incrementing each byte.

### Background

This program reads data from stdin, increments (or decrements, if the `-d` flag
is present) each byte and prints to stdout. This utility was created as part of
a system to allow a SSH connection to slip through a firewall. I am not
responsible if you get in trouble for using it in this manner.

### Usage

`obfuscate [-d]`

Obfuscate:

`echo "Hello World!" | obfuscate > output.txt`

Deobfuscate:

`cat output.txt | obfuscate -d`

### Build
This utility is so simple that I didn't use a build system. To build, run:

`gcc -o obfuscate obfuscate.c`
