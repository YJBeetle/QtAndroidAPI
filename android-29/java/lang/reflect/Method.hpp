#pragma once

#ifndef JAVA_LANG_REFLECT_METHOD
#define JAVA_LANG_REFLECT_METHOD

#include "../../../__JniBaseClass.hpp"
#include "AccessibleObject.hpp"
#include "Executable.hpp"

namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::lang::reflect
{
	class AccessibleObject;
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
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jclass getDeclaringClass();
		jobject getDefaultValue();
		jarray getExceptionTypes();
		jarray getGenericExceptionTypes();
		jarray getGenericParameterTypes();
		QAndroidJniObject getGenericReturnType();
		jint getModifiers();
		jstring getName();
		jarray getParameterAnnotations();
		jint getParameterCount();
		jarray getParameterTypes();
		jclass getReturnType();
		jarray getTypeParameters();
		jint hashCode();
		jobject invoke(jobject arg0, jobjectArray arg1);
		jboolean isBridge();
		jboolean isDefault();
		jboolean isSynthetic();
		jboolean isVarArgs();
		void setAccessible(jboolean arg0);
		jstring toGenericString();
		jstring toString();
	};
} // namespace __jni_impl::java::lang::reflect

#include "../StringBuilder.hpp"
#include "AccessibleObject.hpp"

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
	jboolean Method::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Method::getAnnotatedReturnType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	QAndroidJniObject Method::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Method::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jclass Method::getDeclaringClass()
	{
		return __thiz.callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jobject Method::getDefaultValue()
	{
		return __thiz.callObjectMethod(
			"getDefaultValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jarray Method::getExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Method::getGenericExceptionTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Method::getGenericParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	QAndroidJniObject Method::getGenericReturnType()
	{
		return __thiz.callObjectMethod(
			"getGenericReturnType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jint Method::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Method::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Method::getParameterAnnotations()
	{
		return __thiz.callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jint Method::getParameterCount()
	{
		return __thiz.callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	jarray Method::getParameterTypes()
	{
		return __thiz.callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jclass Method::getReturnType()
	{
		return __thiz.callObjectMethod(
			"getReturnType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray Method::getTypeParameters()
	{
		return __thiz.callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		).object<jarray>();
	}
	jint Method::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Method::invoke(jobject arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"invoke",
			"(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Method::isBridge()
	{
		return __thiz.callMethod<jboolean>(
			"isBridge",
			"()Z"
		);
	}
	jboolean Method::isDefault()
	{
		return __thiz.callMethod<jboolean>(
			"isDefault",
			"()Z"
		);
	}
	jboolean Method::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Method::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	void Method::setAccessible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	jstring Method::toGenericString()
	{
		return __thiz.callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Method::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

