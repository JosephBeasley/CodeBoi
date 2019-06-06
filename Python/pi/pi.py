#!/usr/bin/env python3
import time
def make_pi(num):
    q, r, t, k, m, x = 1, 0, 1, 1, 3, 3
    for j in range(num):
        if 4 * q + r - t < m * t:
            yield m
            q, r, t, k, m, x = 10*q, 10*(r-m*t), t, k, (10*(3*q+r))//t - 10*m, x
        else:
            q, r, t, k, m, x = q*k, (2*q+r)*x, t*x, k+1, (q*(7*k+2)+r*x)//(t*x), x+2
def main():  # Wrapper function
    my_array=[]
    finder=input("Enter what number you want to find: ")
    pi_digits = int(input("Enter the number of decimals to calculate to: "))
    start = time.time()
    for i in make_pi(pi_digits):
            my_array.append(str(i))
    #f = open("pi.txt","w")

    print("".join(my_array))
    pistr=str(my_array).find(str(finder))
    print(pistr)
    #i = 0
    #for d in pi_digits:
    #        f.write(str(d))
    #        i += 1
    #        i = 0
    end = time.time()
    #f.close()
    #f= open("pi.txt","r")
    print("Time to run was: {:.2f} seconds".format(end - start))
if __name__ == '__main__':
    main()