#pragma once

#include "../../../JString.hpp"
#include "./BidiRun.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jbyte BidiRun::getDirection() const
	{
		return callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	inline jbyte BidiRun::getEmbeddingLevel() const
	{
		return callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B"
		);
	}
	inline jint BidiRun::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint BidiRun::getLimit() const
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	inline jint BidiRun::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline jboolean BidiRun::isEvenRun() const
	{
		return callMethod<jboolean>(
			"isEvenRun",
			"()Z"
		);
	}
	inline jboolean BidiRun::isOddRun() const
	{
		return callMethod<jboolean>(
			"isOddRun",
			"()Z"
		);
	}
	inline JString BidiRun::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

