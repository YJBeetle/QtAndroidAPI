#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../lang/Integer.def.hpp"
#include "../../../JString.hpp"
#include "./CoderResult.def.hpp"

namespace java::nio::charset
{
	// Fields
	inline java::nio::charset::CoderResult CoderResult::OVERFLOW()
	{
		return getStaticObjectField(
			"java.nio.charset.CoderResult",
			"OVERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	inline java::nio::charset::CoderResult CoderResult::UNDERFLOW()
	{
		return getStaticObjectField(
			"java.nio.charset.CoderResult",
			"UNDERFLOW",
			"Ljava/nio/charset/CoderResult;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::charset::CoderResult CoderResult::malformedForLength(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"malformedForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	inline java::nio::charset::CoderResult CoderResult::unmappableForLength(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.charset.CoderResult",
			"unmappableForLength",
			"(I)Ljava/nio/charset/CoderResult;",
			arg0
		);
	}
	inline jboolean CoderResult::isError() const
	{
		return callMethod<jboolean>(
			"isError",
			"()Z"
		);
	}
	inline jboolean CoderResult::isMalformed() const
	{
		return callMethod<jboolean>(
			"isMalformed",
			"()Z"
		);
	}
	inline jboolean CoderResult::isOverflow() const
	{
		return callMethod<jboolean>(
			"isOverflow",
			"()Z"
		);
	}
	inline jboolean CoderResult::isUnderflow() const
	{
		return callMethod<jboolean>(
			"isUnderflow",
			"()Z"
		);
	}
	inline jboolean CoderResult::isUnmappable() const
	{
		return callMethod<jboolean>(
			"isUnmappable",
			"()Z"
		);
	}
	inline jint CoderResult::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline void CoderResult::throwException() const
	{
		callMethod<void>(
			"throwException",
			"()V"
		);
	}
	inline JString CoderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers

