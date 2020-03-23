#pragma once

#ifndef JAVA_LANG_REFLECT_EXECUTABLE
#define JAVA_LANG_REFLECT_EXECUTABLE

#include "AccessibleObject.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::lang::reflect
{
	class Executable : public __jni_impl::java::lang::reflect::AccessibleObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jint getModifiers();
		QAndroidJniObject getTypeParameters();
		QAndroidJniObject getParameterTypes();
		QAndroidJniObject toGenericString();
		jboolean isSynthetic();
		QAndroidJniObject getDeclaringClass();
		QAndroidJniObject getAnnotation(jclass arg0);
		QAndroidJniObject getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotations();
		jboolean isVarArgs();
		QAndroidJniObject getAnnotatedParameterTypes();
		jint getParameterCount();
		QAndroidJniObject getParameterAnnotations();
		QAndroidJniObject getGenericParameterTypes();
		QAndroidJniObject getGenericExceptionTypes();
		QAndroidJniObject getExceptionTypes();
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getParameters();
		QAndroidJniObject getAnnotatedReceiverType();
		QAndroidJniObject getAnnotatedExceptionTypes();
	};
} // namespace __jni_impl::java::lang::reflect

#include "../StringBuilder.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Executable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Executable",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Executable::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jint Executable::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	QAndroidJniObject Executable::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;");
	}
	QAndroidJniObject Executable::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;");
	}
	QAndroidJniObject Executable::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;");
	}
	jboolean Executable::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z");
	}
	QAndroidJniObject Executable::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Executable::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Executable::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Executable::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	jboolean Executable::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z");
	}
	QAndroidJniObject Executable::getAnnotatedParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;");
	}
	jint Executable::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I");
	}
	QAndroidJniObject Executable::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;");
	}
	QAndroidJniObject Executable::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Executable::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;");
	}
	QAndroidJniObject Executable::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;");
	}
	QAndroidJniObject Executable::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
	QAndroidJniObject Executable::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;");
	}
	QAndroidJniObject Executable::getAnnotatedReceiverType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
	QAndroidJniObject Executable::getAnnotatedExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;");
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Executable : public __jni_impl::java::lang::reflect::Executable
	{
	public:
		Executable(QAndroidJniObject obj) { __thiz = obj; }
		Executable()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_EXECUTABLE

