#pragma once

#ifndef JAVA_TEXT_NUMBERFORMAT
#define JAVA_TEXT_NUMBERFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::math
{
	class RoundingMode;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class Currency;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::text
{
	class NumberFormat : public __jni_impl::java::text::Format
	{
	public:
		// Fields
		static jint FRACTION_FIELD();
		static jint INTEGER_FIELD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCompactNumberInstance();
		static QAndroidJniObject getCompactNumberInstance(__jni_impl::java::util::Locale arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getCurrencyInstance();
		static QAndroidJniObject getCurrencyInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getIntegerInstance();
		static QAndroidJniObject getIntegerInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getNumberInstance();
		static QAndroidJniObject getNumberInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getPercentInstance();
		static QAndroidJniObject getPercentInstance(__jni_impl::java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(jdouble arg0);
		jstring format(jlong arg0);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		QAndroidJniObject getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void setCurrency(__jni_impl::java::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setRoundingMode(__jni_impl::java::math::RoundingMode arg0);
	};
} // namespace __jni_impl::java::text

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Number.hpp"
#include "../lang/StringBuffer.hpp"
#include "../math/RoundingMode.hpp"
#include "FieldPosition.hpp"
#include "ParsePosition.hpp"
#include "../util/Currency.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint NumberFormat::FRACTION_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	jint NumberFormat::INTEGER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	
	// Constructors
	void NumberFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.NumberFormat",
			"(V)V");
	}
	
	// Methods
	jarray NumberFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance(__jni_impl::java::util::Locale arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"()Ljava/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	jobject NumberFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean NumberFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NumberFormat::format(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NumberFormat::format(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject NumberFormat::format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jint NumberFormat::getMaximumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMaximumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint NumberFormat::getMinimumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	QAndroidJniObject NumberFormat::getRoundingMode()
	{
		return __thiz.callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
		);
	}
	jint NumberFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NumberFormat::isGroupingUsed()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean NumberFormat::isParseIntegerOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0
		);
	}
	QAndroidJniObject NumberFormat::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject NumberFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject NumberFormat::parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void NumberFormat::setCurrency(__jni_impl::java::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	void NumberFormat::setGroupingUsed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setMaximumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMaximumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setMinimumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void NumberFormat::setParseIntegerOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setRoundingMode(__jni_impl::java::math::RoundingMode arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class NumberFormat : public __jni_impl::java::text::NumberFormat
	{
	public:
		NumberFormat(QAndroidJniObject obj) { __thiz = obj; }
		NumberFormat()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_NUMBERFORMAT

