print("hello world")

l=0
m=10
n=1

for i in range(l,m,n):
	x=int(input("Enter a number:"))
	y=5

	if x<10:
		a=x*y
		print(a)
	elif x is 10 and y==6:
		print("ten!")
	elif x>=1000:
		print("large number")
	else:
		b=x/y
		print(b)