#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"
#include "NumberFormat.hpp"

namespace __jni_impl::android::icu::math
{
	class BigDecimal;
}
namespace __jni_impl::android::icu::math
{
	class MathContext;
}
namespace __jni_impl::android::icu::text
{
	class CurrencyPluralInfo;
}
namespace __jni_impl::android::icu::text
{
	class DecimalFormatSymbols;
}
namespace __jni_impl::android::icu::util
{
	class Currency;
}
namespace __jni_impl::android::icu::util
{
	class Currency_CurrencyUsage;
}
namespace __jni_impl::android::icu::util
{
	class CurrencyAmount;
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
namespace __jni_impl::java::math
{
	class MathContext;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}

namespace __jni_impl::android::icu::text
{
	class DecimalFormat : public __jni_impl::android::icu::text::NumberFormat
	{
	public:
		// Fields
		static jint PAD_AFTER_PREFIX();
		static jint PAD_AFTER_SUFFIX();
		static jint PAD_BEFORE_PREFIX();
		static jint PAD_BEFORE_SUFFIX();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1);
		void __constructor(const QString &arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1);
		void __constructor(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1, __jni_impl::android::icu::text::CurrencyPluralInfo arg2, jint arg3);
		void __constructor(const QString &arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1, __jni_impl::android::icu::text::CurrencyPluralInfo arg2, jint arg3);
		
		// Methods
		void applyLocalizedPattern(jstring arg0);
		void applyLocalizedPattern(const QString &arg0);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jboolean areSignificantDigitsUsed();
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::android::icu::util::CurrencyAmount arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getCurrency();
		QAndroidJniObject getCurrencyPluralInfo();
		QAndroidJniObject getCurrencyUsage();
		QAndroidJniObject getDecimalFormatSymbols();
		jint getFormatWidth();
		jint getGroupingSize();
		QAndroidJniObject getMathContext();
		QAndroidJniObject getMathContextICU();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMaximumSignificantDigits();
		jbyte getMinimumExponentDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getMinimumSignificantDigits();
		jint getMultiplier();
		jstring getNegativePrefix();
		jstring getNegativeSuffix();
		jchar getPadCharacter();
		jint getPadPosition();
		jint getParseMaxDigits();
		jstring getPositivePrefix();
		jstring getPositiveSuffix();
		QAndroidJniObject getRoundingIncrement();
		jint getRoundingMode();
		jint getSecondaryGroupingSize();
		jint hashCode();
		jboolean isDecimalPatternMatchRequired();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isExponentSignAlwaysShown();
		jboolean isGroupingUsed();
		jboolean isParseBigDecimal();
		jboolean isParseIntegerOnly();
		jboolean isParseStrict();
		jboolean isScientificNotation();
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void setCurrency(__jni_impl::android::icu::util::Currency arg0);
		void setCurrencyPluralInfo(__jni_impl::android::icu::text::CurrencyPluralInfo arg0);
		void setCurrencyUsage(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0);
		void setDecimalFormatSymbols(__jni_impl::android::icu::text::DecimalFormatSymbols arg0);
		void setDecimalPatternMatchRequired(jboolean arg0);
		void setDecimalSeparatorAlwaysShown(jboolean arg0);
		void setExponentSignAlwaysShown(jboolean arg0);
		void setFormatWidth(jint arg0);
		void setGroupingSize(jint arg0);
		void setGroupingUsed(jboolean arg0);
		void setMathContext(__jni_impl::java::math::MathContext arg0);
		void setMathContextICU(__jni_impl::android::icu::math::MathContext arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMaximumSignificantDigits(jint arg0);
		void setMinimumExponentDigits(jbyte arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setMinimumSignificantDigits(jint arg0);
		void setMultiplier(jint arg0);
		void setNegativePrefix(jstring arg0);
		void setNegativePrefix(const QString &arg0);
		void setNegativeSuffix(jstring arg0);
		void setNegativeSuffix(const QString &arg0);
		void setPadCharacter(jchar arg0);
		void setPadPosition(jint arg0);
		void setParseBigDecimal(jboolean arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseMaxDigits(jint arg0);
		void setParseStrict(jboolean arg0);
		void setPositivePrefix(jstring arg0);
		void setPositivePrefix(const QString &arg0);
		void setPositiveSuffix(jstring arg0);
		void setPositiveSuffix(const QString &arg0);
		void setRoundingIncrement(__jni_impl::android::icu::math::BigDecimal arg0);
		void setRoundingIncrement(jdouble arg0);
		void setRoundingIncrement(__jni_impl::java::math::BigDecimal arg0);
		void setRoundingMode(jint arg0);
		void setScientificNotation(jboolean arg0);
		void setSecondaryGroupingSize(jint arg0);
		void setSignificantDigitsUsed(jboolean arg0);
		jstring toLocalizedPattern();
		jstring toPattern();
		jstring toString();
	};
} // namespace __jni_impl::android::icu::text

#include "../math/BigDecimal.hpp"
#include "../math/MathContext.hpp"
#include "CurrencyPluralInfo.hpp"
#include "DecimalFormatSymbols.hpp"
#include "../util/Currency.hpp"
#include "../util/Currency_CurrencyUsage.hpp"
#include "../util/CurrencyAmount.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "../../../java/math/BigInteger.hpp"
#include "../../../java/math/MathContext.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint DecimalFormat::PAD_AFTER_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_AFTER_PREFIX"
		);
	}
	jint DecimalFormat::PAD_AFTER_SUFFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_AFTER_SUFFIX"
		);
	}
	jint DecimalFormat::PAD_BEFORE_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_BEFORE_PREFIX"
		);
	}
	jint DecimalFormat::PAD_BEFORE_SUFFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DecimalFormat",
			"PAD_BEFORE_SUFFIX"
		);
	}
	
	// Constructors
	void DecimalFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"()V"
		);
	}
	void DecimalFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::__constructor(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DecimalFormat::__constructor(const QString &arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DecimalFormat::__constructor(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1, __jni_impl::android::icu::text::CurrencyPluralInfo arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CurrencyPluralInfo;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DecimalFormat::__constructor(const QString &arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1, __jni_impl::android::icu::text::CurrencyPluralInfo arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DecimalFormat",
			"(Ljava/lang/String;Landroid/icu/text/DecimalFormatSymbols;Landroid/icu/text/CurrencyPluralInfo;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	void DecimalFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::applyLocalizedPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean DecimalFormat::areSignificantDigitsUsed()
	{
		return __thiz.callMethod<jboolean>(
			"areSignificantDigitsUsed",
			"()Z"
		);
	}
	jobject DecimalFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DecimalFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DecimalFormat::format(__jni_impl::android::icu::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::format(__jni_impl::android::icu::util::CurrencyAmount arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::format(__jni_impl::java::math::BigDecimal arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::format(__jni_impl::java::math::BigInteger arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject DecimalFormat::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Landroid/icu/util/Currency;"
		);
	}
	QAndroidJniObject DecimalFormat::getCurrencyPluralInfo()
	{
		return __thiz.callObjectMethod(
			"getCurrencyPluralInfo",
			"()Landroid/icu/text/CurrencyPluralInfo;"
		);
	}
	QAndroidJniObject DecimalFormat::getCurrencyUsage()
	{
		return __thiz.callObjectMethod(
			"getCurrencyUsage",
			"()Landroid/icu/util/Currency$CurrencyUsage;"
		);
	}
	QAndroidJniObject DecimalFormat::getDecimalFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDecimalFormatSymbols",
			"()Landroid/icu/text/DecimalFormatSymbols;"
		);
	}
	jint DecimalFormat::getFormatWidth()
	{
		return __thiz.callMethod<jint>(
			"getFormatWidth",
			"()I"
		);
	}
	jint DecimalFormat::getGroupingSize()
	{
		return __thiz.callMethod<jint>(
			"getGroupingSize",
			"()I"
		);
	}
	QAndroidJniObject DecimalFormat::getMathContext()
	{
		return __thiz.callObjectMethod(
			"getMathContext",
			"()Ljava/math/MathContext;"
		);
	}
	QAndroidJniObject DecimalFormat::getMathContextICU()
	{
		return __thiz.callObjectMethod(
			"getMathContextICU",
			"()Landroid/icu/math/MathContext;"
		);
	}
	jint DecimalFormat::getMaximumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMaximumSignificantDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumSignificantDigits",
			"()I"
		);
	}
	jbyte DecimalFormat::getMinimumExponentDigits()
	{
		return __thiz.callMethod<jbyte>(
			"getMinimumExponentDigits",
			"()B"
		);
	}
	jint DecimalFormat::getMinimumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumIntegerDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMinimumSignificantDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumSignificantDigits",
			"()I"
		);
	}
	jint DecimalFormat::getMultiplier()
	{
		return __thiz.callMethod<jint>(
			"getMultiplier",
			"()I"
		);
	}
	jstring DecimalFormat::getNegativePrefix()
	{
		return __thiz.callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormat::getNegativeSuffix()
	{
		return __thiz.callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormat::getPadCharacter()
	{
		return __thiz.callMethod<jchar>(
			"getPadCharacter",
			"()C"
		);
	}
	jint DecimalFormat::getPadPosition()
	{
		return __thiz.callMethod<jint>(
			"getPadPosition",
			"()I"
		);
	}
	jint DecimalFormat::getParseMaxDigits()
	{
		return __thiz.callMethod<jint>(
			"getParseMaxDigits",
			"()I"
		);
	}
	jstring DecimalFormat::getPositivePrefix()
	{
		return __thiz.callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormat::getPositiveSuffix()
	{
		return __thiz.callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DecimalFormat::getRoundingIncrement()
	{
		return __thiz.callObjectMethod(
			"getRoundingIncrement",
			"()Ljava/math/BigDecimal;"
		);
	}
	jint DecimalFormat::getRoundingMode()
	{
		return __thiz.callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	jint DecimalFormat::getSecondaryGroupingSize()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryGroupingSize",
			"()I"
		);
	}
	jint DecimalFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DecimalFormat::isDecimalPatternMatchRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isDecimalPatternMatchRequired",
			"()Z"
		);
	}
	jboolean DecimalFormat::isDecimalSeparatorAlwaysShown()
	{
		return __thiz.callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isExponentSignAlwaysShown()
	{
		return __thiz.callMethod<jboolean>(
			"isExponentSignAlwaysShown",
			"()Z"
		);
	}
	jboolean DecimalFormat::isGroupingUsed()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupingUsed",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseBigDecimal()
	{
		return __thiz.callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseIntegerOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isParseIntegerOnly",
			"()Z"
		);
	}
	jboolean DecimalFormat::isParseStrict()
	{
		return __thiz.callMethod<jboolean>(
			"isParseStrict",
			"()Z"
		);
	}
	jboolean DecimalFormat::isScientificNotation()
	{
		return __thiz.callMethod<jboolean>(
			"isScientificNotation",
			"()Z"
		);
	}
	QAndroidJniObject DecimalFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalFormat::parseCurrency(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DecimalFormat::setCurrency(__jni_impl::android::icu::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Landroid/icu/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setCurrencyPluralInfo(__jni_impl::android::icu::text::CurrencyPluralInfo arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencyPluralInfo",
			"(Landroid/icu/text/CurrencyPluralInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setCurrencyUsage(__jni_impl::android::icu::util::Currency_CurrencyUsage arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencyUsage",
			"(Landroid/icu/util/Currency$CurrencyUsage;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setDecimalFormatSymbols(__jni_impl::android::icu::text::DecimalFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalFormatSymbols",
			"(Landroid/icu/text/DecimalFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setDecimalPatternMatchRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalPatternMatchRequired",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparatorAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setExponentSignAlwaysShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSignAlwaysShown",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setFormatWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFormatWidth",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setGroupingUsed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setMathContext(__jni_impl::java::math::MathContext arg0)
	{
		__thiz.callMethod<void>(
			"setMathContext",
			"(Ljava/math/MathContext;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setMathContextICU(__jni_impl::android::icu::math::MathContext arg0)
	{
		__thiz.callMethod<void>(
			"setMathContextICU",
			"(Landroid/icu/math/MathContext;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setMaximumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMaximumSignificantDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumExponentDigits(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumExponentDigits",
			"(B)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumFractionDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumFractionDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMinimumSignificantDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMinimumSignificantDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setMultiplier(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMultiplier",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setNegativePrefix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::setNegativePrefix(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNegativePrefix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::setNegativeSuffix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::setNegativeSuffix(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeSuffix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::setPadCharacter(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPadCharacter",
			"(C)V",
			arg0
		);
	}
	void DecimalFormat::setPadPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPadPosition",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseBigDecimal(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseBigDecimal",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseIntegerOnly(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseIntegerOnly",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setParseMaxDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setParseMaxDigits",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setParseStrict(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setParseStrict",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setPositivePrefix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::setPositivePrefix(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPositivePrefix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::setPositiveSuffix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::setPositiveSuffix(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveSuffix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::setRoundingIncrement(__jni_impl::android::icu::math::BigDecimal arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingIncrement",
			"(Landroid/icu/math/BigDecimal;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setRoundingIncrement(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingIncrement",
			"(D)V",
			arg0
		);
	}
	void DecimalFormat::setRoundingIncrement(__jni_impl::java::math::BigDecimal arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingIncrement",
			"(Ljava/math/BigDecimal;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setRoundingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingMode",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setScientificNotation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScientificNotation",
			"(Z)V",
			arg0
		);
	}
	void DecimalFormat::setSecondaryGroupingSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSecondaryGroupingSize",
			"(I)V",
			arg0
		);
	}
	void DecimalFormat::setSignificantDigitsUsed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSignificantDigitsUsed",
			"(Z)V",
			arg0
		);
	}
	jstring DecimalFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DecimalFormat : public __jni_impl::android::icu::text::DecimalFormat
	{
	public:
		DecimalFormat(QAndroidJniObject obj) { __thiz = obj; }
		DecimalFormat()
		{
			__constructor();
		}
		DecimalFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DecimalFormat(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DecimalFormat(jstring arg0, __jni_impl::android::icu::text::DecimalFormatSymbols arg1, __jni_impl::android::icu::text::CurrencyPluralInfo arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::icu::text

