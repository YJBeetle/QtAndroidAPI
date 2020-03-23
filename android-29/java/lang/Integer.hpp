#pragma once

#ifndef JAVA_LANG_INTEGER
#define JAVA_LANG_INTEGER

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
	class Integer : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jint MIN_VALUE();
		static jint MAX_VALUE();
		static QAndroidJniObject TYPE();
		static jint SIZE();
		static jint BYTES();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jint arg0);
		
		// Methods
		static jint numberOfLeadingZeros(jint arg0);
		static jint numberOfTrailingZeros(jint arg0);
		static jint bitCount(jint arg0);
		jboolean equals(jobject arg0);
		static QAndroidJniObject toString(jint arg0);
		static QAndroidJniObject toString(jint arg0, jint arg1);
		QAndroidJniObject toString();
		jint hashCode();
		static jint hashCode(jint arg0);
		static jint min(jint arg0, jint arg1);
		static jint max(jint arg0, jint arg1);
		static jint reverseBytes(jint arg0);
		jint compareTo(__jni_impl::java::lang::Integer arg0);
		jint compareTo(jobject arg0);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject toHexString(jint arg0);
		static QAndroidJniObject decode(jstring arg0);
		static jint compare(jint arg0, jint arg1);
		QAndroidJniObject resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0);
		QAndroidJniObject describeConstable();
		static jint reverse(jint arg0);
		static jlong toUnsignedLong(jint arg0);
		static jint parseInt(jstring arg0);
		static jint parseInt(jstring arg0, jint arg1);
		static jint parseInt(jstring arg0, jint arg1, jint arg2, jint arg3);
		static jint sum(jint arg0, jint arg1);
		static jint compareUnsigned(jint arg0, jint arg1);
		static QAndroidJniObject toUnsignedString(jint arg0, jint arg1);
		static QAndroidJniObject toUnsignedString(jint arg0);
		static jint parseUnsignedInt(jstring arg0, jint arg1);
		static jint parseUnsignedInt(jstring arg0);
		static jint parseUnsignedInt(jstring arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject getInteger(jstring arg0, jint arg1);
		static QAndroidJniObject getInteger(jstring arg0);
		static QAndroidJniObject getInteger(jstring arg0, __jni_impl::java::lang::Integer arg1);
		static QAndroidJniObject toOctalString(jint arg0);
		static QAndroidJniObject toBinaryString(jint arg0);
		static jint divideUnsigned(jint arg0, jint arg1);
		static jint remainderUnsigned(jint arg0, jint arg1);
		static jint highestOneBit(jint arg0);
		static jint lowestOneBit(jint arg0);
		static jint rotateLeft(jint arg0, jint arg1);
		static jint rotateRight(jint arg0, jint arg1);
		static jint signum(jint arg0);
	};
} // namespace __jni_impl::java::lang

#include "invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	jint Integer::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Integer",
			"MIN_VALUE");
	}
	jint Integer::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Integer",
			"MAX_VALUE");
	}
	QAndroidJniObject Integer::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Integer",
			"TYPE",
			"Ljava/lang/Class;");
	}
	jint Integer::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Integer",
			"SIZE");
	}
	jint Integer::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Integer",
			"BYTES");
	}
	
	// Constructors
	void Integer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Integer",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Integer::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Integer",
			"(I)V",
			arg0);
	}
	
	// Methods
	jint Integer::numberOfLeadingZeros(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfLeadingZeros",
			"(I)I",
			arg0);
	}
	jint Integer::numberOfTrailingZeros(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"numberOfTrailingZeros",
			"(I)I",
			arg0);
	}
	jint Integer::bitCount(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"bitCount",
			"(I)I",
			arg0);
	}
	jboolean Integer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Integer::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Integer::toString(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Integer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Integer::hashCode(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"hashCode",
			"(I)I",
			arg0);
	}
	jint Integer::min(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"min",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::max(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"max",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::reverseBytes(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"reverseBytes",
			"(I)I",
			arg0);
	}
	jint Integer::compareTo(__jni_impl::java::lang::Integer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Integer;)I",
			arg0.__jniObject().object());
	}
	jint Integer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jbyte Integer::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Integer::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Integer::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Integer::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Integer::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Integer::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	QAndroidJniObject Integer::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0);
	}
	QAndroidJniObject Integer::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"valueOf",
			"(I)Ljava/lang/Integer;",
			arg0);
	}
	QAndroidJniObject Integer::toHexString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toHexString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Integer::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0);
	}
	jint Integer::compare(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"compare",
			"(II)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::resolveConstantDesc(__jni_impl::java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Integer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Integer::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;");
	}
	jint Integer::reverse(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"reverse",
			"(I)I",
			arg0);
	}
	jlong Integer::toUnsignedLong(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Integer",
			"toUnsignedLong",
			"(I)J",
			arg0);
	}
	jint Integer::parseInt(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jint Integer::parseInt(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1);
	}
	jint Integer::parseInt(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseInt",
			"(Ljava/lang/CharSequence;III)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint Integer::sum(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"sum",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::compareUnsigned(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"compareUnsigned",
			"(II)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::toUnsignedString(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::toUnsignedString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toUnsignedString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint Integer::parseUnsignedInt(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1);
	}
	jint Integer::parseUnsignedInt(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jint Integer::parseUnsignedInt(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"parseUnsignedInt",
			"(Ljava/lang/CharSequence;III)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Integer::getInteger(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;I)Ljava/lang/Integer;",
			arg0,
			arg1);
	}
	QAndroidJniObject Integer::getInteger(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0);
	}
	QAndroidJniObject Integer::getInteger(jstring arg0, __jni_impl::java::lang::Integer arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"getInteger",
			"(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject Integer::toOctalString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toOctalString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Integer::toBinaryString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Integer",
			"toBinaryString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint Integer::divideUnsigned(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"divideUnsigned",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::remainderUnsigned(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"remainderUnsigned",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::highestOneBit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"highestOneBit",
			"(I)I",
			arg0);
	}
	jint Integer::lowestOneBit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"lowestOneBit",
			"(I)I",
			arg0);
	}
	jint Integer::rotateLeft(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateLeft",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::rotateRight(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"rotateRight",
			"(II)I",
			arg0,
			arg1);
	}
	jint Integer::signum(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Integer",
			"signum",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Integer : public __jni_impl::java::lang::Integer
	{
	public:
		Integer(QAndroidJniObject obj) { __thiz = obj; }
		Integer(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Integer(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_INTEGER

