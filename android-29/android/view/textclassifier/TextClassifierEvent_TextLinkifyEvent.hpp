#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassifierEvent_TextLinkifyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
