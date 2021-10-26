#pragma once

#ifndef JAVA_TEXT_DECIMALFORMAT
#define JAVA_TEXT_DECIMALFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"
#include "NumberFormat.hpp"

namespace __jni_impl::java::math
{
	class BigInteger;
}
namespace __jni_impl::java::math
{
	class BigDecimal;
}
namespace __jni_impl::java::text
{
	class DecimalFormatSymbols;
}
namespace __jni_impl::java::math
{
	class RoundingMode;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class Format_Field;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
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

namespace __jni_impl::java::text
{
	class DecimalFormat : public __jni_impl::java::text::NumberFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::text::DecimalFormatSymbols arg1);
		void __constructor(const QString &arg0, __jni_impl::java::text::DecimalFormatSymbols arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jboolean isParseBigDecimal();
		void setDecimalFormatSymbols(__jni_impl::java::text::DecimalFormatSymbols arg0);
		jstring getPositivePrefix();
		void setPositivePrefix(jstring arg0);
		void setPositivePrefix(const QString &arg0);
		jstring getNegativePrefix();
		void setNegativePrefix(jstring arg0);
		void setNegativePrefix(const QString &arg0);
		jstring getPositiveSuffix();
		void setPositiveSuffix(jstring arg0);
		void setPositiveSuffix(const QString &arg0);
		jstring getNegativeSuffix();
		void setNegativeSuffix(jstring arg0);
		void setNegativeSuffix(const QString &arg0);
		jint getMultiplier();
		void setMultiplier(jint arg0);
		jint getGroupingSize();
		void setGroupingSize(jint arg0);
		jboolean isDecimalSeparatorAlwaysShown();
		void setParseBigDecimal(jboolean arg0);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		void setGroupingUsed(jboolean arg0);
		QAndroidJniObject getDecimalFormatSymbols();
		void setMinimumIntegerDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		jstring toPattern();
		jstring toLocalizedPattern();
		void applyLocalizedPattern(jstring arg0);
		void applyLocalizedPattern(const QString &arg0);
		jint getMaximumIntegerDigits();
		jint getMinimumIntegerDigits();
		jint getMaximumFractionDigits();
		void setMaximumFractionDigits(jint arg0);
		jint getMinimumFractionDigits();
		void setMinimumFractionDigits(jint arg0);
		QAndroidJniObject getCurrency();
		void setCurrency(__jni_impl::java::util::Currency arg0);
		void setRoundingMode(__jni_impl::java::math::RoundingMode arg0);
		void setDecimalSeparatorAlwaysShown(jboolean arg0);
		QAndroidJniObject getRoundingMode();
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
	};
} // namespace __jni_impl::java::text

#include "../math/BigInteger.hpp"
#include "../math/BigDecimal.hpp"
#include "DecimalFormatSymbols.hpp"
#include "../math/RoundingMode.hpp"
#include "../lang/StringBuffer.hpp"
#include "Format_Field.hpp"
#include "FieldPosition.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "ParsePosition.hpp"
#include "../util/Currency.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void DecimalFormat::__constructor(jstring arg0, __jni_impl::java::text::DecimalFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DecimalFormat::__constructor(const QString &arg0, __jni_impl::java::text::DecimalFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DecimalFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormat",
			"()V"
		);
	}
	
	// Methods
	jboolean DecimalFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DecimalFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject DecimalFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DecimalFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
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
	jboolean DecimalFormat::isParseBigDecimal()
	{
		return __thiz.callMethod<jboolean>(
			"isParseBigDecimal",
			"()Z"
		);
	}
	void DecimalFormat::setDecimalFormatSymbols(__jni_impl::java::text::DecimalFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalFormatSymbols",
			"(Ljava/text/DecimalFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	jstring DecimalFormat::getPositivePrefix()
	{
		return __thiz.callObjectMethod(
			"getPositivePrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormat::getNegativePrefix()
	{
		return __thiz.callObjectMethod(
			"getNegativePrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormat::getPositiveSuffix()
	{
		return __thiz.callObjectMethod(
			"getPositiveSuffix",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring DecimalFormat::getNegativeSuffix()
	{
		return __thiz.callObjectMethod(
			"getNegativeSuffix",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint DecimalFormat::getMultiplier()
	{
		return __thiz.callMethod<jint>(
			"getMultiplier",
			"()I"
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
	jint DecimalFormat::getGroupingSize()
	{
		return __thiz.callMethod<jint>(
			"getGroupingSize",
			"()I"
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
	jboolean DecimalFormat::isDecimalSeparatorAlwaysShown()
	{
		return __thiz.callMethod<jboolean>(
			"isDecimalSeparatorAlwaysShown",
			"()Z"
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
	void DecimalFormat::setGroupingUsed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingUsed",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject DecimalFormat::getDecimalFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDecimalFormatSymbols",
			"()Ljava/text/DecimalFormatSymbols;"
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
	void DecimalFormat::setMaximumIntegerDigits(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumIntegerDigits",
			"(I)V",
			arg0
		);
	}
	jstring DecimalFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
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
	jint DecimalFormat::getMaximumIntegerDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumIntegerDigits",
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
	jint DecimalFormat::getMaximumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMaximumFractionDigits",
			"()I"
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
	jint DecimalFormat::getMinimumFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getMinimumFractionDigits",
			"()I"
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
	QAndroidJniObject DecimalFormat::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	void DecimalFormat::setCurrency(__jni_impl::java::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormat::setRoundingMode(__jni_impl::java::math::RoundingMode arg0)
	{
		__thiz.callMethod<void>(
			"setRoundingMode",
			"(Ljava/math/RoundingMode;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject DecimalFormat::getRoundingMode()
	{
		return __thiz.callObjectMethod(
			"getRoundingMode",
			"()Ljava/math/RoundingMode;"
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
} // namespace __jni_impl::java::text

namespace java::text
{
	class DecimalFormat : public __jni_impl::java::text::DecimalFormat
	{
	public:
		DecimalFormat(QAndroidJniObject obj) { __thiz = obj; }
		DecimalFormat(jstring arg0, __jni_impl::java::text::DecimalFormatSymbols arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DecimalFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DecimalFormat()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_DECIMALFORMAT

