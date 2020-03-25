#pragma once

#ifndef JAVA_LANG_REFLECT_METHOD
#define JAVA_LANG_REFLECT_METHOD

#include "../../../__JniBaseClass.hpp"
#include "AccessibleObject.hpp"
#include "Executable.hpp"

namespace __jni_impl::java::lang::reflect
{
	class AccessibleObject;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::lang::reflect
{
	class Method : public __jni_impl::java::lang::reflect::Executable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject invoke(jobject arg0, jobjectArray arg1);
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getModifiers();
		QAndroidJniObject getTypeParameters();
		QAndroidJniObject getReturnType();
		QAndroidJniObject getParameterTypes();
		QAndroidJniObject toGenericString();
		jboolean isSynthetic();
		QAndroidJniObject getDeclaringClass();
		QAndroidJniObject getAnnotation(jclass arg0);
		QAndroidJniObject getDeclaredAnnotations();
		void setAccessible(jboolean arg0);
		jboolean isVarArgs();
		jint getParameterCount();
		QAndroidJniObject getParameterAnnotations();
		QAndroidJniObject getGenericParameterTypes();
		QAndroidJniObject getGenericExceptionTypes();
		jboolean isDefault();
		QAndroidJniObject getGenericReturnType();
		QAndroidJniObject getExceptionTypes();
		jboolean isBridge();
		QAndroidJniObject getDefaultValue();
		QAndroidJniObject getAnnotatedReturnType();
	};
} // namespace __jni_impl::java::lang::reflect

#include "AccessibleObject.hpp"
#include "../StringBuilder.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Method::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Method",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Method::invoke(jobject arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"invoke",
			"(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject Method::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Method::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Method::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Method::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Method::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	QAndroidJniObject Method::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;");
	}
	QAndroidJniObject Method::getReturnType()
	{
		return __thiz.callObjectMethod(
			"getReturnType",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Method::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;");
	}
	QAndroidJniObject Method::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;");
	}
	jboolean Method::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z");
	}
	QAndroidJniObject Method::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Method::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Method::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	void Method::setAccessible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0);
	}
	jboolean Method::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z");
	}
	jint Method::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I");
	}
	QAndroidJniObject Method::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;");
	}
	QAndroidJniObject Method::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Method::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	jboolean Method::isDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isDefault",
			"()Z");
	}
	QAndroidJniObject Method::getGenericReturnType()
	{
		return __thiz.callObjectMethod(
			"getGenericReturnType",
			"()Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Method::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;");
	}
	jboolean Method::isBridge()
	{
		return __thiz.callMethod<jboolean>(
			"isBridge",
			"()Z");
	}
	QAndroidJniObject Method::getDefaultValue()
	{
		return __thiz.callObjectMethod(
			"getDefaultValue",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject Method::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Method : public __jni_impl::java::lang::reflect::Method
	{
	public:
		Method(QAndroidJniObject obj) { __thiz = obj; }
		Method()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_METHOD

