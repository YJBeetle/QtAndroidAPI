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
		static jfloat POSITIVE_INFINITY();
		static jfloat NEGATIVE_INFINITY();
		static jfloat NaN();
		static jfloat MAX_VALUE();
		static jfloat MIN_NORMAL();
		static jfloat MIN_VALUE();
		static jint MAX_EXPONENT();
		static jint MIN_EXPONENT();
		static jint SIZE();
		static jint BYTES();
		static QAndroidJniObject TYPE();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jdouble arg0);
		void __constructor(jfloat arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		static QAndroidJniObject toString(jfloat arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static jint hashCode(jfloat arg0);
		static jfloat min(jfloat arg0, jfloat arg1);
		static jfloat max(jfloat arg0, jfloat arg1);
		static jint floatToRawIntBits(jfloat arg0);
		static jint floatToIntBits(jfloat arg0);
		static jfloat intBitsToFloat(jint arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::lang::Float arg0);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jfloat arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject toHexString(jfloat arg0);
		static jint compare(jfloat arg0, jfloat arg1);
		QAndroidJniObject resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0);
		QAndroidJniObject describeConstable();
		static jboolean isNaN(jfloat arg0);
		jboolean isNaN();
		static jfloat parseFloat(jstring arg0);
		jboolean isInfinite();
		static jboolean isInfinite(jfloat arg0);
		static jboolean isFinite(jfloat arg0);
		static jfloat sum(jfloat arg0, jfloat arg1);
	};
} // namespace __jni_impl::java::lang

#include "invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jfloat Float::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"POSITIVE_INFINITY");
	}
	jfloat Float::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NEGATIVE_INFINITY");
	}
	jfloat Float::NaN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NaN");
	}
	jfloat Float::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MAX_VALUE");
	}
	jfloat Float::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_NORMAL");
	}
	jfloat Float::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_VALUE");
	}
	jint Float::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MAX_EXPONENT");
	}
	jint Float::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MIN_EXPONENT");
	}
	jint Float::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"SIZE");
	}
	jint Float::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"BYTES");
	}
	QAndroidJniObject Float::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Float",
			"TYPE",
			"Ljava/lang/Class;");
	}
	
	// Constructors
	void Float::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Float::__constructor(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(D)V",
			arg0);
	}
	void Float::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(F)V",
			arg0);
	}
	
	// Methods
	jboolean Float::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Float::toString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toString",
			"(F)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Float::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Float::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Float::hashCode(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"hashCode",
			"(F)I",
			arg0);
	}
	jfloat Float::min(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"min",
			"(FF)F",
			arg0,
			arg1);
	}
	jfloat Float::max(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"max",
			"(FF)F",
			arg0,
			arg1);
	}
	jint Float::floatToRawIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToRawIntBits",
			"(F)I",
			arg0);
	}
	jint Float::floatToIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToIntBits",
			"(F)I",
			arg0);
	}
	jfloat Float::intBitsToFloat(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"intBitsToFloat",
			"(I)F",
			arg0);
	}
	jint Float::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Float::compareTo(__jni_impl::java::lang::Float arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Float;)I",
			arg0.__jniObject().object());
	}
	jbyte Float::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Float::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Float::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Float::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Float::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Float::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject Float::valueOf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(F)Ljava/lang/Float;",
			arg0);
	}
	QAndroidJniObject Float::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0);
	}
	QAndroidJniObject Float::toHexString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toHexString",
			"(F)Ljava/lang/String;",
			arg0);
	}
	jint Float::compare(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"compare",
			"(FF)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Float::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Float::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;");
	}
	jboolean Float::isNaN(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isNaN",
			"(F)Z",
			arg0);
	}
	jboolean Float::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z");
	}
	jfloat Float::parseFloat(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			arg0);
	}
	jboolean Float::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z");
	}
	jboolean Float::isInfinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isInfinite",
			"(F)Z",
			arg0);
	}
	jboolean Float::isFinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isFinite",
			"(F)Z",
			arg0);
	}
	jfloat Float::sum(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"sum",
			"(FF)F",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Float : public __jni_impl::java::lang::Float
	{
	public:
		Float(QAndroidJniObject obj) { __thiz = obj; }
		Float(jstring arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace java::lang

#endif // JAVA_LANG_FLOAT

