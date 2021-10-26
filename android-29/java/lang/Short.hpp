#pragma once

#ifndef JAVA_LANG_SHORT
#define JAVA_LANG_SHORT

#include "../../__JniBaseClass.hpp"
#include "Number.hpp"


namespace __jni_impl::java::lang
{
	class Short : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		static jshort MIN_VALUE();
		static jshort MAX_VALUE();
		static jclass TYPE();
		static jint SIZE();
		static jint BYTES();
		
		// Constructors
		void __constructor(jshort arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		static jstring toString(jshort arg0);
		jint hashCode();
		static jint hashCode(jshort arg0);
		static jshort reverseBytes(jshort arg0);
		jint compareTo(__jni_impl::java::lang::Short arg0);
		jint compareTo(jobject arg0);
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		static QAndroidJniObject valueOf(jstring arg0, jint arg1);
		static QAndroidJniObject valueOf(const QString &arg0, jint arg1);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static QAndroidJniObject valueOf(jshort arg0);
		static QAndroidJniObject decode(jstring arg0);
		static QAndroidJniObject decode(const QString &arg0);
		static jint compare(jshort arg0, jshort arg1);
		static jlong toUnsignedLong(jshort arg0);
		static jint toUnsignedInt(jshort arg0);
		static jint compareUnsigned(jshort arg0, jshort arg1);
		static jshort parseShort(jstring arg0, jint arg1);
		static jshort parseShort(const QString &arg0, jint arg1);
		static jshort parseShort(jstring arg0);
		static jshort parseShort(const QString &arg0);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	jshort Short::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"java.lang.Short",
			"MIN_VALUE"
		);
	}
	jshort Short::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"java.lang.Short",
			"MAX_VALUE"
		);
	}
	jclass Short::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Short",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	jint Short::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Short",
			"SIZE"
		);
	}
	jint Short::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Short",
			"BYTES"
		);
	}
	
	// Constructors
	void Short::__constructor(jshort arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(S)V",
			arg0
		);
	}
	void Short::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Short::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Short",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jboolean Short::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Short::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Short::toString(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"toString",
			"(S)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Short::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Short::hashCode(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"hashCode",
			"(S)I",
			arg0
		);
	}
	jshort Short::reverseBytes(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"reverseBytes",
			"(S)S",
			arg0
		);
	}
	jint Short::compareTo(__jni_impl::java::lang::Short arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Short;)I",
			arg0.__jniObject().object()
		);
	}
	jint Short::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jbyte Short::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jshort Short::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jint Short::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Short::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat Short::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble Short::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	QAndroidJniObject Short::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Short::valueOf(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Short::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Short::valueOf(jshort arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"valueOf",
			"(S)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject Short::decode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Short",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Short::compare(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"compare",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jlong Short::toUnsignedLong(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Short",
			"toUnsignedLong",
			"(S)J",
			arg0
		);
	}
	jint Short::toUnsignedInt(jshort arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"toUnsignedInt",
			"(S)I",
			arg0
		);
	}
	jint Short::compareUnsigned(jshort arg0, jshort arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Short",
			"compareUnsigned",
			"(SS)I",
			arg0,
			arg1
		);
	}
	jshort Short::parseShort(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			arg0,
			arg1
		);
	}
	jshort Short::parseShort(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;I)S",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jshort Short::parseShort(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Short::parseShort(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jshort>(
			"java.lang.Short",
			"parseShort",
			"(Ljava/lang/String;)S",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Short : public __jni_impl::java::lang::Short
	{
	public:
		Short(QAndroidJniObject obj) { __thiz = obj; }
		Short(jshort arg0)
		{
			__constructor(
				arg0);
		}
		Short(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_SHORT

