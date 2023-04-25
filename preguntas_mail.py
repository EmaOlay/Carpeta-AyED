# 1
# Sea:
# AA+BB=CBC, siendo A,B,C enteros de un digito en el rango [1..9] que valor deberán tener para que se cumpla la igualdad.
# Describa como lo resolvio: Fuerza bruta o iteracion
# la unica solucion posible es 121
# una alternativa a esto es simplemente evaluar los extremos de la solucion posible:
# considerando que como minimo el numero CBC podria valer 111 ya que necesita 3 digitos en el rango [1..9] y el maximo posible de sumar 99+99=198
# los unicos numeros en ese rango [111..198] cuyo primer numero y ultimo numero son 1 serian 1[1..9]1 y de estos el unico que podemos formar
# con los AA y BB a nuestra disposicion es 121
for i in range(1,10):
    aa=i+10*i
    # print(aa)
    for j in range(1,10):
        bb=j+10*j
        suma=aa+bb
        if (suma>100 and str(suma)[0]==str(suma)[-1]):#descarto todos los inferiores a 100 ya que por consigna CBC seria de 3 dijitos y como minimo 111
            #convierto suma a str para poder indexarlo y asi comparar su primer digito y ultimo digito
            print(f"solucion: AA={aa}, BB={bb},CBC={suma} ya que {aa}+{bb}={suma}")

# 2
# en un campo se encuentran un conjunto de jirafas y avestruces, todos animales sanos.
# Si se sabe que hay 30 ojos y 44 patas, cuantos animales de cada especie hay?
# justifique su razonamiento
# Partiendo de la consigna deben haber 15 animales ya que cada animal tendra 2 ojos.
# Sabiendo eso solo queda distribuir las 44 patas en conjuntos de 4 y 2 hasta que los mismos sumen 15
# Con lo cual resultan 2 ecuaciones con 2 incognitas:
# 4J+2A=44 #cantidad de patas
# J+A=15 #cantidad de animales
# de aqui resulta que hay 7 Jirafas y 8 Avestruces

# 3
# Este es complicado de explicar, es lo que se conoce como un cuadrado magico, el mismo tiene reglas verbales de como construirlo.
# Pero se me complicaria pasarlo a formulas de orden N.
# una implementacion de esto seria:
#Inicio:
def CuadradoMagico():
    tamano=int(input("Ingrese el tamaño del Cuadro impar: "))
    cte_magica=tamano*(pow(tamano,2)+1)/2
    print(f'Valor de la constante magica={cte_magica}')
    centro=int(tamano/2)
    cuadro=[[0 for i in range(tamano)] for i in range(tamano)]
    cuadro[0][centro]=1

    #Variables:
    num=1
    fila=0
    columna=centro

    #Proceso:
    for i in range((tamano*tamano)-1):    
        num=num+1
        ubifila=fila
        fila=fila-1
        ubicolumna=columna
        columna=columna-1
        #Logica de ubicacion
        if fila<0:        
            fila=tamano-1
        if columna<0:        
            columna=tamano-1
        #Logica de llenado
        if cuadro[fila][columna]==0:
            cuadro[fila][columna]=num       
        elif cuadro[fila][columna]!=0:
            fila=fila+1
            if fila>0:        
                fila=ubifila+1
            columna=ubicolumna
            cuadro[fila][columna]=num

    #Impresion:
    for n in range(tamano):    
        print(str(cuadro[0:tamano][n]))

if __name__=="__main__":
    CuadradoMagico()