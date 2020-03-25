#pragma once

#ifndef ANDROID_UTIL_HALF
#define ANDROID_UTIL_HALF

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Number.hpp"


namespace __jni_impl::android::util
{
	class Half : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jshort EPSILON();
		static jshort LOWEST_VALUE();
		static jint MAX_EXPONENT();
		static jshort MAX_VALUE();
		static jint MIN_EXPONENT();
		static jshort MIN_NORMAL();
		static jshort MIN_VALUE();
		static jshort NEGATIVE_INFINITY();
		static jshort NEGATIVE_ZERO();
		static jshort NaN();
		static jshort POSITIVE_INFINITY();
		static jshort POSITIVE_ZERO();
		static jint SIZE();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jdouble arg0);
		void __constructor(jfloat arg0);
		void __constructor(jshort arg0);
		
		// Methods
		static jboolean equals(jshort arg0, jshort arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		static QAndroidJniObject toString(jshort arg0);
		jint hashCode();
		static jint hashCode(jshort arg0);
		static jshort abs(jshort arg0);
		static jshort min(jshort arg0, jshort arg1);
		static jshort max(jshort arg0, jshort arg1);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::util::Half arg0);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jfloat arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(jshort arg0);
		static QAndroidJniObject toHexString(jshort arg0);
		static jint compare(jshort arg0, jshort arg1);
		jboolean isNaN();
		static jboolean isNaN(jshort arg0);
		static jboolean isInfinite(jshort arg0);
		static jshort copySign(jshort arg0, jshort arg1);
		static jint getExponent(jshort arg0);
		static jshort ceil(jshort arg0);
		static jshort floor(jshort arg0);
		static jshort round(jshort arg0);
		static jboolean isNormalized(jshort arg0);
		static jfloat toFloat(jshort arg0);
		jshort halfValue();
		static jshort halfToShortBits(jshort arg0);
		static jint halfToIntBits(jshort arg0);
		static jint halfToRawIntBits(jshort arg0);
		static jshort intBitsToHalf(jint arg0);
		static jshort trunc(jshort arg0);
		static jboolean less(jshort arg0, jshort arg1);
		static jboolean lessEquals(jshort arg0, jshort arg1);
		static jboolean greater(jshort arg0, jshort arg1);
		static jboolean greaterEquals(jshort arg0, jshort arg1);
		static jint getSign(jshort arg0);
		static jint getSignificand(jshort arg0);
		static jshort toHalf(jfloat arg0);
		static jshort parseHalf(jstring arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jshort Half::EPSILON()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"EPSILON");
	}
	jshort Half::LOWEST_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"LOWEST_VALUE");
	}
	jint Half::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"MAX_EXPONENT");
	}
	jshort Half::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MAX_VALUE");
	}
	jint Half::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"MIN_EXPONENT");
	}
	jshort Half::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MIN_NORMAL");
	}
	jshort Half::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"MIN_VALUE");
	}
	jshort Half::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_INFINITY");
	}
	jshort Half::NEGATIVE_ZERO()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NEGATIVE_ZERO");
	}
	jshort Half::NaN()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"NaN");
	}
	jshort Half::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_INFINITY");
	}
	jshort Half::POSITIVE_ZERO()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"android.util.Half",
			"POSITIVE_ZERO");
	}
	jint Half::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Half",
			"SIZE");
	}
	
	// Constructors
	void Half::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Half::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(D)V",
			arg0);
	}
	void Half::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(F)V",
			arg0);
	}
	void Half::__constructor(jshort arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.Half",
			"(S)V",
			arg0);
	}
	
	// Methods
	jboolean Half::equals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"equals",
			"(SS)Z",
			arg0,
			arg1);
	}
	jboolean Half::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Half::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Half::toString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"toString",
			"(S)Ljava/lang/String;",
			arg0);
	}
	jint Half::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Half::hashCode(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"hashCode",
			"(S)I",
			arg0);
	}
	jshort Half::abs(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"abs",
			"(S)S",
			arg0);
	}
	jshort Half::min(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"min",
			"(SS)S",
			arg0,
			arg1);
	}
	jshort Half::max(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"max",
			"(SS)S",
			arg0,
			arg1);
	}
	jint Half::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Half::compareTo(__jni_impl::android::util::Half arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/util/Half;)I",
			arg0.__jniObject().object());
	}
	jbyte Half::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Half::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Half::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Half::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Half::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Half::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject Half::valueOf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(F)Landroid/util/Half;",
			arg0);
	}
	QAndroidJniObject Half::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(Ljava/lang/String;)Landroid/util/Half;",
			arg0);
	}
	QAndroidJniObject Half::valueOf(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"valueOf",
			"(S)Landroid/util/Half;",
			arg0);
	}
	QAndroidJniObject Half::toHexString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Half",
			"toHexString",
			"(S)Ljava/lang/String;",
			arg0);
	}
	jint Half::compare(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"compare",
			"(SS)I",
			arg0,
			arg1);
	}
	jboolean Half::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z");
	}
	jboolean Half::isNaN(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isNaN",
			"(S)Z",
			arg0);
	}
	jboolean Half::isInfinite(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isInfinite",
			"(S)Z",
			arg0);
	}
	jshort Half::copySign(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"copySign",
			"(SS)S",
			arg0,
			arg1);
	}
	jint Half::getExponent(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getExponent",
			"(S)I",
			arg0);
	}
	jshort Half::ceil(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"ceil",
			"(S)S",
			arg0);
	}
	jshort Half::floor(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"floor",
			"(S)S",
			arg0);
	}
	jshort Half::round(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"round",
			"(S)S",
			arg0);
	}
	jboolean Half::isNormalized(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"isNormalized",
			"(S)Z",
			arg0);
	}
	jfloat Half::toFloat(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.Half",
			"toFloat",
			"(S)F",
			arg0);
	}
	jshort Half::halfValue()
	{
		return __thiz.callMethod<jshort>(
			"halfValue",
			"()S");
	}
	jshort Half::halfToShortBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"halfToShortBits",
			"(S)S",
			arg0);
	}
	jint Half::halfToIntBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"halfToIntBits",
			"(S)I",
			arg0);
	}
	jint Half::halfToRawIntBits(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"halfToRawIntBits",
			"(S)I",
			arg0);
	}
	jshort Half::intBitsToHalf(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"intBitsToHalf",
			"(I)S",
			arg0);
	}
	jshort Half::trunc(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"trunc",
			"(S)S",
			arg0);
	}
	jboolean Half::less(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"less",
			"(SS)Z",
			arg0,
			arg1);
	}
	jboolean Half::lessEquals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"lessEquals",
			"(SS)Z",
			arg0,
			arg1);
	}
	jboolean Half::greater(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"greater",
			"(SS)Z",
			arg0,
			arg1);
	}
	jboolean Half::greaterEquals(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Half",
			"greaterEquals",
			"(SS)Z",
			arg0,
			arg1);
	}
	jint Half::getSign(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getSign",
			"(S)I",
			arg0);
	}
	jint Half::getSignificand(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Half",
			"getSignificand",
			"(S)I",
			arg0);
	}
	jshort Half::toHalf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"toHalf",
			"(F)S",
			arg0);
	}
	jshort Half::parseHalf(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"android.util.Half",
			"parseHalf",
			"(Ljava/lang/String;)S",
			arg0);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Half : public __jni_impl::android::util::Half
	{
	public:
		Half(QAndroidJniObject obj) { __thiz = obj; }
		Half(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Half(jdouble arg0)
		{
			__constructor(
				arg0);
		}
		Half(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		Half(jshort arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_HALF

