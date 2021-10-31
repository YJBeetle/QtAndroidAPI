#include "../StringBuilder.hpp"
#include "./Executable.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	Executable::Executable(QJniObject obj) : java::lang::reflect::AccessibleObject(obj) {}
	
	// Constructors
	
	// Methods
	jarray Executable::getAnnotatedExceptionTypes()
	{
		return callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
	}
	jarray Executable::getAnnotatedParameterTypes()
	{
		return callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		).object<jarray>();
	}
	__JniBaseClass Executable::getAnnotatedReceiverType()
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	__JniBaseClass Executable::getAnnotatedReturnType()
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	__JniBaseClass Executable::getAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Executable::getAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jarray Executable::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jclass Executable::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jarray Executable::getExceptionTypes()
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Executable::getGenericExceptionTypes()
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jarray Executable::getGenericParameterTypes()
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		).object<jarray>();
	}
	jint Executable::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	jstring Executable::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Executable::getParameterAnnotations()
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jint Executable::getParameterCount()
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	jarray Executable::getParameterTypes()
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		).object<jarray>();
	}
	jarray Executable::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;"
		).object<jarray>();
	}
	jarray Executable::getTypeParameters()
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		).object<jarray>();
	}
	jboolean Executable::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Executable::isVarArgs()
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	jstring Executable::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::reflect

