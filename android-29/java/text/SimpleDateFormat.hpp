#pragma once

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"
#include "DateFormat.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::text
{
	class DateFormatSymbols;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class NumberFormat;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::text
{
	class SimpleDateFormat : public __jni_impl::java::text::DateFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::text::DateFormatSymbols arg1);
		void __constructor(const QString &arg0, __jni_impl::java::text::DateFormatSymbols arg1);
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(const QString &arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyLocalizedPattern(const QString &arg0);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject get2DigitYearStart();
		QAndroidJniObject getDateFormatSymbols();
		jint hashCode();
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void set2DigitYearStart(__jni_impl::java::util::Date arg0);
		void setDateFormatSymbols(__jni_impl::java::text::DateFormatSymbols arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
	};
} // namespace __jni_impl::java::text

#include "../io/ObjectInputStream.hpp"
#include "../lang/StringBuffer.hpp"
#include "../lang/StringBuilder.hpp"
#include "DateFormatSymbols.hpp"
#include "FieldPosition.hpp"
#include "NumberFormat.hpp"
#include "ParsePosition.hpp"
#include "../util/Date.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void SimpleDateFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"()V"
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::java::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, __jni_impl::java::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::__constructor(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyLocalizedPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject SimpleDateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::format(__jni_impl::java::util::Date arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::get2DigitYearStart()
	{
		return __thiz.callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject SimpleDateFormat::getDateFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject SimpleDateFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::set2DigitYearStart(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(__jni_impl::java::text::DateFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	jstring SimpleDateFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SimpleDateFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class SimpleDateFormat : public __jni_impl::java::text::SimpleDateFormat
	{
	public:
		SimpleDateFormat(QAndroidJniObject obj) { __thiz = obj; }
		SimpleDateFormat()
		{
			__constructor();
		}
		SimpleDateFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace java::text

