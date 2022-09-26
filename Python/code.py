
import sys
 
sys.stdout = open("output.txt", "w")
sys.stdin =  open("input.txt", "r")


a = input("give a input : ")
print(f"Hey, {a}")

