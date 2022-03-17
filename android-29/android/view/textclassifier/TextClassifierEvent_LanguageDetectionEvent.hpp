#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent.hpp"

