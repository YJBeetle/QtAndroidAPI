#pragma once

#ifndef ANDROID_UTIL_RATIONAL
#define ANDROID_UTIL_RATIONAL

#include "../../java/lang/Number.hpp"


namespace __jni_impl::android::util
{
	class Rational : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static QAndroidJniObject NEGATIVE_INFINITY();
		static QAndroidJniObject NaN();
		static QAndroidJniObject POSITIVE_INFINITY();
		static QAndroidJniObject ZERO();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::util::Rational arg0);
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		jboolean isNaN();
		jboolean isInfinite();
		jboolean isFinite();
		jboolean isZero();
		jint getNumerator();
		jint getDenominator();
		static QAndroidJniObject parseRational(jstring arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	QAndroidJniObject Rational::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"NEGATIVE_INFINITY",
			"Landroid/util/Rational;");
	}
	QAndroidJniObject Rational::NaN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"NaN",
			"Landroid/util/Rational;");
	}
	QAndroidJniObject Rational::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"POSITIVE_INFINITY",
			"Landroid/util/Rational;");
	}
	QAndroidJniObject Rational::ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.Rational",
			"ZERO",
			"Landroid/util/Rational;");
	}
	
	// Constructors
	void Rational::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Rational",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean Rational::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Rational::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Rational::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Rational::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Rational::compareTo(__jni_impl::android::util::Rational arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/util/Rational;)I",
			arg0.__jniObject().object());
	}
	jshort Rational::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Rational::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Rational::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Rational::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Rational::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	jboolean Rational::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z");
	}
	jboolean Rational::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z");
	}
	jboolean Rational::isFinite()
	{
		return __thiz.callMethod<jboolean>(
			"isFinite",
			"()Z");
	}
	jboolean Rational::isZero()
	{
		return __thiz.callMethod<jboolean>(
			"isZero",
			"()Z");
	}
	jint Rational::getNumerator()
	{
		return __thiz.callMethod<jint>(
			"getNumerator",
			"()I");
	}
	jint Rational::getDenominator()
	{
		return __thiz.callMethod<jint>(
			"getDenominator",
			"()I");
	}
	QAndroidJniObject Rational::parseRational(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Rational",
			"parseRational",
			"(Ljava/lang/String;)Landroid/util/Rational;",
			arg0);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Rational : public __jni_impl::android::util::Rational
	{
	public:
		Rational(QAndroidJniObject obj) { __thiz = obj; }
		Rational(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_RATIONAL

