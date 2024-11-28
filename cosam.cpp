#include <iostream>
#include <cstdlib>

void printArr(int arr[], int size) {
    std::cout << "Arr: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}

void genRandomNums(int arr[], int size, int startScope = INT_MIN, int endScope = INT_MAX) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % endScope - startScope + startScope;
    }
}

int main()
{
    srand(time(NULL));


    //===================zadania tablice i petle - uzywamy tylko zwyklych tablic a nie vectora itp.


    /*-------------------------------------------
   * utworz tablice N elementow (przyjmijmy ze N=5) - na ma byc w sta�ej.
   * wczytaj do niej N liczb z klawiatury cin'em
   * wyswietl t� tablice
   */

    //const int N = 5;
    //int arr[N];
    //for (auto& element : arr) {
    //    std::cin >> element;
    //}

    //printArr(arr, N);
    //std::cout << std::endl;

    /*-------------------------------------------
    * wyswietl wszystkie elementy tablicy na 3 sposoby: forem, foreach, whilem
    *
    */

    //for (int i = 0; i < N; i++) {
    //    std::cout << arr[i] << "  ";
    //}
    //std::cout << std::endl;

    //for (auto num : arr) {
    //    std::cout << num << "  ";
    //}
    //std::cout << std::endl;

    //int j = 0;
    //while (j < N) {
    //    std::cout << arr[j] << "  ";
    //    j++;
    //}
    //std::cout << std::endl;

    /*-------------------------------------------
     * utworz tablice N=10 elementow np short bez znaku
     * wygeneruj do tej tablicy N losowych liczb z zakresu 0-30
     * wyswietl j�
     * ponies wszystkie elementy tablicy do kwadratu
     * wyswietl
     */

    //const int secondArrSize = 10;
    //int secondArr[secondArrSize];
    //genRandomNums(secondArr, secondArrSize, 0, 30);
    //printArr(secondArr, secondArrSize);

    //for (auto& number : secondArr) {
    //    number = pow(number, 2);
    //}
    //printArr(secondArr, secondArrSize);

    /*-------------------------------------------
    * utworz tablice 10 elemeentow.
    * pobierz cin>>k . jesli k= np 3, to wprowadz do tablicy ciag 3,6,9 itd.. jesli 4 to 4,8,12 itd...
    * wyswietl tablice
    * wyswietl tablice od tylu
    */

    //const int thirdArrSize = 10;
    //int thirdArr[thirdArrSize];
    //int k;
    //std::cout << "Podaj o ile kolejne liczby z tablicy trzeciej maja sie zwiekszac" << std::endl;
    //std::cin >> k;
    //for (int i = 0; i < thirdArrSize; i++) {
    //    thirdArr[i] = k;
    //    k += k;
    //}
    //printArr(thirdArr, thirdArrSize);
    //for (int i = thirdArrSize - 1; i >= 0; i--) {
    //    std::cout << thirdArr[i] << "  ";
    //}

    /*-------------------------------------------
    * utworz tablice 10 losowych elementow
    * wyswietl
    * wypisz najwiekszy element oraz jego index.
    * znajdz drugi najwiekszy i jego index :)
    */

    //const int fourthArrSize = 10;
    //int fourthArr[fourthArrSize];
    //genRandomNums(fourthArr, fourthArrSize);
    //printArr(fourthArr, fourthArrSize);
    //for (int i = 0; i < fourthArrSize; i++) {
    //    for (int j = 0; j < fourthArrSize - i - 1; j++) {
    //        if (fourthArr[j] > fourthArr[j + 1]) {
    //            std::swap(fourthArr[j], fourthArr[j + 1]);
    //        }
    //    }
    //}
    //std::cout << "Posortowana 4-ta tablica (Potencjalnie do poprawy na proste wsyzukiwanie maksow, zamiast 0(n^2) O(n)):" << std::endl;
    //printArr(fourthArr, fourthArrSize);
    //std::cout << "Maksymalny element z 4-tej tablicy: " << fourthArr[0] << std::endl;
    //std::cout << "Drugi maksymalny element: " << fourthArr[1] << std::endl;


    /*-------------------------------------------
    * utworz tablice 10 losowych elementow z zakresu 1-4
    * podaj k
    * wypisz ile razy k wystepuje w tablicy
    */

    //const int fifthArrSize = 10;
    //int fifthArr[fifthArrSize];
    //genRandomNums(fifthArr, fifthArrSize, 1, 4);
    //std::cout << "Piata tablica" << std::endl;
    //printArr(fifthArr, fifthArrSize);
    //std::cout << "Wpisz liczbe szukana w piatej tablicy" << std::endl;
    //int numToFind;
    //std::cin >> numToFind;

    //int counter = 0;
    //for (auto element : fifthArr) {
    //    if (element == numToFind) {
    //        counter++;
    //    }
    //}
    //std::cout << "Liczba: " << numToFind << " Wystepuje w tablicy: " << counter << " razy" << std::endl;

    /*-------------------------------------------
    * podaj cin >>N
    * za pomoc� petli for oraz while - wylicz silnia N (silnia 3 = 3! = 1x2x3 = 6)
    *
    */

    //std::cout << "Podaj liczbe do silni" << std::endl;
    //int input;
    //std::cin >> input;

    //int factorialFor = 1;
    //for (int i = input; i > 0; i--) {
    //    factorialFor *= i;
    //}
    //std::cout << "Silnia z fora: " << factorialFor << std::endl;

    //int factorialWhile = 1;
    //while (input > 0) {
    //    factorialWhile *= input;
    //    input--;
    //}
    //std::cout << "Silnia z whila: " << factorialWhile << std::endl;

    /*-------------------------------------------
    * podaj liczb� N
    * wypisz czy liczba jest pierwsza (liczba pierwsza dzieli sie tylko przez 1 i siebie)
    */

    //std::cout << "Podaj liczbe do sprawdzenia czy jest pierwsza" << std::endl;
    //int input2;
    //std::cin >> input2;
    //int divider = 2;
    //bool isPrime = true;
    //while (divider <= std::sqrt(input2)) {
    //    if (input2 % divider == 0) { isPrime = false; break; }
    //    divider++;
    //}

    //if (isPrime)
    //    std::cout << "Pierwsza" << std::endl;
    //else
    //    std::cout << "Nie pierwsza" << std::endl;

    /*-------------------------------------------
    * wpisz wyraz do stringa
    * sprawdz czy wyraz jst polindromem (czyli czyta sie tak samo od lewej i prawej np:
    * aaabbaaa = jest
    *
    */

    //std::cout << "Wpisz tekst do sprawdzenia czy jest palindormem" << std::endl;
    //std::string text;
    //std::cin >> text;
    //int left = 0;
    //int right = text.length() - 1;
    //bool isPalindrome = true;
    //while (left < right) {
    //    if (text[left] != text[right]) { isPalindrome = false; break; }
    //    else { left++; right++; }
    //}
    //if (isPalindrome)
    //    std::cout << "Palindrom" << std::endl;
    //else
    //    std::cout << "Nie palindrom" << std::endl;


    /*-------------------------------------------
    * wprowadz do stringa 8 znakow - "haslo"
    * sprawdz i wypisz czy haslo zawiera co najmniej: 2 duze litery, 2 male, 2 cyfry
    *
    */

    //std::string password = "adJaA10f";
    //int capitalsCount = 0;
    //int digitsCount = 0;
    //int lowercasesCount = 0;
    //bool isStrong = false;
    //for (auto character : password) {
    //    if (lowercasesCount >= 2 && capitalsCount >= 2 && digitsCount >= 2) {
    //        isStrong = true;
    //        break;
    //    }

    //    else if (character >= 'a' && character <= 'z') { lowercasesCount++; }
    //    else if (character >= 'A' && character <= 'Z') { capitalsCount++; }
    //    else if (character >= '0' && character <= '9') { digitsCount++; }
    //}

    //if (isStrong)
    //    std::cout << "Haslo jest silne" << std::endl;
    //else
    //    std::cout << "Haslo nie jest silne" << std::endl;

    /*-------------------------------------------
   * utworz tablice 10 losowych elementow  z zakresu 0-15
   * podaj k
   * wypisz tablice
   * dla elementow  <k - ustaw tablice na 0
   * wypisz tablice
   */

    //const int sixthArrSize = 10;
    //int sixthArr[sixthArrSize];
    //genRandomNums(sixthArr, sixthArrSize, 0, 15);
    //int comparer;
    //std::cout << "Wpisz liczbe - kazda mniejsza od niej w tavlicy bedie zamieniona na 0" << std::endl;
    //std::cin >> comparer;
    //std::cout << "Szosta tablica" << std::endl;
    //printArr(sixthArr, sixthArrSize);
    //for (auto& elem : sixthArr) {
    //    if (elem < comparer)
    //        elem = 0;
    //}
    //std::cout << "Szosta tablica po zmianach" << std::endl;
    //printArr(sixthArr, sixthArrSize);

   /*-------------------------------------------
   * zrob zamiane liczby z dziesietnej na binarna
   * algorytm:  liczba np 6
   * 6 :2 = 3 reszta 0
   * 3:2 = 1 r 1
   * 1:2 = 0 r 1
   * wynik = 110 (czytamy od dolu te reszty)
   */

    //std::cout << "Podaj liczbe do zamiany na binarke" << std::endl;
    //int inputForBinary;
    //std::cin >> inputForBinary;
    //std::string binaryValue = "";
    //while (inputForBinary > 0) {
    //    bool bit = inputForBinary % 2;
    //    inputForBinary /= 2;
    //    binaryValue += (char)bit + '0';
    //}
    //std::reverse(binaryValue.begin(), binaryValue.end());
    //std::cout << "Binarna wartosc liczby: " << binaryValue << std::endl;

   /*------------------------
    -------------------
    * przepisz algorytm zamiany powyzszy - zeby obslugiwal dowolny system tj czworkowy, osemkowy, piatkowy itd...
    */


    /*-------------------------------------------
       *  napisz program pobierajacy 5 wyrazow i wpisujacy je do tablicy 5 elementow
       wyswietl tablice
       */


       /*-------------------------------------------
       * zrob zamiane liczby binarnej na dziesi�tn� (liczbe binarn� trzymac w stringu)
       * algorytm: liczba = 110
       * wynik = 1*2^2 + 1* 2^1 + 0 * 2^0 = 6
       */

       /*-------------------------------------------
        * przepisz algorytm zamiany powyzszy - zeby obslugiwal dowolny system tj czworkowy, osemkowy, piatkowy itd...
        */





}
