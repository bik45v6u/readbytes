DISCLAMER: HAS NOT BEEN AUDITED FOR SECURITY, USE AT YOUR OWN RISK

simple cli utility to read raw bytes from file, prints contents in ascii, signed integer, unsigned integer and hexidecimal in csv format.  written in c++

Requires: c++ compiler w/ ability to compile c++ standard version 20+ (Ex. gcc main.cpp --std=c++20)

usage:

./(excecutable) (file to be read) (number of bytes to read) (where to start (optional))

example:
./readbytes test.txt 10 >> output.csv

user will be prompted for required arguements if not provided

This project is licensed under the MIT License
