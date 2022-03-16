#pragma once

#include "./TextPaint.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrecomputedText_Params.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PrecomputedText_Params::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrecomputedText_Params::getBreakStrategy() const
	{
		return callMethod<jint>(
			"getBreakStrategy",
			"()I"
		);
	}
	inline jint PrecomputedText_Params::getHyphenationFrequency() const
	{
		return callMethod<jint>(
			"getHyphenationFrequency",
			"()I"
		);
	}
	inline JObject PrecomputedText_Params::getTextDirection() const
	{
		return callObjectMethod(
			"getTextDirection",
			"()Landroid/text/TextDirectionHeuristic;"
		);
	}
	inline android::text::TextPaint PrecomputedText_Params::getTextPaint() const
	{
		return callObjectMethod(
			"getTextPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	inline jint PrecomputedText_Params::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PrecomputedText_Params::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

// Base class headers

