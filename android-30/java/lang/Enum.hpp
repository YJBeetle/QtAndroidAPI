#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.def.hpp"
#include "./Enum.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::Enum Enum::valueOf(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.lang.Enum",
			"valueOf",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	inline jint Enum::compareTo(java::lang::Enum arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Enum;)I",
			arg0.object()
		);
	}
	inline jint Enum::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Enum::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jboolean Enum::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JClass Enum::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	inline jint Enum::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Enum::name() const
	{
		return callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		);
	}
	inline jint Enum::ordinal() const
	{
		return callMethod<jint>(
			"ordinal",
			"()I"
		);
	}
	inline JString Enum::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

