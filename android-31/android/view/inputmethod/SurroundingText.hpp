#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SurroundingText.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject SurroundingText::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.SurroundingText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SurroundingText::SurroundingText(JString arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.inputmethod.SurroundingText",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint SurroundingText::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SurroundingText::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jint SurroundingText::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	inline jint SurroundingText::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	inline JString SurroundingText::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void SurroundingText::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

