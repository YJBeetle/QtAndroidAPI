#pragma once

#ifndef JAVA_LANG_DOUBLE
#define JAVA_LANG_DOUBLE

#include "../../__JniBaseClass.hpp"
#include "Number.hpp"

namespace __jni_impl::java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace __jni_impl::java::util
{
	class Optional;
}

namespace __jni_impl::java::lang
{
	class Double : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jdouble POSITIVE_INFINITY();
		static jdouble NEGATIVE_INFINITY();
		static jdouble NaN();
		static jdouble MAX_VALUE();
		static jdouble MIN_NORMAL();
		static jdouble MIN_VALUE();
		static jint MAX_EXPONENT();
		static jint MIN_EXPONENT();
		static jint SIZE();
		static jint BYTES();
		static QAndroidJniObject TYPE();
		
		// Constructors
		void __constructor(jdouble arg0);
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		static QAndroidJniObject toString(jdouble arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static jint hashCode(jdouble arg0);
		static jdouble min(jdouble arg0, jdouble arg1);
		static jdouble max(jdouble arg0, jdouble arg1);
		static jlong doubleToRawLongBits(jdouble arg0);
		static jlong doubleToLongBits(jdouble arg0);
		static jdouble longBitsToDouble(jlong arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::lang::Double arg0);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jdouble arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject toHexString(jdouble arg0);
		static jint compare(jdouble arg0, jdouble arg1);
		QAndroidJniObject resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0);
		QAndroidJniObject describeConstable();
		static jboolean isNaN(jdouble arg0);
		jboolean isNaN();
		static jboolean isInfinite(jdouble arg0);
		jboolean isInfinite();
		static jboolean isFinite(jdouble arg0);
		static jdouble sum(jdouble arg0, jdouble arg1);
		static jdouble parseDouble(jstring arg0);
	};
} // namespace __jni_impl::java::lang

#include "invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jdouble Double::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"POSITIVE_INFINITY");
	}
	jdouble Double::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"NEGATIVE_INFINITY");
	}
	jdouble Double::NaN()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"NaN");
	}
	jdouble Double::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MAX_VALUE");
	}
	jdouble Double::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_NORMAL");
	}
	jdouble Double::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_VALUE");
	}
	jint Double::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"MAX_EXPONENT");
	}
	jint Double::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"MIN_EXPONENT");
	}
	jint Double::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"SIZE");
	}
	jint Double::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"BYTES");
	}
	QAndroidJniObject Double::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Double",
			"TYPE",
			"Ljava/lang/Class;");
	}
	
	// Constructors
	void Double::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Double",
			"(D)V",
			arg0);
	}
	void Double::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean Double::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Double::toString(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"toString",
			"(D)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Double::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Double::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Double::hashCode(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Double",
			"hashCode",
			"(D)I",
			arg0);
	}
	jdouble Double::min(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"min",
			"(DD)D",
			arg0,
			arg1);
	}
	jdouble Double::max(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"max",
			"(DD)D",
			arg0,
			arg1);
	}
	jlong Double::doubleToRawLongBits(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToRawLongBits",
			"(D)J",
			arg0);
	}
	jlong Double::doubleToLongBits(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToLongBits",
			"(D)J",
			arg0);
	}
	jdouble Double::longBitsToDouble(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"longBitsToDouble",
			"(J)D",
			arg0);
	}
	jint Double::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Double::compareTo(__jni_impl::java::lang::Double arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Double;)I",
			arg0.__jniObject().object());
	}
	jbyte Double::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Double::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Double::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Double::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Double::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Double::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject Double::valueOf(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(D)Ljava/lang/Double;",
			arg0);
	}
	QAndroidJniObject Double::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0);
	}
	QAndroidJniObject Double::toHexString(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"toHexString",
			"(D)Ljava/lang/String;",
			arg0);
	}
	jint Double::compare(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Double",
			"compare",
			"(DD)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Double::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Double::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;");
	}
	jboolean Double::isNaN(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isNaN",
			"(D)Z",
			arg0);
	}
	jboolean Double::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z");
	}
	jboolean Double::isInfinite(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isInfinite",
			"(D)Z",
			arg0);
	}
	jboolean Double::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z");
	}
	jboolean Double::isFinite(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isFinite",
			"(D)Z",
			arg0);
	}
	jdouble Double::sum(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"sum",
			"(DD)D",
			arg0,
			arg1);
	}
	jdouble Double::parseDouble(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			arg0);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Double : public __jni_impl::java::lang::Double
	{
	public:
		Double(QAndroidJniObject obj) { __thiz = obj; }
		Double(jdouble arg0)
		{
			__constructor(
				arg0);
		}
		Double(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_DOUBLE

