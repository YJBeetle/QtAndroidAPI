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
		static jint BYTES();
		static jint MAX_EXPONENT();
		static jdouble MAX_VALUE();
		static jint MIN_EXPONENT();
		static jdouble MIN_NORMAL();
		static jdouble MIN_VALUE();
		static jdouble NEGATIVE_INFINITY();
		static jdouble NaN();
		static jdouble POSITIVE_INFINITY();
		static jint SIZE();
		static jclass TYPE();
		
		// Constructors
		void __constructor(jdouble arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static jint compare(jdouble arg0, jdouble arg1);
		static jlong doubleToLongBits(jdouble arg0);
		static jlong doubleToRawLongBits(jdouble arg0);
		static jint hashCode(jdouble arg0);
		static jboolean isFinite(jdouble arg0);
		static jboolean isInfinite(jdouble arg0);
		static jboolean isNaN(jdouble arg0);
		static jdouble longBitsToDouble(jlong arg0);
		static jdouble max(jdouble arg0, jdouble arg1);
		static jdouble min(jdouble arg0, jdouble arg1);
		static jdouble parseDouble(jstring arg0);
		static jdouble parseDouble(const QString &arg0);
		static jdouble sum(jdouble arg0, jdouble arg1);
		static jstring toHexString(jdouble arg0);
		static jstring toString(jdouble arg0);
		static QAndroidJniObject valueOf(jdouble arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jbyte byteValue();
		jint compareTo(__jni_impl::java::lang::Double arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jdouble doubleValue();
		jboolean equals(jobject arg0);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jboolean isInfinite();
		jboolean isNaN();
		jlong longValue();
		QAndroidJniObject resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0);
		jshort shortValue();
		jstring toString();
	};
} // namespace __jni_impl::java::lang

#include "invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jint Double::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"BYTES"
		);
	}
	jint Double::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"MAX_EXPONENT"
		);
	}
	jdouble Double::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MAX_VALUE"
		);
	}
	jint Double::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"MIN_EXPONENT"
		);
	}
	jdouble Double::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_NORMAL"
		);
	}
	jdouble Double::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_VALUE"
		);
	}
	jdouble Double::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"NEGATIVE_INFINITY"
		);
	}
	jdouble Double::NaN()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"NaN"
		);
	}
	jdouble Double::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"java.lang.Double",
			"POSITIVE_INFINITY"
		);
	}
	jint Double::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Double",
			"SIZE"
		);
	}
	jclass Double::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Double",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// Constructors
	void Double::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Double",
			"(D)V",
			arg0
		);
	}
	void Double::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Double::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Double::compare(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Double",
			"compare",
			"(DD)I",
			arg0,
			arg1
		);
	}
	jlong Double::doubleToLongBits(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToLongBits",
			"(D)J",
			arg0
		);
	}
	jlong Double::doubleToRawLongBits(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToRawLongBits",
			"(D)J",
			arg0
		);
	}
	jint Double::hashCode(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Double",
			"hashCode",
			"(D)I",
			arg0
		);
	}
	jboolean Double::isFinite(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isFinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isInfinite(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isInfinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isNaN(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Double",
			"isNaN",
			"(D)Z",
			arg0
		);
	}
	jdouble Double::longBitsToDouble(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"longBitsToDouble",
			"(J)D",
			arg0
		);
	}
	jdouble Double::max(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::min(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::parseDouble(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble Double::parseDouble(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jdouble Double::sum(jdouble arg0, jdouble arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.lang.Double",
			"sum",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jstring Double::toHexString(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"toHexString",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Double::toString(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"toString",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Double::valueOf(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(D)Ljava/lang/Double;",
			arg0
		);
	}
	QAndroidJniObject Double::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	QAndroidJniObject Double::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyte Double::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Double::compareTo(__jni_impl::java::lang::Double arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Double;)I",
			arg0.__jniObject().object()
		);
	}
	jint Double::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Double::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Double::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Double::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Double::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Double::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Double::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Double::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Double::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Double::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	QAndroidJniObject Double::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;",
			arg0.__jniObject().object()
		);
	}
	jshort Double::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Double::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

