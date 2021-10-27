#pragma once

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
		jarray getAnnotatedExceptionTypes();
		jarray getAnnotatedParameterTypes();
		QAndroidJniObject getAnnotatedReceiverType();
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotationsByType(jclass arg0);
		jarray getDeclaredAnnotations();
		jclass getDeclaringClass();
		jarray getExceptionTypes();
		jarray getGenericExceptionTypes();
		jarray getGenericParameterTypes();
		jint getModifiers();
		jstring getName();
		jarray getParameterAnnotations();
		jint getParameterCount();
		jarray getParameterTypes();
		jarray getParameters();
		jarray getTypeParameters();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jstring toGenericString();
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
	jarray Executable::getAnnotatedExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
	}
	jarray Executable::getAnnotatedParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
	}
	QAndroidJniObject Executable::getAnnotatedReceiverType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	QAndroidJniObject Executable::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
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
	jclass Executable::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray Executable::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Executable::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Executable::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jint Executable::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Executable::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Executable::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jint Executable::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	jarray Executable::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Executable::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;"
		).object<jarray>();
	}
	jarray Executable::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		).object<jarray>();
	}
	jboolean Executable::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Executable::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	jstring Executable::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

