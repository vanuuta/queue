# queue
Создать родительский класс "Очередь" с функциями инициализации очереди, добавления
элемента в очередь и извлечения элемента из очереди.
Создать метод создания копии очереди. Результатом должен стать новый экземпляр класса
“Очередь”, состоящий из элементов (копий элементов) исходной очереди. Порядок следования
элементов должен быть сохранен.
Создать функцию слияния двух очередей. Результатом должна быть третья очередь,
состоящая элементов первой очереди и второй очереди. Порядок следования элементов должен
быть сохранен.
На основе родительского класса "Очередь" создать три дочерних класса "Очередь1" (по
каждому типу наследования: public, protected и private) с функциями нахождения и отображения на
экране требуемого в соответствии с вариантом задания значения (см. таблицу ниже).
В main необходимо работать только с классами-наследниками (должна быть возможность
выбора для пользователя с каким наследником необходимо работать), базовый класс не должен
быть объявлен в main и использоваться.
● Необходимо разделение на h и cpp файлы для каждого класса. Функция main должна
располагаться в отдельном cpp файле.
● Элемент очереди содержит данные и ссылку на предыдущий элемент. Элемент
реализовать с помощью класса или структуры.
● Реализовать динамическое выделение памяти для очереди/элемента очереди и
динамическое очищение памяти при извлечении элемента очереди.
● Заранее число элементов очереди неизвестно, очередь заполняется постепенно
пользователем программы.
● Не принимается очередь, реализованная с помощью STL контейнеров или в виде
статического массива.
● В родительском классе обязательно должно быть три модификатора доступа с
объявленными в них полями данных и/или методами. Данные очереди обязаны находиться в
области доступа private родительского класса.
● Реализовать пользовательское меню, например: 1 – Добавление элемента очереди; 2 –
Извлечение элемента очереди; 3 – Вывод очереди на экран; 4 – Выполнение расчета по варианту; 5
– Создание копии очереди; 6 – Слияние двух очередей; 7 – Выход из программы.
