#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./Method.def.hpp"
#include "./RecordComponent.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::reflect::Method RecordComponent::getAccessor() const
	{
		return callObjectMethod(
			"getAccessor",
			"()Ljava/lang/reflect/Method;"
		);
	}
	inline JObject RecordComponent::getAnnotatedType() const
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject RecordComponent::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray RecordComponent::getAnnotations() const
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JArray RecordComponent::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JClass RecordComponent::getDeclaringRecord() const
	{
		return callObjectMethod(
			"getDeclaringRecord",
			"()Ljava/lang/Class;"
		);
	}
	inline JString RecordComponent::getGenericSignature() const
	{
		return callObjectMethod(
			"getGenericSignature",
			"()Ljava/lang/String;"
		);
	}
	inline JObject RecordComponent::getGenericType() const
	{
		return callObjectMethod(
			"getGenericType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	inline JString RecordComponent::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JClass RecordComponent::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	inline JString RecordComponent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
