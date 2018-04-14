#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Pide un numero por consola y lo almacena en una variable de tipo flotante.
 * \param Mensaje a mostrar
 *
 * \return Devuelve el numero flotante solicitado
 *
 */
float pedirNumero();

/** \brief Calcula la suma de dos numeros flotantes
 *
 * \param Primer numero a sumar
 * \param Segundo numero a sumar
 * \return Suma de ambos numeros
 *
 */
float calcularSuma(float, float);

/** \brief Calcula la resta de dos numeros flotantes
 *
 * \param Primer numero a restar
 * \param Segundo numero a restar
 * \return Resta de ambos numeros
 *
 */
float calcularResta(float, float);

/** \brief Calcula la division de dos numeros flotantes
 *
 * \param Primer numero como dividendo
 * \param Segundo numero como divisor
 * \return Division de ambos numeros
 *
 */
float calcularDivision(float, float);

/** \brief Calcula la multiplicacion de dos numeros
 *
 * \param Primer numero como factor
 * \param Segundo numero como factor
 * \return El producto de ambos numeros
 *
 */
float calcularMultiplicacion(float, float);

/** \brief Calcula el factorial de un numero entero menor 13 y mayor o igual 0
 *
 * \param Numero del que quiero calcular el factorial
 * \return El factorial del numero
 *
 */
unsigned long calcularFactorial(int);


#endif // FUNCIONES_H_INCLUDED
