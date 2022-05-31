#include <iostream>
#include <fstream>


//int find(int* arr, int count, bool(*fn)(int))
//{
//    for (int i{}; i < count; ++i)
//        if (fn(arr[i]))
//            return i;
//
//    return -1;
//}

//int** generate2dArr(int rows, int cols, int min = 0, int max = 9)
//{
//	int** arr = new int* [rows];
//
//	for (int i{}; i < rows; ++i)
//	{
//		arr[i] = new int[cols]{};
//	}
//
//	for (int i{}; i < rows; ++i)
//	{
//		for (int j{}; j < cols; ++j)
//		{
//			arr[i][j] = rand() % (max - min + 1) + min;
//		}
//	}
//
//	return arr;
//}
//
//void print(int** arr, int rows, int cols)
//{
//	for (int i{}; i < rows; ++i)
//	{
//		for (int j{}; j < cols; ++j)
//		{
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << '\n';
//	}
//	std::cout << "--------------------\n\n";
//}

//// TASK
//// Написать ф-цию, которая добавляет
//// в прямоугольный дин массив строку в конец
//
//int** pushRow(int** arr, int& rows, int cols)
//{
//	int** temp = new int* [rows + 1];
//
//	for (int i{}; i < rows; ++i)
//		temp[i] = arr[i];
//
//	temp[rows] = new int[cols] {};
//
//	delete[] arr;
//
//	rows++;
//
//	return temp;
//}
//
//int main()
//{
//	srand(time(0));
//	rand();
//
//	int r = 5;
//	int c = 12;
//
//	int** arr = generate2dArr(r, c);
//	print(arr, r, c);
//
//	arr = pushRow(arr, r, c);
//	print(arr, r, c);
//
//	return 0;
//}

// TASK
// Написать ф-цию, которая добавляет
// в прямоугольный дин массив столбец в указанную позицию
//
//int* insert(int* arr, int count, int index, int initVal = 0)
//{
//	int* dest = new int[count + 1];
//
//	int currentId{};
//	for (int i{}; i < count; ++i)
//	{
//		if (i == index)
//			++currentId;
//
//		dest[currentId] = arr[i];
//
//		++currentId;
//	}
//
//	dest[index] = initVal;
//
//	delete[] arr;
//
//	return dest;
//}
//
//void insertCol(int** arr, int rows, int& cols, int index, int initVal = 0)
//{
//	for (int i{}; i < rows; ++i)
//		arr[i] = insert(arr[i], cols, index, initVal);
//
//	++cols;
//}
//
//int main()
//{
//	int rows = 5;
//	int cols = 5;
//
//	int** arr = generate2dArr(rows, cols);
//	print(arr, rows, cols);
//
//	insertCol(arr, rows, cols, 3, 100);
//	print(arr, rows, cols);
//
//	return 0;
//}

//int main()
//{
//	// Ссылка на указатель
//
//	int a = 5;
//	int& ref = a;
//
//	int* ptr = &a;
//
//	int*& refPtr = ptr;
//
//
//	return 0;
//}

//// TASK (вариант с сылкой на укзатель)
//// Написать ф-цию, которая добавляет
//// в прямоугольный дин массив строку в конец
//
//void pushRow(int**& arr, int& rows, int cols)
//{
//	int** temp = new int* [rows + 1];
//
//	for (int i{}; i < rows; ++i)
//		temp[i] = arr[i];
//
//	temp[rows] = new int[cols] {};
//
//	delete[] arr;
//
//	rows++;
//
//	arr = temp;
//}
//
//int main()
//{
//	srand(time(0));
//	rand();
//
//	int r = 5;
//	int c = 12;
//
//	int** arr = generate2dArr(r, c);
//	print(arr, r, c);
//
//	pushRow(arr, r, c);
//	print(arr, r, c);
//
//	return 0;
//}

//// TASK
//// Создать двумерный динамический массив и заполнить его значениями. 
//// Написать две функцию, осуществляющие циклический сдвиг строк и 
//// столбцов массива указанное количество раз и в указанном направлении.
//
//enum ColsDir
//{
//	LEFT = -1,
//	RIGHT = 1,
//};
//
//struct Arr2d
//{
//	int** ptr;
//	int rows;
//	int cols;
//};
//
//void moveCols(Arr2d& arr, ColsDir dir, int count)
//{
//	
//
//
//}



// ------

using Handler = void(*)();

enum Events
{
	MIN_TEMP,
	MAX_TEMP,
	LIGHT_ON,
	LIGT_OFF,
};

struct MinTempHandler
{
	Handler* arr;
};

void heatingOn()
{
	std::cout << "heatingOn\n";
}

void closeWindows()
{
	std::cout << "closeWindows\n";
}

void musicOn()
{
	std::cout << "musicOn\n";
}

void EventMinTempFire(MinTempHandler* mth)
{
	for (int i{}; i < 5; ++i)
		if (mth->arr[i] != nullptr)
			mth->arr[i]();
}

int main()
{
	MinTempHandler mth;
	mth.arr = new Handler[5]{};
	mth.arr[0] = closeWindows;
	mth.arr[1] = musicOn;
	mth.arr[2] = heatingOn;


	EventMinTempFire(&mth);





}



