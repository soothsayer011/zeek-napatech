# @TEST-EXEC: zeek -NN Bro_Napatech::bro-napatech |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
