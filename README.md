# tp01-2022-tomicon
## .gitignore
En este pequeño texto, analizaremos que es un archivo .gitignore y cuales son algunas de sus utilidades
### Qué es un archivo .gitignore?
El archivo .gitignore, es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.
### Para qué es conveniente utilizarlo?
Este tipo de archivos son convenientes para ahorrar espacio en el repositorio, ya que a veces se crean artefactos de compilación o archivos generados por el equipo que son inservibles en el repositorio. tambien puede resultar util ignorar archivos que por algun motivo aun no se quiere subir.
### Cuando se debe hacer?
.gitignore se debe hacer en caso de que querramos no incluir algún archivo por cualquiera de las razones descritas en el párrafo anterior
### Cómo configuraría el archivo .gitignore?
Para crear un archivo .gitignore local, se crea un archivo de texto y se le asigna el nombre ".gitignore". Luego, se edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

<!--  
 Las entradas de este archivo también pueden seguir un patrón coincidente:

* se utiliza como una coincidencia comodín.
/ se usa para ignorar las rutas relativas al archivo .gitignore. 
# es usado para agregar comentarios 
 -->
 Para agregar o cambiar tu .gitignore global, se debe ejecutar el siguiente comando en la terminal:

git config --global core.excludesfile ~/.gitignore_global