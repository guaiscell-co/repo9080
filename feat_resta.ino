# repo9080
 int extNum, restaDigit = 0, numEntero;
    cout << "Ingrese un numero entero: ";
    cin >> numEntero;
    while(numEntero != 0) {
        extNum = numEntero % 10;
        numEntero /= 10;
        restaDigit += extNum;
    }
    cout << "La suma de los digitos es: " << restaDigit << endl;
    return 0;
Texto con cambio numero 2
