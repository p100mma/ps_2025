
def lnp1(x,eps):
  sum=0
  newsum=x
  i=1
  while abs(sum - newsum) >= eps:
    i+=1
    sum=newsum
    newsum=newsum + (((-1)**(i-1))/i)*(x**i)
  return newsum, i


lnp_08, n_kroków =lnp1(0.8,1e-30)

print(f"mynik : {lnp_08:.6f}, kroków: {n_kroków}")
