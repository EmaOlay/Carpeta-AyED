def Script18_4_2023():
    print(f'Script de clase del 18/4/2023')
def calculos(arr):
    cant_zeros=0
    sum_pos=0
    cant_pos=0
    sum_neg=0
    for i in arr:
        if i==0:
            cant_zeros+=1
        elif i > 0:
            cant_pos+=1
            sum_pos+=i
        else:
            sum_neg+=i
    print(f'La cantidad de zeros es: {cant_zeros}\nEl promedio de positivos: {sum_pos/cant_pos}')
    print(f'La suma de negativos: {sum_neg}')

def cant_triangulos(arr):
    cant_equi=0
    cant_iso=0
    cant_esca=0
    if(len(arr)%3!=0): return
    
    for i in range(0, len(arr), 3):        
        if arr[i] == arr[i+1] == arr[i+2]:
            cant_equi+=1
        elif arr[i] == arr[i+1] or arr[i] == arr[i+2] or arr[i+1] == arr[i+2]:
            cant_iso+=1
        else:
            cant_esca+=1

    print(f"""Cant equi={cant_equi}
Cant iso={cant_iso}
Cant esca={cant_esca}""")


if __name__=="__main__":
    Script18_4_2023()
    arreglo=[-1,0,-1,1,1,1]
    calculos(arreglo)
    arreglo_tri=[1.0,1.0,1.0,2.0,2.0,1.0,7.2,4.5,9.8]
    cant_triangulos(arreglo_tri)