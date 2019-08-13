echo "test str = 0 | base =  01 | expected result = 0"
./a.out 0 01
echo "test str = 0 | base =  0123456789abcdefghijklm | expected result = 0"
./a.out 0 0123456789abcdefghijklm
echo "test str = 0 | base =  0123456789abcdef | expected result = 0"
./a.out 0 0123456789abcdef
echo "test str = 0 | base =  0123456789 | expected result = 0"
./a.out 0 0123456789
echo "test str = -2147483648 | base = 0123456789 | expected result = -2147483648"
./a.out "-2147483648" 0123456789
echo "test str = 2147483647  | base = 0123456789 | expected result = 2147483647"
./a.out "2147483647" 0123456789
echo "test str = 9  | base = 0123456789abcdefghijklm | expected result = 9"
./a.out 9 0123456789abcdefghijklm
echo "test str = 9  | base = 0123456789abcdef | expected result = 9"
./a.out 9 0123456789abcdef
echo "test str = 9  | base = 0123456789 | expected result = 9"
./a.out 9 0123456789
echo "test str = 10  | base = 01 | expected result = 2"
./a.out 10 01
echo "test str = 10  | base = 0123456789abcdefghijklm | expected result = 23"
./a.out 10 0123456789abcdefghijklm
echo "test str = 10  | base = 0123456789abcdef | expected result = 16"
./a.out 10 0123456789abcdef
echo "test str = 10  | base = 0123456789 | expected result = 10"
./a.out 10 0123456789
echo "test str = --2147483648  | base = 0123456789 | expected result = -2147483648"
./a.out "--2147483648" 0123456789
echo "test str = ---2147483647  | base = 0123456789 | expected result = 2147483647 "
./a.out "---2147483647" 0123456789
echo "test str = -+-++++2147483648  | base = 0123456789 | expected result = -2147483648"
./a.out -+-++++2147483648 0123456789
echo "test str = 80F52   | base = 0123456789ABCDEF | expected result = 528210"
./a.out 80F52  0123456789ABCDEF
echo "test str = 26  | base = 0123456789ABCDEF | expected result = 38"
./a.out 26 0123456789ABCDEF
echo "test str = 11111111   | base = 01 | expected result = 255 "
./a.out 11111111 01

# Check chiffre Hexa Atoi
echo "test str = 5F   | base = 0123456789ABCDEF | expected result = 95 "
./a.out 5F 0123456789ABCDEF
echo "test str = 5f   | base = 0123456789abcdef | expected result = 95 "
./a.out 5f 0123456789abcdef
echo "test str = FF   | base = 0123456789ABCDEF | expected result = 255"
./a.out FF 0123456789ABCDEF
echo "test str = 1c8  | base = 0123456789abcdef | expected result = 456"
./a.out 1c8 0123456789abcdef

# Check base aucun retour
echo "test str = 0   | base = 0 | expected result = 0"
./a.out 0 0
echo "test str = 10   | base = 1 | expected result = 0"
./a.out 10 1
echo "test str = 20   | base = 012342 | expected result = 0"
./a.out 20 012342
echo "test str = 20   | base = "012345-789" | expected result = 0"
./a.out 20 "012345-789"
echo "test str = 20   | base = "012345   6789" | expected result = 0"
./a.out 20 "012345   6789"

# CHECK AVEC DES CARACTÈRES HORS BASE DANS STR ENTRE DES CHIFFRES
echo "test str = --2548d2554   | base = "0123456789" | expected result = 2548 "
./a.out "  --2548d2554" "0123456789"
echo "test str = "\n\t---42awa9"   | base = "0123456789" | expected result = -42"
./a.out "
---42awa9 " "0123456789"
echo "test str = -+-+-+-+-+--112  52  | base = "0123456789" | expected result = -112"
./a.out " -+-+-+-+-+--112  52" "0123456789"
echo "test str = "  10a10b  | base = "0123456789ab" | expected result = a"
./a.out "  10a10b " "0123456789ab"
