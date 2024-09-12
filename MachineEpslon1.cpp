// #include <iostream>
// using namespace std;
// #include <iomanip>

// int main() {
//     float z = 1.0f; 
//     int n = 0; // итерации

//     while (1.0f + z != 1.0f) {
//         z /= 10.0f; 
//         n++;
//     }

//     // чтобы вернуть последний z, который ещё был больше 1 (непонятная штука)
//     z *= 10.0f;

//     cout << "Машинный эпсилон float: " << z << endl;  // setprecision(7)
//     /* тут ответ 1e-07 */ 
//     cout << "Итераций " << n << endl;

//     return 0;
// }

// int main() {
    
//     float Epslon = 1.0f; // float использует 4 байта (32 бита) // пишем f Дважды тк по умолчанию переводятся в double
//     // имеет 7 десятичных цифр точности
    
//     while (1.0f + Epslon != 1.0f) { // цикл работает до тех пор, пока сумма 1.0f и Epslon больше 1.0f. Пока Epslon достаточно велик, чтобы влиять на результат сложения
//         Epslon /= 2.0f; //  будет делить на 2.0f пока Epslon не станет настолько мелким, что не будет влиять на 1.0f + Esplon
//     }
    
//     Epslon *= 2.0f;  // Возвращаем последнее значение, которое всё ещё было больше 1

//     cout << "Машинный эпсилон для float: " << Epslon << endl;
//     /* тут ответ 1.19209e-07 */

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <iomanip>

// int main() {
//     double z = 1.0; 
//     int n = 0; 

//     while (1.0 + z != 1.0) {
//         z /= 10.0;
//         n++;
//     }

//     z *= 10.0;   

//     cout << "Машинный Epslon для double64: " << z << endl;
//     /* тут ответ 1e-15 */
//     cout << "итераций " << n << endl;

//     return 0;
// }

// int main() {
//     double Epslon = 1.0;
//     // double использует 8 байтов (64 бита) and has about 15-17 decimal digits of precision
    
//     while (1.0 + Epslon != 1.0) {
//         Epslon /= 2.0;
//     }
    
//     Epslon *= 2.0;
//     cout << "Машинный эпсилон для double64 " << fixed << setprecision(15) << Epslon << endl;
//     /* ответ: 2.22045e-16 */

//     return 0;
// }

