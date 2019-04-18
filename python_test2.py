import sys

f = open("test_file.txt", "r")
val = int(f.read())
final_val = val * val
sys.stdout.write(str(final_val) + "\n")
