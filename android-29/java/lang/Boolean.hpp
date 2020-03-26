#pragma once

#ifndef JAVA_LANG_BOOLEAN
#define JAVA_LANG_BOOLEAN

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Boolean : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject TRUE();
		static QAndroidJniObject FALSE();
		static jclass TYPE();
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		static jstring toString(jboolean arg0);
		static jint hashCode(jboolean arg0);
		jint hashCode();
		jint compareTo(__jni_impl::java::lang::Boolean arg0);
		jint compareTo(jobject arg0);
		static jboolean getBoolean(jstring arg0);
		jboolean booleanValue();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(jboolean arg0);
		static jint compare(jboolean arg0, jboolean arg1);
		static jboolean parseBoolean(jstring arg0);
		static jboolean logicalAnd(jboolean arg0, jboolean arg1);
		static jboolean logicalOr(jboolean arg0, jboolean arg1);
		static jboolean logicalXor(jboolean arg0, jboolean arg1);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject Boolean::TRUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"TRUE",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject Boolean::FALSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"FALSE",
			"Ljava/lang/Boolean;"
		);
	}
	jclass Boolean::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Boolean",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// Constructors
	void Boolean::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Boolean",
			"(Z)V",
			arg0);
	}
	void Boolean::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Boolean",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jboolean Boolean::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Boolean::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Boolean::toString(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"toString",
			"(Z)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Boolean::hashCode(jboolean arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Boolean",
			"hashCode",
			"(Z)I",
			arg0
		);
	}
	jint Boolean::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Boolean::compareTo(__jni_impl::java::lang::Boolean arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Boolean;)I",
			arg0.__jniObject().object()
		);
	}
	jint Boolean::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Boolean::getBoolean(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Boolean::booleanValue()
	{
		return __thiz.callMethod<jboolean>(
			"booleanValue",
			"()Z"
		);
	}
	QAndroidJniObject Boolean::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	QAndroidJniObject Boolean::valueOf(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Boolean",
			"valueOf",
			"(Z)Ljava/lang/Boolean;",
			arg0
		);
	}
	jint Boolean::compare(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Boolean",
			"compare",
			"(ZZ)I",
			arg0,
			arg1
		);
	}
	jboolean Boolean::parseBoolean(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"parseBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Boolean::logicalAnd(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalAnd",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalOr(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalOr",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean Boolean::logicalXor(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Boolean",
			"logicalXor",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Boolean : public __jni_impl::java::lang::Boolean
	{
	public:
		Boolean(QAndroidJniObject obj) { __thiz = obj; }
		Boolean(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		Boolean(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_BOOLEAN

