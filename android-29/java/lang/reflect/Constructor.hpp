#pragma once

#ifndef JAVA_LANG_REFLECT_CONSTRUCTOR
#define JAVA_LANG_REFLECT_CONSTRUCTOR

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
	class Constructor : public __jni_impl::java::lang::reflect::Executable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getModifiers();
		QAndroidJniObject getTypeParameters();
		QAndroidJniObject newInstance(jobjectArray arg0);
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
		QAndroidJniObject getExceptionTypes();
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotatedReceiverType();
	};
} // namespace __jni_impl::java::lang::reflect

#include "AccessibleObject.hpp"
#include "../StringBuilder.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Constructor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Constructor",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Constructor::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Constructor::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Constructor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Constructor::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Constructor::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	QAndroidJniObject Constructor::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;");
	}
	QAndroidJniObject Constructor::newInstance(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"newInstance",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Constructor::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;");
	}
	QAndroidJniObject Constructor::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;");
	}
	jboolean Constructor::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z");
	}
	QAndroidJniObject Constructor::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Constructor::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Constructor::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	void Constructor::setAccessible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0);
	}
	jboolean Constructor::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z");
	}
	jint Constructor::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I");
	}
	QAndroidJniObject Constructor::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;");
	}
	QAndroidJniObject Constructor::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Constructor::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Constructor::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;");
	}
	QAndroidJniObject Constructor::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
	QAndroidJniObject Constructor::getAnnotatedReceiverType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Constructor : public __jni_impl::java::lang::reflect::Constructor
	{
	public:
		Constructor(QAndroidJniObject obj) { __thiz = obj; }
		Constructor()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_CONSTRUCTOR

