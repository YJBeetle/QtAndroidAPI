#pragma once

#ifndef JAVA_UTIL_CURRENCY
#define JAVA_UTIL_CURRENCY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class DataInputStream;
}
namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class Optional;
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
	class Currency : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getAvailableCurrencies();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jstring getCurrencyCode();
		jint getDefaultFractionDigits();
		jstring getDisplayName();
		jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		jint getNumericCode();
		jstring getNumericCodeAsString();
		jstring getSymbol();
		jstring getSymbol(__jni_impl::java::util::Locale arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::util

#include "../io/DataInputStream.hpp"
#include "HashSet.hpp"
#include "Locale.hpp"
#include "Optional.hpp"
#include "Properties.hpp"
#include "regex/Pattern.hpp"

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
	QAndroidJniObject Currency::getAvailableCurrencies()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getAvailableCurrencies",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Currency::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			arg0
		);
	}
	QAndroidJniObject Currency::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/lang/String;)Ljava/util/Currency;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Currency::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Currency",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/util/Currency;",
			arg0.__jniObject().object()
		);
	}
	jstring Currency::getCurrencyCode()
	{
		return __thiz.callObjectMethod(
			"getCurrencyCode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Currency::getDefaultFractionDigits()
	{
		return __thiz.callMethod<jint>(
			"getDefaultFractionDigits",
			"()I"
		);
	}
	jstring Currency::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint Currency::getNumericCode()
	{
		return __thiz.callMethod<jint>(
			"getNumericCode",
			"()I"
		);
	}
	jstring Currency::getNumericCodeAsString()
	{
		return __thiz.callObjectMethod(
			"getNumericCodeAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol()
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Currency::getSymbol(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getSymbol",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Currency::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

