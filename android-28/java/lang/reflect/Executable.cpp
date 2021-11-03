#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../StringBuilder.hpp"
#include "./Executable.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	Executable::Executable(QAndroidJniObject obj) : java::lang::reflect::AccessibleObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray Executable::getAnnotatedExceptionTypes()
	{
		return callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JArray Executable::getAnnotatedParameterTypes()
	{
		return callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Executable::getAnnotatedReceiverType()
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Executable::getAnnotatedReturnType()
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Executable::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Executable::getAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Executable::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JClass Executable::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	JArray Executable::getExceptionTypes()
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Executable::getGenericExceptionTypes()
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	JArray Executable::getGenericParameterTypes()
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	jint Executable::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Executable::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray Executable::getParameterAnnotations()
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	jint Executable::getParameterCount()
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	JArray Executable::getParameterTypes()
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Executable::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;"
		);
	}
	JArray Executable::getTypeParameters()
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
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
	JString Executable::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

