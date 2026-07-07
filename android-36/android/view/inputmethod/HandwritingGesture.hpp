#pragma once

#include "../../../JString.hpp"
#include "./HandwritingGesture.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline jint HandwritingGesture::GRANULARITY_CHARACTER()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.HandwritingGesture",
			"GRANULARITY_CHARACTER"
		);
	}
	inline jint HandwritingGesture::GRANULARITY_WORD()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.HandwritingGesture",
			"GRANULARITY_WORD"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString HandwritingGesture::getFallbackText() const
	{
		return callObjectMethod(
			"getFallbackText",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
