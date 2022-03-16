#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../StringBuilder.def.hpp"
#include "./AccessibleObject.def.hpp"
#include "./Method.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Method::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Method::getAnnotatedReturnType() const
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Method::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Method::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JClass Method::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	inline JObject Method::getDefaultValue() const
	{
		return callObjectMethod(
			"getDefaultValue",
			"()Ljava/lang/Object;"
		);
	}
	inline JArray Method::getExceptionTypes() const
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JArray Method::getGenericExceptionTypes() const
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline JArray Method::getGenericParameterTypes() const
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline JObject Method::getGenericReturnType() const
	{
		return callObjectMethod(
			"getGenericReturnType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	inline jint Method::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline JString Method::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JArray Method::getParameterAnnotations() const
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	inline jint Method::getParameterCount() const
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	inline JArray Method::getParameterTypes() const
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JClass Method::getReturnType() const
	{
		return callObjectMethod(
			"getReturnType",
			"()Ljava/lang/Class;"
		);
	}
	inline JArray Method::getTypeParameters() const
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	inline jint Method::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject Method::invoke(JObject arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"invoke",
			"(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobjectArray>()
		);
	}
	inline jboolean Method::isBridge() const
	{
		return callMethod<jboolean>(
			"isBridge",
			"()Z"
		);
	}
	inline jboolean Method::isDefault() const
	{
		return callMethod<jboolean>(
			"isDefault",
			"()Z"
		);
	}
	inline jboolean Method::isSynthetic() const
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	inline jboolean Method::isVarArgs() const
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	inline void Method::setAccessible(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	inline JString Method::toGenericString() const
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Method::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "./AccessibleObject.hpp"
#include "./Executable.hpp"

