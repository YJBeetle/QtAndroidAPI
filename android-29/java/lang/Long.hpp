#pragma once

#ifndef JAVA_LANG_LONG
#define JAVA_LANG_LONG

#include "Number.hpp"

namespace __jni_impl::java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace __jni_impl::java::util
{
	class Optional;
}
namespace __jni_impl::java::math
{
	class BigInteger;
}

namespace __jni_impl::java::lang
{
	class Long : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jlong MIN_VALUE();
		static jlong MAX_VALUE();
		static QAndroidJniObject TYPE();
		static jint SIZE();
		static jint BYTES();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jlong arg0);
		
		// Methods
		static jint numberOfLeadingZeros(jlong arg0);
		static jint numberOfTrailingZeros(jlong arg0);
		static jint bitCount(jlong arg0);
		jboolean equals(jobject arg0);
		static QAndroidJniObject toString(jlong arg0);
		static QAndroidJniObject toString(jlong arg0, jint arg1);
		QAndroidJniObject toString();
		static jint hashCode(jlong arg0);
		jint hashCode();
		static jlong min(jlong arg0, jlong arg1);
		static jlong max(jlong arg0, jlong arg1);
		static jlong reverseBytes(jlong arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::lang::Long arg0);
		static QAndroidJniObject getLong(jstring arg0);
		static QAndroidJniObject getLong(jstring arg0, jlong arg1);
		static QAndroidJniObject getLong(jstring arg0, __jni_impl::java::lang::Long arg1);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject toHexString(jlong arg0);
		static QAndroidJniObject decode(jstring arg0);
		static jint compare(jlong arg0, jlong arg1);
		QAndroidJniObject resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0);
		QAndroidJniObject describeConstable();
		static jlong reverse(jlong arg0);
		static jlong sum(jlong arg0, jlong arg1);
		static jint compareUnsigned(jlong arg0, jlong arg1);
		static QAndroidJniObject toUnsignedString(jlong arg0);
		static QAndroidJniObject toUnsignedString(jlong arg0, jint arg1);
		static jlong parseLong(jstring arg0);
		static jlong parseLong(jstring arg0, jint arg1);
		static jlong parseLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject toOctalString(jlong arg0);
		static QAndroidJniObject toBinaryString(jlong arg0);
		static jlong divideUnsigned(jlong arg0, jlong arg1);
		static jlong remainderUnsigned(jlong arg0, jlong arg1);
		static jlong highestOneBit(jlong arg0);
		static jlong lowestOneBit(jlong arg0);
		static jlong rotateLeft(jlong arg0, jint arg1);
		static jlong rotateRight(jlong arg0, jint arg1);
		static jint signum(jlong arg0);
		static jlong parseUnsignedLong(jstring arg0);
		static jlong parseUnsignedLong(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jlong parseUnsignedLong(jstring arg0, jint arg1);
	};
} // namespace __jni_impl::java::lang

#include "invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "../math/BigInteger.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jlong Long::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.lang.Long",
			"MIN_VALUE");
	}
	jlong Long::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.lang.Long",
			"MAX_VALUE");
	}
	QAndroidJniObject Long::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Long",
			"TYPE",
			"Ljava/lang/Class;");
	}
	jint Long::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Long",
			"SIZE");
	}
	jint Long::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Long",
			"BYTES");
	}
	
	// Constructors
	void Long::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Long",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Long::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Long",
			"(J)V",
			arg0);
	}
	
	// Methods
	jint Long::numberOfLeadingZeros(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfLeadingZeros",
			"(J)I",
			arg0);
	}
	jint Long::numberOfTrailingZeros(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"numberOfTrailingZeros",
			"(J)I",
			arg0);
	}
	jint Long::bitCount(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"bitCount",
			"(J)I",
			arg0);
	}
	jboolean Long::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Long::toString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(J)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Long::toString(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject Long::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Long::hashCode(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"hashCode",
			"(J)I",
			arg0);
	}
	jint Long::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jlong Long::min(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"min",
			"(JJ)J",
			arg0,
			arg1);
	}
	jlong Long::max(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"max",
			"(JJ)J",
			arg0,
			arg1);
	}
	jlong Long::reverseBytes(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"reverseBytes",
			"(J)J",
			arg0);
	}
	jint Long::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint Long::compareTo(__jni_impl::java::lang::Long arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Long;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Long::getLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0);
	}
	QAndroidJniObject Long::getLong(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;J)Ljava/lang/Long;",
			arg0,
			arg1);
	}
	QAndroidJniObject Long::getLong(jstring arg0, __jni_impl::java::lang::Long arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"getLong",
			"(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;",
			arg0,
			arg1.__jniObject().object());
	}
	jbyte Long::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Long::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Long::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Long::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Long::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Long::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject Long::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Long;",
			arg0,
			arg1);
	}
	QAndroidJniObject Long::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0);
	}
	QAndroidJniObject Long::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"valueOf",
			"(J)Ljava/lang/Long;",
			arg0);
	}
	QAndroidJniObject Long::toHexString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toHexString",
			"(J)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Long::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0);
	}
	jint Long::compare(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"compare",
			"(JJ)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Long::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Long;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Long::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;");
	}
	jlong Long::reverse(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"reverse",
			"(J)J",
			arg0);
	}
	jlong Long::sum(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"sum",
			"(JJ)J",
			arg0,
			arg1);
	}
	jint Long::compareUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"compareUnsigned",
			"(JJ)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Long::toUnsignedString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(J)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Long::toUnsignedString(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toUnsignedString",
			"(JI)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jlong Long::parseLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;)J",
			arg0);
	}
	jlong Long::parseLong(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/String;I)J",
			arg0,
			arg1);
	}
	jlong Long::parseLong(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Long::toOctalString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toOctalString",
			"(J)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Long::toBinaryString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Long",
			"toBinaryString",
			"(J)Ljava/lang/String;",
			arg0);
	}
	jlong Long::divideUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"divideUnsigned",
			"(JJ)J",
			arg0,
			arg1);
	}
	jlong Long::remainderUnsigned(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"remainderUnsigned",
			"(JJ)J",
			arg0,
			arg1);
	}
	jlong Long::highestOneBit(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"highestOneBit",
			"(J)J",
			arg0);
	}
	jlong Long::lowestOneBit(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"lowestOneBit",
			"(J)J",
			arg0);
	}
	jlong Long::rotateLeft(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateLeft",
			"(JI)J",
			arg0,
			arg1);
	}
	jlong Long::rotateRight(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"rotateRight",
			"(JI)J",
			arg0,
			arg1);
	}
	jint Long::signum(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Long",
			"signum",
			"(J)I",
			arg0);
	}
	jlong Long::parseUnsignedLong(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;)J",
			arg0);
	}
	jlong Long::parseUnsignedLong(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/CharSequence;III)J",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jlong Long::parseUnsignedLong(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Long",
			"parseUnsignedLong",
			"(Ljava/lang/String;I)J",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Long : public __jni_impl::java::lang::Long
	{
	public:
		Long(QAndroidJniObject obj) { __thiz = obj; }
		Long(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Long(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_LONG

