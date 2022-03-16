#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TextClassifierEvent_TextSelectionEvent_Builder.def.hpp"
#include "./TextClassifierEvent_TextSelectionEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassifierEvent_TextSelectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordEndIndex() const
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordEndIndex",
			"()I"
		);
	}
	inline jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordStartIndex() const
	{
		return callMethod<jint>(
			"getRelativeSuggestedWordStartIndex",
			"()I"
		);
	}
	inline jint TextClassifierEvent_TextSelectionEvent::getRelativeWordEndIndex() const
	{
		return callMethod<jint>(
			"getRelativeWordEndIndex",
			"()I"
		);
	}
	inline jint TextClassifierEvent_TextSelectionEvent::getRelativeWordStartIndex() const
	{
		return callMethod<jint>(
			"getRelativeWordStartIndex",
			"()I"
		);
	}
	inline void TextClassifierEvent_TextSelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent.hpp"

