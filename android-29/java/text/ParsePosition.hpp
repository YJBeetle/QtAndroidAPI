#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ParsePosition.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline ParsePosition::ParsePosition(jint arg0)
		: JObject(
			"java.text.ParsePosition",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean ParsePosition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ParsePosition::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
	inline jint ParsePosition::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jint ParsePosition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ParsePosition::setErrorIndex(jint arg0) const
	{
		callMethod<void>(
			"setErrorIndex",
			"(I)V",
			arg0
		);
	}
	inline void ParsePosition::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	inline JString ParsePosition::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers

