#pragma once

#ifndef ANDROID_ICU_TEXT_NUMBERFORMAT
#define ANDROID_ICU_TEXT_NUMBERFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

namespace __jni_impl::android::icu::math
{
	class BigDecimal;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext;
}
namespace __jni_impl::android::icu::text
{
	class DisplayContext_Type;
}
namespace __jni_impl::android::icu::util
{
	class Currency;
}
namespace __jni_impl::android::icu::util
{
	class CurrencyAmount;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
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
	class BigDecimal;
}
namespace __jni_impl::java::math
{
	class BigInteger;
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
	class Locale;
}

namespace __jni_impl::android::icu::text
{
	class NumberFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		static jint ACCOUNTINGCURRENCYSTYLE();
		static jint CASHCURRENCYSTYLE();
		static jint CURRENCYSTYLE();
		static jint FRACTION_FIELD();
		static jint INTEGERSTYLE();
		static jint INTEGER_FIELD();
		static jint ISOCURRENCYSTYLE();
		static jint NUMBERSTYLE();
		static jint PERCENTSTYLE();
		static jint PLURALCURRENCYSTYLE();
		static jint SCIENTIFICSTYLE();
		static jint STANDARDCURRENCYSTYLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCurrencyInstance();
		static QAndroidJniObject getCurrencyInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getCurrencyInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(jint arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, jint arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, jint arg1);
		static QAndroidJniObject getIntegerInstance();
		static QAndroidJniObject getIntegerInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getIntegerInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getNumberInstance();
		static QAndroidJniObject getNumberInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getNumberInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getPercentInstance();
		static QAndroidJniObject getPercentInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getPercentInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getScientificInstance();
		static QAndroidJniObject getScientificInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getScientificInstance(__jni_impl::java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(__jni_impl::android::icu::math::BigDecimal arg0);
		jstring format(__jni_impl::android::icu::util::CurrencyAmount arg0);
		jstring format(jdouble arg0);
		jstring format(__jni_impl::java::math::BigDecimal arg0);
		jstring format(__jni_impl::java::math::BigInteger arg0);
		jstring format(jlong arg0);
		QAndroidJniObject format(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::android::icu::util::CurrencyAmount arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		jboolean isParseStrict();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void setContext(__jni_impl::android::icu::text::DisplayContext arg0);
		void setCurrency(__jni_impl::android::icu::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseStrict(jboolean arg0);
		void setRoundingMode(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../math/BigDecimal.hpp"
#include "DisplayContext.hpp"
#include "DisplayContext_Type.hpp"
#include "../util/Currency.hpp"
#include "../util/CurrencyAmount.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint NumberFormat::ACCOUNTINGCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ACCOUNTINGCURRENCYSTYLE"
		);
	}
	jint NumberFormat::CASHCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CASHCURRENCYSTYLE"
		);
	}
	jint NumberFormat::CURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"CURRENCYSTYLE"
		);
	}
	jint NumberFormat::FRACTION_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"FRACTION_FIELD"
		);
	}
	jint NumberFormat::INTEGERSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGERSTYLE"
		);
	}
	jint NumberFormat::INTEGER_FIELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"INTEGER_FIELD"
		);
	}
	jint NumberFormat::ISOCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"ISOCURRENCYSTYLE"
		);
	}
	jint NumberFormat::NUMBERSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"NUMBERSTYLE"
		);
	}
	jint NumberFormat::PERCENTSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PERCENTSTYLE"
		);
	}
	jint NumberFormat::PLURALCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"PLURALCURRENCYSTYLE"
		);
	}
	jint NumberFormat::SCIENTIFICSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"SCIENTIFICSTYLE"
		);
	}
	jint NumberFormat::STANDARDCURRENCYSTYLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.NumberFormat",
			"STANDARDCURRENCYSTYLE"
		);
	}
	
	// Constructors
	void NumberFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.NumberFormat",
			"()V"
		);
	}
	
	// Methods
	jarray NumberFormat::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrencyInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getCurrencyInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(I)Landroid/icu/text/NumberFormat;",
			arg0
		);
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject NumberFormat::getInstance(__jni_impl::java::util::Locale arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getInstance",
			"(Ljava/util/Locale;I)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getIntegerInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getIntegerInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getNumberInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getNumberInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getPercentInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getPercentInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getScientificInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.NumberFormat",
			"getScientificInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;",
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
	jstring NumberFormat::format(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring NumberFormat::format(__jni_impl::android::icu::util::CurrencyAmount arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring NumberFormat::format(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NumberFormat::format(__jni_impl::java::math::BigDecimal arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring NumberFormat::format(__jni_impl::java::math::BigInteger arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;)Ljava/lang/String;",
			arg0.__jniObject().object()
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
	QAndroidJniObject NumberFormat::format(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::format(__jni_impl::android::icu::util::CurrencyAmount arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
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
	QAndroidJniObject NumberFormat::format(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::format(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
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
	QAndroidJniObject NumberFormat::getContext(__jni_impl::android::icu::text::DisplayContext_Type arg0)
	{
		return __thiz.callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
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
	jint NumberFormat::getRoundingMode()
	{
		return __thiz.callMethod<jint>(
			"getRoundingMode",
			"()I"
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
	jboolean NumberFormat::isParseStrict()
	{
		return __thiz.callMethod<jboolean>(
			"isParseStrict",
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
	QAndroidJniObject NumberFormat::parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NumberFormat::parseCurrency(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
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
	void NumberFormat::setContext(__jni_impl::android::icu::text::DisplayContext arg0)
	{
		__thiz.callMethod<void>(
			"setContext",
			"(Landroid/icu/text/DisplayContext;)V",
			arg0.__jniObject().object()
		);
	}
	void NumberFormat::setCurrency(__jni_impl::android::icu::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
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
	void NumberFormat::setParseStrict(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	void NumberFormat::setRoundingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class NumberFormat : public __jni_impl::android::icu::text::NumberFormat
	{
	public:
		NumberFormat(QAndroidJniObject obj) { __thiz = obj; }
		NumberFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_NUMBERFORMAT

