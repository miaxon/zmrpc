Учебный проект по курсу "Углубленное программирование на языке С++" на степике.

Описание проекта.

Проект будет состоять из двух частей: клиента и сервера, взаимодействующих друг с другом через сеть. Клиент будет вызывать 
удаленно функции сервера, т.е. имеет место попытка реализации Remote Procedure Call (RPC).

Само приложение будет реализовыаться как shared library (librpc4stepic.so).

Сетевое взаимодействие будет реализовано на протоколе ZMQ - http://zeromq.org/intro:get-the-software.
Сериализация запросов будет производиться с помощью библиотеки msgpack - http://msgpack.org/


Для обеих сторонних библиотек будут задействованы официальные С++-биндинги: zmqpp (https://github.com/zeromq/zmqpp) и 
msgpack-с (https://github.com/msgpack/msgpack-c)


Платформа разработки Linux (Debian 8 x64). Инструмент разработки NetBeans 8.02 (C++) и UMLBrello (UML).


Основная цель - создать работоспособный каркас приложения (клеинт и сервер). Предполагается обратить первоочередное внимание 
на отработку инициализации классов приложения, конфигурирование, создание многопоточной среды исполнения на стороне сервера,
сериализацию и десеарилизацию запросов и сетевое взаимодействие, обработку ошибок и исключительных ситуаций. 


В дальнейшем можно расширить функционал, т.е. набор реализованных удаленных процедур, 
просто добавляя соответствующие классы в неймспейс rpc4stepic. Возможно, с помощью шаблонов (?). 
