#pragma once

#ifndef JAVA_TEXT_DECIMALFORMATSYMBOLS
#define JAVA_TEXT_DECIMALFORMATSYMBOLS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
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
	class DecimalFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject getCurrency();
		jstring getCurrencySymbol();
		jchar getDecimalSeparator();
		jchar getDigit();
		jstring getExponentSeparator();
		jchar getGroupingSeparator();
		jstring getInfinity();
		jstring getInternationalCurrencySymbol();
		jchar getMinusSign();
		jchar getMonetaryDecimalSeparator();
		jchar getMonetaryGroupingSeparator();
		jstring getNaN();
		jchar getPatternSeparator();
		jchar getPerMill();
		jchar getPercent();
		jchar getZeroDigit();
		jint hashCode();
		void setCurrency(__jni_impl::java::util::Currency arg0);
		void setCurrencySymbol(jstring arg0);
		void setCurrencySymbol(const QString &arg0);
		void setDecimalSeparator(jchar arg0);
		void setDigit(jchar arg0);
		void setExponentSeparator(jstring arg0);
		void setExponentSeparator(const QString &arg0);
		void setGroupingSeparator(jchar arg0);
		void setInfinity(jstring arg0);
		void setInfinity(const QString &arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(const QString &arg0);
		void setMinusSign(jchar arg0);
		void setMonetaryDecimalSeparator(jchar arg0);
		void setMonetaryGroupingSeparator(jchar arg0);
		void setNaN(jstring arg0);
		void setNaN(const QString &arg0);
		void setPatternSeparator(jchar arg0);
		void setPerMill(jchar arg0);
		void setPercent(jchar arg0);
		void setZeroDigit(jchar arg0);
	};
} // namespace __jni_impl::java::text

#include "../io/ObjectInputStream.hpp"
#include "../util/Currency.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void DecimalFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormatSymbols",
			"()V"
		);
	}
	void DecimalFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jarray DecimalFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	jobject DecimalFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
		);
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getDigit()
	{
		return __thiz.callMethod<jchar>(
			"getDigit",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return __thiz.callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getInfinity()
	{
		return __thiz.callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return __thiz.callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMonetaryGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryGroupingSeparator",
			"()C"
		);
	}
	jstring DecimalFormatSymbols::getNaN()
	{
		return __thiz.callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getPatternSeparator",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return __thiz.callMethod<jchar>(
			"getPerMill",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getPercent()
	{
		return __thiz.callMethod<jchar>(
			"getPercent",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DecimalFormatSymbols::setCurrency(__jni_impl::java::util::Currency arg0)
	{
		__thiz.callMethod<void>(
			"setCurrency",
			"(Ljava/util/Currency;)V",
			arg0.__jniObject().object()
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setCurrencySymbol(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDigit",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setExponentSeparator(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInfinity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setInternationalCurrencySymbol(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInternationalCurrencySymbol",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setMinusSign(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMinusSign",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setMonetaryGroupingSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setMonetaryGroupingSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setNaN(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DecimalFormatSymbols::setPatternSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPatternSeparator",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPerMill(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPerMill",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setPercent(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setPercent",
			"(C)V",
			arg0
		);
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class DecimalFormatSymbols : public __jni_impl::java::text::DecimalFormatSymbols
	{
	public:
		DecimalFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
		DecimalFormatSymbols()
		{
			__constructor();
		}
		DecimalFormatSymbols(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_DECIMALFORMATSYMBOLS

