/**
	\file
	\brief Заголовочный файл с цветами и модулем смены цвета в консоли.
	\author SavaLione	
*/
#ifndef COLOR_H
#define COLOR_H
/** Цвета */
enum color {
        BLACK         = 0, /**< @en Black color. @ru Чёрный цвет. */
        BLUE          = 1, /**< @en Blue color. @ru Синий цвет. */
        GREEN         = 2, /**< @en Green color. @ru Зелёный цвет. */
        CYAN          = 3, /**< @en Cyan color. @ru Сине-зелёный цвет. */
        RED           = 4, /**< @en Red color. @ru Красный цвет. */
        MAGENTA       = 5, /**< @en Magenta color. @ru Пурпурный цвет. */
        BROWN         = 6, /**< @en Brown color. @ru Коричневый цвет. */
        LIGHTGRAY     = 7, /**< @en Light gray color. @ru Светло-серый цвет. */
        DARKGRAY      = 8, /**< @en Dark gray color. @ru Тёмно-серый цвет. */
        LIGHTBLUE     = 9, /**< @en Light blue color. @ru Светло-синий цвет. */
        LIGHTGREEN    = 10, /**< @en Light green color. @ru Светло-зелёный цвет. */
        LIGHTCYAN     = 11, /**< @en Light cyan color. @ru Светло-сине-зелёный цвет. */
        LIGHTRED      = 12, /**< @en Light red color. @ru Светло-красный цвет. */
        LIGHTMAGENTA  = 13, /**< @en Light magenta color. @ru Светло-пурпурный цвет. */
        LIGHTYELLOW   = 14, /**< @en Light yellow color. @ru Светло-жёлтый цвет.*/
        WHITE         = 15 /**< @en White color. @ru Белый цвет. */
};
/** Изменение цвета текста и цвета заднего фона в консоли
	\param[in] ConsoleText цвет текста
    \param[in] ConsoleBackground цвет заднего фона
*/
void v_set_color(color ConsoleText, color ConsoleBackground);

/** Изменение цвета текста в консоли. Задний фон по умолчанию чёрный.
	\param[in] ConsoleText цвет текста
*/
void v_set_color(color ConsoleText);

/** Вернуть цвет текста и цвет заднего фона в консоли к стандартным значениям. */
void v_color_reset();

#endif // COLOR_H