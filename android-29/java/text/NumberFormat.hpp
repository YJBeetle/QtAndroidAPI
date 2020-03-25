#pragma once

#ifndef JAVA_TEXT_NUMBERFORMAT
#define JAVA_TEXT_NUMBERFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::util
{
	class Locale;
}
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
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::util
{
	class Currency;
}
namespace __jni_impl::java::math
{
	class RoundingMode;
}

namespace __jni_impl::java::text
{
	class NumberFormat : public __jni_impl::java::text::Format
	{
	public:
		// Fields
		static jint INTEGER_FIELD();
		static jint FRACTION_FIELD();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0);
		QAndroidJniObject format(jlong arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject getAvailableLocales();
		static QAndroidJniObject getIntegerInstance();
		static QAndroidJniObject getIntegerInstance(__jni_impl::java::util::Locale arg0);
		void setGroupingUsed(jboolean arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		jboolean isParseIntegerOnly();
		void setParseIntegerOnly(jboolean arg0);
		jboolean isGroupingUsed();
		jint getMaximumIntegerDigits();
		jint getMinimumIntegerDigits();
		jint getMaximumFractionDigits();
		void setMaximumFractionDigits(jint arg0);
		jint getMinimumFractionDigits();
		void setMinimumFractionDigits(jint arg0);
		QAndroidJniObject getCurrency();
		void setCurrency(__jni_impl::java::util::Currency arg0);
		void setRoundingMode(__jni_impl::java::math::RoundingMode arg0);
		QAndroidJniObject getRoundingMode();
		QAndroidJniObject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		static QAndroidJniObject getCurrencyInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getCurrencyInstance();
		static QAndroidJniObject getNumberInstance();
		static QAndroidJniObject getNumberInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getPercentInstance();
		static QAndroidJniObject getPercentInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getCompactNumberInstance(__jni_impl::java::util::Locale arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getCompactNumberInstance();
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "../util/Locale.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Number.hpp"
#include "ParsePosition.hpp"
#include "../util/Currency.hpp"
#include "../math/RoundingMode.hpp"

namespace __jni_impl::java::text
{
	// Fields
	jint NumberFormat::INTEGER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"INTEGER_FIELD");
	}
	jint NumberFormat::FRACTION_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.text.NumberFormat",
			"FRACTION_FIELD");
	}
	
	// Constructors
	void NumberFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.NumberFormat",
			"(V)V");
	}
	
	// Methods
	jboolean NumberFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint NumberFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject NumberFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject NumberFormat::format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::format(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NumberFormat::format(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(J)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NumberFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"()Ljava/text/NumberFormat;");
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0);
	}
	QAndroidJniObject NumberFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	QAndroidJniObject NumberFormat::getIntegerInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"()Ljava/text/NumberFormat;");
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object());
	}
	void NumberFormat::setGroupingUsed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0);
	}
	void NumberFormat::setMinimumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0);
	}
	void NumberFormat::setMaximumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0);
	}
	jboolean NumberFormat::isParseIntegerOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z");
	}
	void NumberFormat::setParseIntegerOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0);
	}
	jboolean NumberFormat::isGroupingUsed()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupingUsed",
			"()Z");
	}
	jint NumberFormat::getMaximumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I");
	}
	jint NumberFormat::getMinimumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I");
	}
	jint NumberFormat::getMaximumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumFractionDigits",
			"()I");
	}
	void NumberFormat::setMaximumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0);
	}
	jint NumberFormat::getMinimumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFractionDigits",
			"()I");
	}
	void NumberFormat::setMinimumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0);
	}
	QAndroidJniObject NumberFormat::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;");
	}
	void NumberFormat::setCurrency(__jni_impl::java::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.__jniObject().object());
	}
	void NumberFormat::setRoundingMode(__jni_impl::java::math::RoundingMode arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getRoundingMode()
	{
		return __thiz.callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;");
	}
	QAndroidJniObject NumberFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCurrencyInstance",
			"()Ljava/text/NumberFormat;");
	}
	QAndroidJniObject NumberFormat::getNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"()Ljava/text/NumberFormat;");
	}
	QAndroidJniObject NumberFormat::getNumberInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getPercentInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"()Ljava/text/NumberFormat;");
	}
	QAndroidJniObject NumberFormat::getPercentInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance(__jni_impl::java::util::Locale arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject NumberFormat::getCompactNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.NumberFormat",
			"getCompactNumberInstance",
			"()Ljava/text/NumberFormat;");
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

