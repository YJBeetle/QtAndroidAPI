#pragma once

#ifndef JAVA_TEXT_SIMPLEDATEFORMAT
#define JAVA_TEXT_SIMPLEDATEFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"
#include "DateFormat.hpp"

namespace __jni_impl::java::text
{
	class NumberFormat;
}
namespace __jni_impl::java::text
{
	class DateFormatSymbols;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}

namespace __jni_impl::java::text
{
	class SimpleDateFormat : public __jni_impl::java::text::DateFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::text::DateFormatSymbols arg1);
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		QAndroidJniObject format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		void applyPattern(jstring arg0);
		QAndroidJniObject toPattern();
		void set2DigitYearStart(__jni_impl::java::util::Date arg0);
		QAndroidJniObject get2DigitYearStart();
		QAndroidJniObject toLocalizedPattern();
		void applyLocalizedPattern(jstring arg0);
		QAndroidJniObject getDateFormatSymbols();
		void setDateFormatSymbols(__jni_impl::java::text::DateFormatSymbols arg0);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
	};
} // namespace __jni_impl::java::text

#include "NumberFormat.hpp"
#include "DateFormatSymbols.hpp"
#include "../util/Date.hpp"
#include "../util/Locale.hpp"
#include "../lang/StringBuilder.hpp"
#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "../io/ObjectInputStream.hpp"
#include "ParsePosition.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::java::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void SimpleDateFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SimpleDateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"()V");
	}
	
	// Methods
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint SimpleDateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject SimpleDateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject SimpleDateFormat::format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject SimpleDateFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object());
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject SimpleDateFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;");
	}
	void SimpleDateFormat::set2DigitYearStart(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SimpleDateFormat::get2DigitYearStart()
	{
		return __thiz.callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject SimpleDateFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;");
	}
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject SimpleDateFormat::getDateFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;");
	}
	void SimpleDateFormat::setDateFormatSymbols(__jni_impl::java::text::DateFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class SimpleDateFormat : public __jni_impl::java::text::SimpleDateFormat
	{
	public:
		SimpleDateFormat(QAndroidJniObject obj) { __thiz = obj; }
		SimpleDateFormat(jstring arg0, __jni_impl::java::text::DateFormatSymbols arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SimpleDateFormat(jstring arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SimpleDateFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SimpleDateFormat()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_SIMPLEDATEFORMAT

