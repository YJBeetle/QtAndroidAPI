#pragma once

#ifndef JAVA_LANG_REFLECT_EXECUTABLE
#define JAVA_LANG_REFLECT_EXECUTABLE

#include "../../../__JniBaseClass.hpp"
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
		jstring getName();
		jint getModifiers();
		jarray getTypeParameters();
		jarray getParameterTypes();
		jstring toGenericString();
		jboolean isSynthetic();
		jclass getDeclaringClass();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotationsByType(jclass arg0);
		jarray getDeclaredAnnotations();
		jboolean isVarArgs();
		jarray getAnnotatedParameterTypes();
		jint getParameterCount();
		jarray getParameterAnnotations();
		jarray getGenericParameterTypes();
		jarray getGenericExceptionTypes();
		jarray getExceptionTypes();
		QAndroidJniObject getAnnotatedReturnType();
		jarray getParameters();
		QAndroidJniObject getAnnotatedReceiverType();
		jarray getAnnotatedExceptionTypes();
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
	jstring Executable::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Executable::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jarray Executable::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		).object<jarray>();
	}
	jarray Executable::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jstring Executable::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Executable::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jclass Executable::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	QAndroidJniObject Executable::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Executable::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jarray Executable::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jboolean Executable::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	jarray Executable::getAnnotatedParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
	}
	jint Executable::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	jarray Executable::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Executable::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Executable::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Executable::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	QAndroidJniObject Executable::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	jarray Executable::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;"
		).object<jarray>();
	}
	QAndroidJniObject Executable::getAnnotatedReceiverType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	jarray Executable::getAnnotatedExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
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

