#include "./NumberFormat_Field.hpp"

namespace java::text
{
	// Fields
	QAndroidJniObject NumberFormat_Field::CURRENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"CURRENCY",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::DECIMAL_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"DECIMAL_SEPARATOR",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT_SIGN",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::EXPONENT_SYMBOL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"EXPONENT_SYMBOL",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::FRACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"FRACTION",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::GROUPING_SEPARATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"GROUPING_SEPARATOR",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::INTEGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"INTEGER",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::PERCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PERCENT",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::PERMILLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PERMILLE",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::PREFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"PREFIX",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::SIGN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"SIGN",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	QAndroidJniObject NumberFormat_Field::SUFFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.NumberFormat$Field",
			"SUFFIX",
			"Ljava/text/NumberFormat$Field;"
		);
	}
	
	// QAndroidJniObject forward
	NumberFormat_Field::NumberFormat_Field(QAndroidJniObject obj) : java::text::Format_Field(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::text

