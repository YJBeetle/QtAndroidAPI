#pragma once

#include "../../JFloatArray.hpp"
#include "./PathIterator_Segment.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jfloat PathIterator_Segment::getConicWeight() const
	{
		return callMethod<jfloat>(
			"getConicWeight",
			"()F"
		);
	}
	inline JFloatArray PathIterator_Segment::getPoints() const
	{
		return callObjectMethod(
			"getPoints",
			"()[F"
		);
	}
	inline jint PathIterator_Segment::getVerb() const
	{
		return callMethod<jint>(
			"getVerb",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
