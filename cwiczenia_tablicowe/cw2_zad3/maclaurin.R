
lnp1<-function(x, eps){
sum<-0
newsum<-x
i<-1
while( abs(sum - newsum) >= eps){
i<- i +1
sum<- newsum
newsum<- newsum + (((-1)^(i-1))/i)*(x^i)
}
attr(sum, "n_steps")<- i
return(sum)
}


lnp1(x=0.8,eps=1e-30)-> lnp_08


print(
sprintf("wynik:  %.6f, n kroków: %d",
		lnp_08, attr(lnp_08, "n_steps"))
      )
