 //3. ¿Por qué la inicialización de p es legal y la de lp es 
//ilegal?
 int i = 42;
 void *p = &i;
 long *lp = &i;


 //RPTA:
 // p es un puntero de tipo void *, lo que significa que puede apuntar a cualquier tipo de dato.
