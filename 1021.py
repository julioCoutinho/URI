valor= float(input());
while((valor<0)or(valor>1000000.00)):
    valor= float(input());
n100=0;
n50=0;
n20=0;
n10=0;
n5=0;
n2=0;
m100=0;
m50=0;
m25=0;
m10=0;
m5=0;
m1=0;
while(valor>=100):
    n100=n100+1;
    valor= valor-100;
while(valor>=50):
    n50=n50+1;
    valor= valor - 50;
while(valor>=20):
    n20=n20+1;
    valor=valor-20;
while(valor>=10):
    n10=n10+1;
    valor=valor-10;
while(valor>=5):
    n5=n5+1;
    valor=valor-5;
while(valor>=2):
    n2=n2+1;
    valor=valor-2;
while(valor>=1):
    m100=m100+1;
    valor=valor-1;
valor = float("%.2f" % valor)
if(int(valor/0.50)>=1):
    m50=m50+1;
    valor=valor-(m50*0.50);
valor = float("%.2f" % valor)
if(int(valor/0.25)>=1):
    m25=int(valor/0.25);
    valor=valor-(m25*0.25);
valor = float("%.2f" % valor)
if(int(valor/0.10)>=1):
    m10= int(valor/0.10)
    valor=valor-(m10*0.10);
valor = float("%.2f" % valor)
if(int(valor/0.05) >= 1):
    m5=int(valor/0.05);
    valor=valor-(m5*0.05);
valor = float("%.2f" % valor)
if(int(valor/0.01) >= 0.998):
    m1 = int(valor/0.01);

print('NOTAS:')
print(n100,"nota(s) de R$ 100.00");
print(n50,"nota(s) de R$ 50.00");
print(n20,"nota(s) de R$ 20.00");
print(n10,"nota(s) de R$ 10.00");
print(n5,"nota(s) de R$ 5.00");
print(n2,"nota(s) de R$ 2.00");
print('MOEDAS:');
print(m100,"moeda(s) de R$ 1.00");
print(m50,"moeda(s) de R$ 0.50");
print(m25,"moeda(s) de R$ 0.25");
print(m10,"moeda(s) de R$ 0.10");
print(m5,"moeda(s) de R$ 0.05");
print(m1,"moeda(s) de R$ 0.01");