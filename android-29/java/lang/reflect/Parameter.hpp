#pragma once

#ifndef JAVA_LANG_REFLECT_PARAMETER
#define JAVA_LANG_REFLECT_PARAMETER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::reflect
{
	class Executable;
}

namespace __jni_impl::java::lang::reflect
{
	class Parameter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnnotatedType();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaringExecutable();
		jint getModifiers();
		jstring getName();
		QAndroidJniObject getParameterizedType();
		jclass getType();
		jint hashCode();
		jboolean isImplicit();
		jboolean isNamePresent();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jstring toString();
	};
} // namespace __jni_impl::java::lang::reflect

#include "Executable.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Parameter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Parameter",
			"(V)V");
	}
	
	// Methods
	jboolean Parameter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Parameter::getAnnotatedType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	QAndroidJniObject Parameter::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Parameter::getAnnotations()
	{
		return __thiz.callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Parameter::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Parameter::getDeclaredAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Parameter::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Parameter::getDeclaredAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Parameter::getDeclaringExecutable()
	{
		return __thiz.callObjectMethod(
			"getDeclaringExecutable",
			"()Ljava/lang/reflect/Executable;"
		);
	}
	jint Parameter::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Parameter::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Parameter::getParameterizedType()
	{
		return __thiz.callObjectMethod(
			"getParameterizedType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jclass Parameter::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jint Parameter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Parameter::isImplicit()
	{
		return __thiz.callMethod<jboolean>(
			"isImplicit",
			"()Z"
		);
	}
	jboolean Parameter::isNamePresent()
	{
		return __thiz.callMethod<jboolean>(
			"isNamePresent",
			"()Z"
		);
	}
	jboolean Parameter::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Parameter::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	jstring Parameter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Parameter : public __jni_impl::java::lang::reflect::Parameter
	{
	public:
		Parameter(QAndroidJniObject obj) { __thiz = obj; }
		Parameter()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_PARAMETER

