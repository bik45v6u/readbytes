DISCLAMER: HAS NOT BEEN AUDITED FOR SECURITY, USE AT YOUR OWN RISK

simple cli utility to read characters from file, prints contents in ascii, signed integer, unsigned integer and hexadecimal in csv format.  written in c++

Requires: c++ compiler w/ ability to compile c++ standard version 20+ (Ex. gcc main.cpp --std=c++20)

usage:

./(executable) (file to be read) (number of characters to read) (where to start (optional))

example:
./readbytes test.txt 10 >> output.csv

user will be prompted for required arguments if not provided

This project is licensed under the MIT License
