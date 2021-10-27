#pragma once

#ifndef JAVA_LANG_FLOAT
#define JAVA_LANG_FLOAT

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
	class Float : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jint BYTES();
		static jint MAX_EXPONENT();
		static jfloat MAX_VALUE();
		static jint MIN_EXPONENT();
		static jfloat MIN_NORMAL();
		static jfloat MIN_VALUE();
		static jfloat NEGATIVE_INFINITY();
		static jfloat NaN();
		static jfloat POSITIVE_INFINITY();
		static jint SIZE();
		static jclass TYPE();
		
		// Constructors
		void __constructor(jdouble arg0);
		void __constructor(jfloat arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static jint compare(jfloat arg0, jfloat arg1);
		static jint floatToIntBits(jfloat arg0);
		static jint floatToRawIntBits(jfloat arg0);
		static jint hashCode(jfloat arg0);
		static jfloat intBitsToFloat(jint arg0);
		static jboolean isFinite(jfloat arg0);
		static jboolean isInfinite(jfloat arg0);
		static jboolean isNaN(jfloat arg0);
		static jfloat max(jfloat arg0, jfloat arg1);
		static jfloat min(jfloat arg0, jfloat arg1);
		static jfloat parseFloat(jstring arg0);
		static jfloat parseFloat(const QString &arg0);
		static jfloat sum(jfloat arg0, jfloat arg1);
		static jstring toHexString(jfloat arg0);
		static jstring toString(jfloat arg0);
		static QAndroidJniObject valueOf(jfloat arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jbyte byteValue();
		jint compareTo(__jni_impl::java::lang::Float arg0);
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
	jint Float::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"BYTES"
		);
	}
	jint Float::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MAX_EXPONENT"
		);
	}
	jfloat Float::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MAX_VALUE"
		);
	}
	jint Float::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MIN_EXPONENT"
		);
	}
	jfloat Float::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_NORMAL"
		);
	}
	jfloat Float::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_VALUE"
		);
	}
	jfloat Float::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NEGATIVE_INFINITY"
		);
	}
	jfloat Float::NaN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NaN"
		);
	}
	jfloat Float::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"POSITIVE_INFINITY"
		);
	}
	jint Float::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"SIZE"
		);
	}
	jclass Float::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Float",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// Constructors
	void Float::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(D)V",
			arg0
		);
	}
	void Float::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(F)V",
			arg0
		);
	}
	void Float::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Float::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Float::compare(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"compare",
			"(FF)I",
			arg0,
			arg1
		);
	}
	jint Float::floatToIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::floatToRawIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToRawIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::hashCode(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"hashCode",
			"(F)I",
			arg0
		);
	}
	jfloat Float::intBitsToFloat(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"intBitsToFloat",
			"(I)F",
			arg0
		);
	}
	jboolean Float::isFinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isFinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isInfinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isInfinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isNaN(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isNaN",
			"(F)Z",
			arg0
		);
	}
	jfloat Float::max(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::min(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::parseFloat(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Float::parseFloat(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jfloat Float::sum(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"sum",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jstring Float::toHexString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toHexString",
			"(F)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Float::toString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toString",
			"(F)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Float::valueOf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(F)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject Float::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject Float::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyte Float::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Float::compareTo(__jni_impl::java::lang::Float arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Float;)I",
			arg0.__jniObject().object()
		);
	}
	jint Float::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Float::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Float::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Float::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Float::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Float::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Float::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Float::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Float::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Float::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	QAndroidJniObject Float::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;",
			arg0.__jniObject().object()
		);
	}
	jshort Float::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Float::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Float : public __jni_impl::java::lang::Float
	{
	public:
		Float(QAndroidJniObject obj) { __thiz = obj; }
		Float(jdouble arg0)
		{
			__constructor(
				arg0);
		}
		Float(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		Float(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_FLOAT

