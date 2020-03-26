#pragma once

#ifndef JAVA_LANG_ENUM
#define JAVA_LANG_ENUM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Optional;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::lang
{
	class Enum : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring name();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::lang::Enum arg0);
		static QAndroidJniObject valueOf(jclass arg0, jstring arg1);
		QAndroidJniObject describeConstable();
		jclass getDeclaringClass();
		jint ordinal();
	};
} // namespace __jni_impl::java::lang

#include "../util/Optional.hpp"
#include "../io/ObjectInputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Enum::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Enum",
			"(V)V");
	}
	
	// Methods
	jstring Enum::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Enum::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Enum::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Enum::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Enum::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Enum::compareTo(__jni_impl::java::lang::Enum arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Enum;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Enum::valueOf(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Enum",
			"valueOf",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Enum::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jclass Enum::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint Enum::ordinal()
	{
		return __thiz.callMethod<jint>(
			"ordinal",
			"()I"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Enum : public __jni_impl::java::lang::Enum
	{
	public:
		Enum(QAndroidJniObject obj) { __thiz = obj; }
		Enum()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ENUM

