import sys

val1 = sys.argv[1]
val2 = sys.argv[2]

f = open("test_file.txt", "w")
f.write(str(int(val1) + int(val2)))
f.close()
