# Массивы

## Сборка и запуск

1. Необходимо перейти в корневую директорию и выполнить команду для сборки проекта

```
make
```

2. Исполняемые файлы появятся в папке ```bin```

3. Для удаления всех объектных и исполняемых файлов необходимо выполнить команду

```
make clean
```

## Задания

### Задание 1. Вывести квадратную матрицу по заданному N.

**Тест 1:**

*Входные данные:* ```N = 3```

*Выходные данные:*

```
1 2 3 
4 5 6 
7 8 9 
```

**Тест 2:**

*Входные данные:* ```N = 5```

*Выходные данные:*

```
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
```

### Задание 2. Вывести заданный массив размером N в обратном порядке.

**Тест 1:**

```
Ввод -> 1 2 3 4 5 
Вывод -> 5 4 3 2 1 
```

**Тест 2:**

```
Ввод -> 1 2 3 4 5 6 
Вывод -> 6 5 4 3 2 1
```

### Задание 3. Заполнить верхний треугольник матрицы 1, а нижний 0.

**Тест 1:**

*Входные данные:* ```N = 5```

*Выходные данные:*

```
1 1 1 1 1 
1 1 1 1 0 
1 1 1 0 0 
1 1 0 0 0 
1 0 0 0 0 
```

**Тест 2:**

*Входные данные:* ```N = 7```

*Выходные данные:*

```
1 1 1 1 1 1 1 
1 1 1 1 1 1 0 
1 1 1 1 1 0 0 
1 1 1 1 0 0 0 
1 1 1 0 0 0 0 
1 1 0 0 0 0 0 
1 0 0 0 0 0 0 
```

### Задание 4. Заполинть матрицу числами от 1 до N^2 улиткой.

**Тест 1:**

*Входные данные:* ```N = 5```

*Выходные данные:*

```
1 2 3 4 5 
16 17 18 19 6 
15 24 25 20 7 
14 23 22 21 8 
13 12 11 10 9 
```

**Тест 2:**

*Входные данные:* ```N = 7```

*Выходные данные:*

```
1 2 3 4 5 6 7 
24 25 26 27 28 29 8 
23 40 41 42 43 30 9 
22 39 48 49 44 31 10 
21 38 47 46 45 32 11 
20 37 36 35 34 33 12 
19 18 17 16 15 14 13 
```