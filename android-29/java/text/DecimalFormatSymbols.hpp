#pragma once

#ifndef JAVA_TEXT_DECIMALFORMATSYMBOLS
#define JAVA_TEXT_DECIMALFORMATSYMBOLS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class Currency;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
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
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static jarray getAvailableLocales();
		QAndroidJniObject getCurrency();
		void setCurrency(__jni_impl::java::util::Currency arg0);
		jstring getInternationalCurrencySymbol();
		jstring getCurrencySymbol();
		void setZeroDigit(jchar arg0);
		jchar getGroupingSeparator();
		void setGroupingSeparator(jchar arg0);
		void setDecimalSeparator(jchar arg0);
		jchar getPerMill();
		void setPerMill(jchar arg0);
		jchar getPercent();
		void setPercent(jchar arg0);
		jchar getDigit();
		void setDigit(jchar arg0);
		jchar getPatternSeparator();
		void setPatternSeparator(jchar arg0);
		jstring getInfinity();
		void setInfinity(jstring arg0);
		jstring getNaN();
		void setNaN(jstring arg0);
		void setMinusSign(jchar arg0);
		void setCurrencySymbol(jstring arg0);
		void setInternationalCurrencySymbol(jstring arg0);
		jchar getMonetaryDecimalSeparator();
		void setMonetaryDecimalSeparator(jchar arg0);
		jstring getExponentSeparator();
		void setExponentSeparator(jstring arg0);
		jchar getZeroDigit();
		jchar getMinusSign();
		jchar getDecimalSeparator();
	};
} // namespace __jni_impl::java::text

#include "../util/Locale.hpp"
#include "../util/Currency.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void DecimalFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormatSymbols",
			"()V");
	}
	void DecimalFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DecimalFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean DecimalFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DecimalFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject DecimalFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	QAndroidJniObject DecimalFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getInstance",
			"()Ljava/text/DecimalFormatSymbols;"
		);
	}
	jarray DecimalFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DecimalFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DecimalFormatSymbols::getCurrency()
	{
		return __thiz.callObjectMethod(
			"getCurrency",
			"()Ljava/util/Currency;"
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
	jstring DecimalFormatSymbols::getInternationalCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getInternationalCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DecimalFormatSymbols::getCurrencySymbol()
	{
		return __thiz.callObjectMethod(
			"getCurrencySymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DecimalFormatSymbols::setZeroDigit(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setZeroDigit",
			"(C)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getGroupingSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getGroupingSeparator",
			"()C"
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
	void DecimalFormatSymbols::setDecimalSeparator(jchar arg0)
	{
		__thiz.callMethod<void>(
			"setDecimalSeparator",
			"(C)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getPerMill()
	{
		return __thiz.callMethod<jchar>(
			"getPerMill",
			"()C"
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
	jchar DecimalFormatSymbols::getPercent()
	{
		return __thiz.callMethod<jchar>(
			"getPercent",
			"()C"
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
	jchar DecimalFormatSymbols::getDigit()
	{
		return __thiz.callMethod<jchar>(
			"getDigit",
			"()C"
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
	jchar DecimalFormatSymbols::getPatternSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getPatternSeparator",
			"()C"
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
	jstring DecimalFormatSymbols::getInfinity()
	{
		return __thiz.callObjectMethod(
			"getInfinity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DecimalFormatSymbols::setInfinity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInfinity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring DecimalFormatSymbols::getNaN()
	{
		return __thiz.callObjectMethod(
			"getNaN",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DecimalFormatSymbols::setNaN(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNaN",
			"(Ljava/lang/String;)V",
			arg0
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
	void DecimalFormatSymbols::setCurrencySymbol(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrencySymbol",
			"(Ljava/lang/String;)V",
			arg0
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
	jchar DecimalFormatSymbols::getMonetaryDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getMonetaryDecimalSeparator",
			"()C"
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
	jstring DecimalFormatSymbols::getExponentSeparator()
	{
		return __thiz.callObjectMethod(
			"getExponentSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DecimalFormatSymbols::setExponentSeparator(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setExponentSeparator",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jchar DecimalFormatSymbols::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getMinusSign()
	{
		return __thiz.callMethod<jchar>(
			"getMinusSign",
			"()C"
		);
	}
	jchar DecimalFormatSymbols::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
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

