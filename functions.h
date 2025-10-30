/**
  @file functions.h
  @brief ПРОВЕРКА ИЗМЕНЕНИЙ ДОКУМЕНТАЦИИ

  Содержит математические функции Add, Subtract, Multiply, Divide, Power. 
*/

/**
  @brief ИЗМЕНЕНИЕ
  @param[in] ИЗМЕНЕНИЕ
  @param[in] b Второе число
  @return Результат сложения a + b
*/
int PLUS(int a, int b);

/**
  @brief ИЗМЕНЕНИЕ
  @param[in] ИЗМЕНЕНИЕ
  @param[in] b Вычитаемое
  @return Результат вычитания a - b
*/
int MINUS(int a, int b);

/**
  @brief Перемножает два числа
  @param[in] a Первое множимое
  @param[in] b Второе множимое
  @return Произведение чисел a * b
*/
int Multiply(int a, int b);

/**
  @brief Делит одно число на другое
  @param[in] a Делимое
  @param[in] b Делитель
  @return Результат деления a / b.
  @note Если b = 0, функция возвращает 0.
*/
double Divide(int a, int b);

/**
  @brief Возводит число в степень
  @param[in] a Основание степени
  @param[in] b Показатель степени (может быть отрицательным)
  @return Значение a в степени b
*/
double Power(int a, int b);