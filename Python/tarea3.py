# capitalize: Convierte la primera letra de una cadena en mayúscula y el resto en minúscula.
texto = "hola, mundo!"
capitalizado = texto.capitalize()
print(capitalizado)  # Salida: "Hola, mundo!"

# center: Centra una cadena en un campo de ancho especificado, llenando con caracteres opcionales en los lados.
cadena = "Python"
centrado = cadena.center(10, "*")
print(centrado)  # Salida: "**Python**"

# count: Cuenta cuántas veces aparece una subcadena en una cadena.
frase = "La vida es bella, la vida es corta."
conteo = frase.count("vida")
print(conteo)  # Salida: 2

# decode y encode: Convierten una cadena codificada en bytes y viceversa utilizando una codificación específica.
cadena_bytes = b'Hello, world!'
cadena_decodificada = cadena_bytes.decode('utf-8')
print(cadena_decodificada)  # Salida: "Hello, world!"

cadena_codificada = cadena_decodificada.encode('utf-8')
print(cadena_codificada)  # Salida: b'Hello, world!'

# endswith: Verifica si una cadena termina con una subcadena especificada.
archivo = "documento.txt"
if archivo.endswith(".txt"):
    print("Es un archivo de texto.")

# expandtabs: Reemplaza los caracteres de tabulación ('\t') en una cadena con espacios.
texto_con_tabs = "Python\tes\tgenial"
texto_sin_tabs = texto_con_tabs.expandtabs(4)
print(texto_sin_tabs)  # Salida: "Python  es  genial"

# find: Encuentra la primera ocurrencia de una subcadena en una cadena y devuelve su índice.
frase = "El perro corre en el parque."
indice = frase.find("corre")
print(indice)  # Salida: 9

# format: Formatea una cadena con valores especificados.
nombre = "Juan"
edad = 30
mensaje = "Hola, mi nombre es {} y tengo {} años.".format(nombre, edad)
print(mensaje)  # Salida: "Hola, mi nombre es Juan y tengo 30 años."

# lower: Convierte una cadena a minúsculas.
texto = "Hola Mundo"
minusculas = texto.lower()
print(minusculas)  # Salida: "hola mundo"

# replace: Reemplaza todas las ocurrencias de una subcadena en una cadena con otra subcadena.
frase = "Python es genial, Python es poderoso."
nueva_frase = frase.replace("Python", "Java")
print(nueva_frase)  # Salida: "Java es genial, Java es poderoso."

# split: Divide una cadena en una lista de subcadenas utilizando un delimitador especificado.
frase = "Hola, cómo estás, amigo?"
palabras = frase.split(", ")
print(palabras)  # Salida: ['Hola', 'cómo estás', 'amigo?']
