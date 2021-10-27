#pragma once

#ifndef JAVA_TEXT_NUMBERFORMAT_FIELD
#define JAVA_TEXT_NUMBERFORMAT_FIELD

#include "../../__JniBaseClass.hpp"
#include "AttributedCharacterIterator_Attribute.hpp"
#include "Format_Field.hpp"


namespace __jni_impl::java::text
{
	class NumberFormat_Field : public __jni_impl::java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject CURRENCY();
		static QAndroidJniObject DECIMAL_SEPARATOR();
		static QAndroidJniObject EXPONENT();
		static QAndroidJniObject EXPONENT_SIGN();
		static QAndroidJniObject EXPONENT_SYMBOL();
		static QAndroidJniObject FRACTION();
		static QAndroidJniObject GROUPING_SEPARATOR();
		static QAndroidJniObject INTEGER();
		static QAndroidJniObject PERCENT();
		static QAndroidJniObject PERMILLE();
		static QAndroidJniObject PREFIX();
		static QAndroidJniObject SIGN();
		static QAndroidJniObject SUFFIX();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
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
	
	// Constructors
	void NumberFormat_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.NumberFormat$Field",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::text

namespace java::text
{
	class NumberFormat_Field : public __jni_impl::java::text::NumberFormat_Field
	{
	public:
		NumberFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
		NumberFormat_Field()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_NUMBERFORMAT_FIELD

