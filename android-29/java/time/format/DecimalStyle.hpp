#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time::format
{
	class DecimalStyle : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject STANDARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getAvailableLocales();
		static QAndroidJniObject of(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject ofDefaultLocale();
		jboolean equals(jobject arg0);
		jchar getDecimalSeparator();
		jchar getNegativeSign();
		jchar getPositiveSign();
		jchar getZeroDigit();
		jint hashCode();
		jstring toString();
		QAndroidJniObject withDecimalSeparator(jchar arg0);
		QAndroidJniObject withNegativeSign(jchar arg0);
		QAndroidJniObject withPositiveSign(jchar arg0);
		QAndroidJniObject withZeroDigit(jchar arg0);
	};
} // namespace __jni_impl::java::time::format

#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::format
{
	// Fields
	QAndroidJniObject DecimalStyle::STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DecimalStyle",
			"STANDARD",
			"Ljava/time/format/DecimalStyle;"
		);
	}
	
	// Constructors
	void DecimalStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DecimalStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DecimalStyle::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"getAvailableLocales",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject DecimalStyle::of(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"of",
			"(Ljava/util/Locale;)Ljava/time/format/DecimalStyle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DecimalStyle::ofDefaultLocale()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DecimalStyle",
			"ofDefaultLocale",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	jboolean DecimalStyle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jchar DecimalStyle::getDecimalSeparator()
	{
		return __thiz.callMethod<jchar>(
			"getDecimalSeparator",
			"()C"
		);
	}
	jchar DecimalStyle::getNegativeSign()
	{
		return __thiz.callMethod<jchar>(
			"getNegativeSign",
			"()C"
		);
	}
	jchar DecimalStyle::getPositiveSign()
	{
		return __thiz.callMethod<jchar>(
			"getPositiveSign",
			"()C"
		);
	}
	jchar DecimalStyle::getZeroDigit()
	{
		return __thiz.callMethod<jchar>(
			"getZeroDigit",
			"()C"
		);
	}
	jint DecimalStyle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DecimalStyle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DecimalStyle::withDecimalSeparator(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"withDecimalSeparator",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withNegativeSign(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"withNegativeSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withPositiveSign(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"withPositiveSign",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
	QAndroidJniObject DecimalStyle::withZeroDigit(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"withZeroDigit",
			"(C)Ljava/time/format/DecimalStyle;",
			arg0
		);
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class DecimalStyle : public __jni_impl::java::time::format::DecimalStyle
	{
	public:
		DecimalStyle(QAndroidJniObject obj) { __thiz = obj; }
		DecimalStyle()
		{
			__constructor();
		}
	};
} // namespace java::time::format

