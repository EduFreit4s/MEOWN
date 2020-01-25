import requests

while(True) :
   valor = input("Informe um valor: ")
   r = requests.post("https://meown-engine.herokuapp.com/upload", json={"TEMPO":valor})
   print(r.status_code)
   print(valor)
