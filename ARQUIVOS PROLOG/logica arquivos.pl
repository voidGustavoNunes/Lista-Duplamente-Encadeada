%Gustavo
% Todos os irm�os de Gustavo

?- gerou(ailton, X).
X = gustavo ;
X = maikon ;
X = thiago.

?- gerou(euceni, X).
X = gustavo ;
X = maikon ;
X = thiago.

%Todos os av�s maternos de Gustavo
?- gerou(X,euceni), gerou(euceni,Y).
X = ant�nio,
Y = gustavo ;
X = ant�nio,
Y = maikon ;
X = ant�nio,
Y = thiago ;
X = maria,
Y = gustavo ;
X = maria,
Y = maikon ;
X = maria,
Y = thiago.

ou

?- gerou(Y, euceni), gerou(euceni,gustavo).
Y = ant�nio ;
Y = maria .

%Todas as duplas pai/ filho da base

gerou(ailton, X), gerou(ailton, Y), gerou(ailton, Z), X\=Z, X\=Y, Y\=Z.
X = gustavo,
Y = maikon,
Z = thiago

ou



?- gerou(X, euceni).
X = ant�nio

?- gerou(X, cida).
X = ant�nio

?- gerou(X,manoel).
X = ant�nio

?- gerou(X, gustavo), X\=euceni.
X = ailton.

?- gerou(X,maikon), X\= euceni.
X = ailton.

?- gerou(X,thiago), X\=euceni.
X = ailton.


%Consultas interessantes

?- homem(X).
X = ant�nio ;
X = manoel ;
X = gustavo ;
X = ailton ;
X = maikon ;
X = thiago.

?- homem(X), mulher(Y).
X = ant�nio,
Y = maria ;
X = ant�nio,
Y = euceni ;
X = ant�nio,
Y = cida ;
X = manoel,
Y = maria ;
X = manoel,
Y = euceni ;
X = manoel,
Y = cida ;
X = gustavo,
Y = maria ;
X = gustavo,
Y = euceni ;
X = gustavo,
Y = cida ;
X = ailton,
Y = maria ;
X = ailton,
Y = euceni ;
X = ailton,
Y = cida ;
X = maikon,
Y = maria ;
X = maikon,
Y = euceni ;
X = maikon,
Y = cida ;
X = thiago,
Y = maria ;
X = thiago,
Y = euceni ;
X = thiago,
Y = cida.


%Fatos fam�lia Gustavo.

gerou(ant�nio, euceni).
gerou(maria, euceni).
gerou(ant�nio, cida).
gerou(maria, cida).
gerou(ant�nio, manoel).
gerou(maria, manoel).
gerou(euceni, gustavo).
gerou(ailton, gustavo).
gerou(euceni, maikon).
gerou(ailton, maikon).
gerou(euceni, thiago).
gerou(ailton, thiago).

homem(ant�nio).
homem(manoel).
homem(gustavo).
homem(ailton).
homem(maikon).
homem(thiago).
mulher(maria).
mulher(euceni).
mulher(cida).

