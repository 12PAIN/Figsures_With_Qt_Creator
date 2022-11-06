Чтобы добавить свою собственную 2D фигуру в программу нужно:

1) Внутри каталога Figures создать свой каталог под любым названием

2) Внутри созданного каталога создать два класса:

	2.1) Создаём класс вашей фигуры. Наследуем от класса Figure Переопределяем методы базового класса:
		2.1.1) bool testMySides(); - проверка правильности данных. Вернуть true, если всё правильно. false если нет.
		2.1.2) double Perimeter(); - в дальнейшем используется для вывода периметра на экран, а также расчёта площади поверхности призмы из данной фигуры. вернуть периметр фигуры

		2.1.3) double Space(); - в дальнейшем используется для вывода площади на экран и расчёта объёма призмы из этой фигуры. Вернуть площадь фигуры.

	2.2) Создаём оболочечный класс фигуры. Наследуем от класса Outer. Подключаем класс, созданный на шаге 2.1
		
		2.2.0) Переопределяем методы:
			2.2.1) void init() - в данном методе вы должны задать начальные параметры, а именно:
				2.2.1.1) unsigned short id - любое ненулевое, уже не использованное число см.[1]
				2.2.1.2) std::string name - имя вашей фигуры, отоброжаемое в программе
				2.2.1.3) unsigned short countProperties - количество свойств вашей фигуры (пр. у круга 1 - радиус, у треугольника 3 - 3 стороны)
				2.2.1.4) std::string delim - используйте значение по умолчанию (;)
				2.2.1.5) std::string properties* = new std::string[countProperties]; - этот массив также обязателен к заполнению, так как содержит в себе названия ваших свойств. в случае круга, размер массива - 1. А элемент массива будет - "Радиус". (для большего понимания См. пример с треугольником)

			2.2.2) Outer* clone() - как в примере с треугольником, только вместо triangleOuter - название вашего класса.
			2.2.3) double* getData() - верните массив данных фигуры. данные получите и расположите в порядке указанных свойств в properties;
			2.2.4) void createFigure(double*) - на внутреннем поле figure вызовите new (название класса вашей фигуры). Данные получите из полученного массива в параметре. Смотрети пример с треугольником!
			2.2.5) std::vector<std::vector<std::vector<double>>> getPolygonMatrix() - в данном методе вам необходимо вернуть вектор из 3-х измерений. Данный вектор хранит в себе информацию об отрисуемых полигонах вашей фигуры. Первый индекс вектора - номер полигона. Второй индекс вектора - номер отрисуемой точки полигона. Конечный вектор хранит в себе только информацию о точке объекта - x и y. Для понимания смотрите пример с треугольником

		2.2.1) Определите два конструктора:
			2.2.1.1) Пустой конструктор, который вызывает только метод init, определённый на прошлом шаге.
			2.2.1.2) Конструктор клонирования. принимает double*. Сначала вызываем метод init() внутри этого конструктора. затем вызываем метод createFigure, передаём в параметрах полученный double* массив. Затем вызовите delete[] на этом массиве.

3) Теперь необходимо в каталоге Figures найти класс менеджера фигур. 

	3.1) В его заголовочном файле подключите ваш класс, созданный на шаге 2.2
	3.2) В файле .cpp реализации данного класса вам необходимо:
		3.3) в методе getSignList() на указетеле outer после строки 17 создайте объект вашего класса (2.2) с помощью new (название вашего класса)(). Затем добавьте эту строку: signatures.push_back(outer->getObjectSign()); delete outer;

	3.3) В методе createFigureObject(int id) вам необходимо добавить свою конструкцию вида if(id== (id вашей фигуры)) return new (название класса 2.2)();

4) Всё, что вам нужно сделать после этого этапа - скомпилировать 2 ваших класса, а также перекомпилировать класс figureManager. 

После этого вы можете начать тестирование работы вашего класса. Если вы всё сделали правильно, то всё заработает!!!

1] Использованные id:

id=1 Треугольник
id=2 Круг

Пример с треугольником вы можете изучить, открыв папку Triangle в каталоге Figures.