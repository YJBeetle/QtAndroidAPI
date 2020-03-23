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
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getModifiers();
		jboolean isSynthetic();
		QAndroidJniObject getAnnotation(jclass arg0);
		QAndroidJniObject getAnnotationsByType(jclass arg0);
		QAndroidJniObject getAnnotations();
		QAndroidJniObject getDeclaredAnnotation(jclass arg0);
		QAndroidJniObject getDeclaredAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotations();
		QAndroidJniObject getType();
		QAndroidJniObject getAnnotatedType();
		QAndroidJniObject getParameterizedType();
		jboolean isVarArgs();
		jboolean isNamePresent();
		QAndroidJniObject getDeclaringExecutable();
		jboolean isImplicit();
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
	QAndroidJniObject Parameter::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Parameter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Parameter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Parameter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint Parameter::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	jboolean Parameter::isSynthetic()
	{
		return __thiz.callMethod<jboolean>(
			"isSynthetic",
			"()Z");
	}
	QAndroidJniObject Parameter::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Parameter::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Parameter::getAnnotations()
	{
		return __thiz.callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	QAndroidJniObject Parameter::getDeclaredAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Parameter::getDeclaredAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0);
	}
	QAndroidJniObject Parameter::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;");
	}
	QAndroidJniObject Parameter::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;");
	}
	QAndroidJniObject Parameter::getAnnotatedType()
	{
		return __thiz.callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;");
	}
	QAndroidJniObject Parameter::getParameterizedType()
	{
		return __thiz.callObjectMethod(
			"getParameterizedType",
			"()Ljava/lang/reflect/Type;");
	}
	jboolean Parameter::isVarArgs()
	{
		return __thiz.callMethod<jboolean>(
			"isVarArgs",
			"()Z");
	}
	jboolean Parameter::isNamePresent()
	{
		return __thiz.callMethod<jboolean>(
			"isNamePresent",
			"()Z");
	}
	QAndroidJniObject Parameter::getDeclaringExecutable()
	{
		return __thiz.callObjectMethod(
			"getDeclaringExecutable",
			"()Ljava/lang/reflect/Executable;");
	}
	jboolean Parameter::isImplicit()
	{
		return __thiz.callMethod<jboolean>(
			"isImplicit",
			"()Z");
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

