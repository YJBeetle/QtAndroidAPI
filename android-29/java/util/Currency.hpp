#pragma once

#ifndef JAVA_UTIL_CURRENCY
#define JAVA_UTIL_CURRENCY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::io
{
	class DataInputStream;
}
namespace __jni_impl::java::util
{
	class Properties;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::java::util
{
	class Optional;
}

namespace __jni_impl::java::util
{
	class Currency : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getDisplayName(__jni_impl::java::util::Locale arg0);
		jint getDefaultFractionDigits();
		QAndroidJniObject getCurrencyCode();
		QAndroidJniObject getSymbol();
		QAndroidJniObject getSymbol(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getNumericCodeAsString();
		static QAndroidJniObject getAvailableCurrencies();
		jint getNumericCode();
	};
} // namespace __jni_impl::java::util

#include "HashSet.hpp"
#include "Locale.hpp"
#include "../io/DataInputStream.hpp"
#include "Properties.hpp"
#include "regex/Pattern.hpp"
#include "Optional.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Currency::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Currency",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Currency::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			arg0);
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Currency;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jint Currency::getDefaultFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"()I");
	}
	QAndroidJniObject Currency::getCurrencyCode()
	{
		return __thiz.callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getSymbol()
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getSymbol(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Currency::getNumericCodeAsString()
	{
		return __thiz.callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Currency::getAvailableCurrencies()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;");
	}
	jint Currency::getNumericCode()
	{
		return __thiz.callMethod<jint>(
			"getNumericCode",
			"()I");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Currency : public __jni_impl::java::util::Currency
	{
	public:
		Currency(QAndroidJniObject obj) { __thiz = obj; }
		Currency()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_CURRENCY

