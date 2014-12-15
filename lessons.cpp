// Lesson #1

// var #4
#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	float a,b; // Объявляем переменные
	std::cout << "Include weight: "; std::cin >> a; // Запрашиваем ширину
	std::cout << "Include lenght: "; std::cin >> b; // Запрашиваем длину
	std::cout << "S = " << a*b << std::endl; // Считаем и выводим результат на экран
	return 0;
}

// var #10
#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	float km; // Объявляем переменную результата
	const float ML_SIZE = 1609.3; // Объявляем и определяем постоянную переменную размерности
	std::cout << "Введите расстояние в милях: "; // Выводим приветствие
	std::cin >> km; // Принимаем расстояние в милях
	km = km * ML_SIZE / 1000; // Расчитываем результат
	std::cout << km << std::endl; // Выводим результат
	return 0;
}

// Lesson #2

// var #4

#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	float a, b; // Объявляем переменные
	char meth; // Объявляем переменную типа
	std::cout << "Include R1 in OM: "; std::cin >> a; // Запрашиваем сопротивление R1
	std::cout << "Include R2 in OM: "; std::cin >> b; // Запрашиваем сопротивление R2
	std::cout << "Include method (s/p): "; std::cin >> meth; // Запрашиваем метод подключения
    if (meth != 's' || meth != 'p') { // Проверяем правильность ввода метода
        std::cout << "Include method (s/p): "; std::cin >> meth;
    }
	switch (meth){ // Ветвление SWITCH определяет для какого метода считать
    case 's':
        std::cout << "Req in series = " << a + b << std::endl; // Последовательное
        break;
    case 'p':
        std::cout << "Req parallele = " << 1/((1/a) + (1/b)) << std::endl; // Параллельное
        break;
    default:
        std::cout << "Error" << std::endl; // Переопределяем действие по умолчанию
        break;
	}
	return 0;
}


//var #10
#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	float a; // Объявляем переменную
	std::cout << "Введите число: "; // Приветствие
	std::cin >> a; // Запрашиваем значение
	int b = static_cast<int>(a); // Отрезаем целую часть с помощью явного преобразования типов
	a = a-b; // Отнимаем целую часть
	if(a > 0 || a < 0){ // Проверка на целое число
		std::cout << "Число не является целым" << std::endl;
	}
	else{
		std::cout << "Число является целым" << std::endl;
	}
	return 0;
}

// lesson #3
// var #4

#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	int max, res; // Объявляем переменные
	std::cout << "Input num: "; std::cin >> max; // Запрашиваем количество чисел для сложения
	for(int j = 1; j <= max; j++){ // Условие работы цикла
		res += j; // Суммируем числа
	}
	std::cout << "Result: " << res << std::endl; // Выводим результат
	return 0;
}

// var #10
#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	short x = -4; // Определяем стартовую отметку координаты X
	short y; // Объявляем переменную координаты Y
	while(x <= 4){ // В условии цикла определяем конечную координату X
		if(x < 0){ // Проверяем координату X на отрицательность
			y = x * -1; // Определяем координату Y как модуль координаты X
			std::cout << "X = " << x << "; Y = " << y << std::endl; // Выводим результат
		}
		else{
			std::cout << "X = " << x << "; Y = " << x << std::endl; // Т.К. Числа положительные Y = X. Выводим результат
		}
        x++; // Увеличиваем значение координаты X на единицу
	}
}

// lesson #4
// var 4
#include <iostream> // Подключаем библиотеку ввода/вывода
int main(){
	const int SIZE = 5; // Определяем размер массива как постоянный
	float summ; // Объявляем переменную результата
	float arr[SIZE] = {2,2,3,4,5}; // Опрееляем массив размера SIZE
	for (int j = 0; j < SIZE-1;j++){ // В условии цикла указываем SIZE-1 для исключения последнего элемента массива
		summ += arr[j]; // Складываем элемены массива
	}
	std::cout << "Result: " << summ / (SIZE-1); << std::endl; // Вычисляем и выводим среднее арифметическое
	return 0;
}

// var 10

#include <iostream>
int main(){
    size_t size;    // Объявляем переменную для хранения объёма массива
    std::cout << "Введите размер массива: ";
    std::cin >> size; // Считываем размер массива
	int arr[size]; // Объявляем массив с размером size
    for (int j = 0; j < size; j++) { // Считываем значения элементов массива
        std::cout << "Введите " << j+1 << "-e число: ";
        std::cin >> arr[j];
    }
    for(int i = 0; i < size - 1; ++i){ // Бежим по массиву
        for(int j = 0; j < size - 1; ++j){
            if (arr[j + 1] > arr[j]){ // Для обратной сортировки у условии ставим знак < (Меньше)
                int tmp = arr[j + 1]; // Обмениваем значения элементов массива
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int j = 0; j < 5; j++){
        std::cout << arr[j] <<std::endl; // циклом выводим содержимое массива
    }
    return 0;
}

// lesson #5
// var #4

#include <iostream>
int main(){
    int matrix[5][5] = {
        {1,1,1,1,1},
        {1,1,1,1,2},
        {1,1,1,1,33},
        {1,1,1,1,4},
        {1,1,1,1,5},
    }; // Инициализируем матрицу
    int tmp = 0; // Инициализируем временную переменную
    int buff[5]; // Объявляем массив для хранения суммы числе в строках
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
            tmp += matrix[j][i]; // Считаем сумму элементов строки матрицы
        }
        buff[j] = tmp; // Инициализируем элемен j в буфере.
        tmp = 0; // Обнуляем временную переменную
    }
    int max = 0; // Инициализируем переменную которая будет хранить наибольшее значение
    for (int j = 0; j < 5; j++) {
        if (buff[j] > max) {
            max = buff[j];
        }
    }
    for (int j = 0; j < 5; j++){
        if(buff[j] == max){
            std::cout << "Строка с наибольшим значением: " << j+1 << std::endl;
        }
    }
    return 0;
}

// Var #10
#include <iostream>
#include <ctime>

int main ()
{
    int count=0, temp, i_count=0; // Объявляем переменные
    const int SIZE = 5; // Объявляем размеры матрицы
    int mx[SIZE][SIZE] = {
        {1,5,1,6,1},
        {1,1,2,1,5},
        {1,1,1,2,1},
        {1,8,1,8,1},
        {1,4,1,2,1}
    };
    std::cout << "Исходная матрица" <<std::endl;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            std::cout << mx[i][j] << " ";  // Выводим содержимое матрицы
        }
        std::cout<<std::endl;
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE-1; j++){
            temp=0;
            if(mx[i][j] == mx[i][j+1]){
                while(mx[i][j] == mx[i][j+1]){
                    temp++; // Считаем последовательности эелементов
                    j++; // Инкрементируем счётчик, что бы цикл не ушёл в loop
                }
            }
            if(temp > count){ // Сверяем новый счётчик с имеющимся
                i_count=i; // Номер текущей строки
                count=temp; // Записываем показания счётчика
            }
        }
    }
    if(count==0){std::cout << "Серий одинаковых элементов нет" << std::endl;}
    else {std::cout << "Номер строки в которой находится самая длинная серия одинаковых элементов: " << i_count + 1 << std::endl;}
    return 0;
}


// Lesson #6
// Var #4
#include <iostream>
#include <ctime>

int main(){
    std::srand(time(0)); // Необходимо для правильной работы функции rand()
    int **matrix; // Объявляем матрицу
    const int SIZE = 5; // Количество строк и столбцов матрицы
    matrix = new int*[SIZE]; // Инициализируем размеры матрицы
    for (int j=0; j < SIZE; j++) {
        matrix[j] = new int[SIZE];
    }
    for(int j = 0; j < SIZE; j++){
        for (int i = 0; i < SIZE; i++) {
            matrix[j][i] = 1+rand()%9; // Забиваем матрицу числами от 1 до 9
        }
    }
    int tmp = 0;
    int buff[SIZE];
    for(int j = 0; j < SIZE; j++){
        for (int i = 0; i < SIZE; i++) {
            tmp += matrix[j][i]; // Считаем сумму элементов строки матрицы
        }
        buff[j] = tmp; // Инициализируем элемент j в буфере.
        tmp = 0; // Обнуляем временную переменную
    }
    int max = 0; // Инициализируем переменную которая будет хранить наибольшее значение
    for (int j = 0; j < 5; j++) {
        if (buff[j] > max) {
            max = buff[j];
        }
    }
    for (int j = 0; j < 5; j++){
        if(buff[j] == max){
            std::cout << "Строка с наибольшим значением: " << j+1 << std::endl; // Выводим результат
        }
    }
    return 0;
}

// var #10
#include <iostream>
#include <ctime>

int main ()
{
    std::srand(time(0)); // Для функции rand()
    int **mx, count=0, temp, i_count=0; // Объявляем переменные
    const int SIZE = 10; // Объявляем размеры матрицы
    mx=new int*[SIZE]; // Инициализируем размеры матрицы
    for(int i = 0; i < SIZE; i++){
        mx[i] = new int[SIZE]; // Инициализируем размеры матрицы
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            mx[i][j] = 1+rand()%9; // Заполняем матрицу случайными числами
        }
    }
    std::cout << "Исходная матрица" <<std::endl;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            std::cout << mx[i][j] << " ";  // Выводим содержимое матрицы
        }
        std::cout<<std::endl;
    }
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE-1; j++){
            temp=0;
            if(mx[i][j] == mx[i][j+1]){
                while(mx[i][j] == mx[i][j+1]){
                    temp++; // Считаем последовательности эелементов
                    j++; // Инкрементируем счётчик, что бы цикл не ушёл в loop
                }
            }
            if(temp > count){ // Сверяем новый счётчик с имеющимся
                i_count=i; // Номер текущей строки
                count=temp; // Записываем показания счётчика
            }
        }
    }
    if(count==0){std::cout << "Серий одинаковых элементов нет" << std::endl;}
    else {std::cout << "Номер строки в которой находится самая длинная серия одинаковых элементов: " << i_count + 1 << std::endl;}
    return 0;
}

// Lesson #7
// var #4
#include <iostream> // Подключаем библиотеку ввода/вывода
float resist(float r1, float r2, char meth); // Объявляем функцию
int main(){
	float a, b; // Объявляем переменные
	char meth; // Объявляем переменную типа
	std::cout << "Include R1 in OM: "; std::cin >> a; // Запрашиваем сопротивление R1
	std::cout << "Include R2 in OM: "; std::cin >> b; // Запрашиваем сопротивление R2
	std::cout << "Include method (s/p): "; std::cin >> meth; // Запрашиваем метод подключения
    std::cout << "Result: " << resist(a, b, meth) << std::endl; // Выводим результат
	return 0;
}
float resist(float r1, float r2, char meth){
    switch (meth){ // Ветвление SWITCH определяет для какого метода считать
        case 's':
            return (r1 + r2); // Последовательное
            break;
        case 'p':
            return 1/((1/r1) + (1/r2)); // Параллельное
            break;
        default:
            return -1; // Переопределяем действие по умолчанию
            break;
	}
}

// var #10
#include <iostream> // Подключаем библиотеку ввода/вывода
float sphere(float radius);
int main(){
    float radius, volume; // Объявляем переменные
    std::cout << "Введите радиус шара (ex. 5.3): ";
    std::cin >> radius; // Считываем радиус шара
    volume = sphere(radius); // Передаём значение в функцию и получаем результат
    std::cout <<  "Объём шара: " << volume << " единиц в кубе" << std::endl; // Выводим результат
    return 0;
}

float sphere(float radius){
    const float PI = 3.14; // Инициализируем число Пи
    return 1.333*PI*(radius*radius*radius); // Возвращаем результат
}