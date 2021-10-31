#include "../StringBuilder.hpp"
#include "./AccessibleObject.hpp"
#include "./Method.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	Method::Method(QAndroidJniObject obj) : java::lang::reflect::Executable(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Method::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass Method::getAnnotatedReturnType()
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	__JniBaseClass Method::getAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Method::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jclass Method::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jobject Method::getDefaultValue()
	{
		return callObjectMethod(
			"getDefaultValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jarray Method::getExceptionTypes()
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Method::getGenericExceptionTypes()
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Method::getGenericParameterTypes()
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	__JniBaseClass Method::getGenericReturnType()
	{
		return callObjectMethod(
			"getGenericReturnType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jint Method::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Method::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Method::getParameterAnnotations()
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jint Method::getParameterCount()
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	jarray Method::getParameterTypes()
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jclass Method::getReturnType()
	{
		return callObjectMethod(
			"getReturnType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray Method::getTypeParameters()
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		).object<jarray>();
	}
	jint Method::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Method::invoke(jobject arg0, jobjectArray arg1)
	{
		return callObjectMethod(
			"invoke",
			"(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean Method::isBridge()
	{
		return callMethod<jboolean>(
			"isBridge",
			"()Z"
		);
	}
	jboolean Method::isDefault()
	{
		return callMethod<jboolean>(
			"isDefault",
			"()Z"
		);
	}
	jboolean Method::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Method::isVarArgs()
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	void Method::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	jstring Method::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Method::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::reflect

