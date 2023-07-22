#pragma once

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
#include "../StringBuilder.def.hpp"
#include "./Executable.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Executable::accessFlags() const
	{
		return callObjectMethod(
			"accessFlags",
			"()Ljava/util/Set;"
		);
	}
	inline JArray Executable::getAnnotatedExceptionTypes() const
	{
		return callObjectMethod(
			"getAnnotatedExceptionTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JArray Executable::getAnnotatedParameterTypes() const
	{
		return callObjectMethod(
			"getAnnotatedParameterTypes",
			"()[Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Executable::getAnnotatedReceiverType() const
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Executable::getAnnotatedReturnType() const
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Executable::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Executable::getAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Executable::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JClass Executable::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	inline JArray Executable::getExceptionTypes() const
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JArray Executable::getGenericExceptionTypes() const
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline JArray Executable::getGenericParameterTypes() const
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline jint Executable::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline JString Executable::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JArray Executable::getParameterAnnotations() const
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	inline jint Executable::getParameterCount() const
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	inline JArray Executable::getParameterTypes() const
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JArray Executable::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/reflect/Parameter;"
		);
	}
	inline JArray Executable::getTypeParameters() const
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	inline jboolean Executable::isSynthetic() const
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	inline jboolean Executable::isVarArgs() const
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	inline JString Executable::toGenericString() const
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "./AccessibleObject.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
