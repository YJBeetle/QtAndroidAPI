#pragma once

#include "../../JIntArray.hpp"
#include "../graphics/Paint.def.hpp"
#include "./Highlights.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Paint Highlights::getPaint(jint arg0) const
	{
		return callObjectMethod(
			"getPaint",
			"(I)Landroid/graphics/Paint;",
			arg0
		);
	}
	inline JIntArray Highlights::getRanges(jint arg0) const
	{
		return callObjectMethod(
			"getRanges",
			"(I)[I",
			arg0
		);
	}
	inline jint Highlights::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
