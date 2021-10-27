#include "./DateFormat_Field.hpp"

namespace java::text
{
	// Fields
	QAndroidJniObject DateFormat_Field::AM_PM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"AM_PM",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"DAY_OF_MONTH",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"DAY_OF_WEEK",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"DAY_OF_WEEK_IN_MONTH",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"DAY_OF_YEAR",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"ERA",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::HOUR0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"HOUR0",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::HOUR1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"HOUR1",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::HOUR_OF_DAY0()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"HOUR_OF_DAY0",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::HOUR_OF_DAY1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"HOUR_OF_DAY1",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::MILLISECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"MILLISECOND",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"MINUTE",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"MONTH",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"SECOND",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"TIME_ZONE",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"WEEK_OF_MONTH",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"WEEK_OF_YEAR",
			"Ljava/text/DateFormat$Field;"
		);
	}
	QAndroidJniObject DateFormat_Field::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.DateFormat$Field",
			"YEAR",
			"Ljava/text/DateFormat$Field;"
		);
	}
	
	DateFormat_Field::DateFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DateFormat_Field::ofCalendarField(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormat$Field",
			"ofCalendarField",
			"(I)Ljava/text/DateFormat$Field;",
			arg0
		);
	}
	jint DateFormat_Field::getCalendarField()
	{
		return __thiz.callMethod<jint>(
			"getCalendarField",
			"()I"
		);
	}
} // namespace java::text

