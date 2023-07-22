#pragma once

#include "../../os/Parcel.def.hpp"
#include "./ExtractedTextRequest.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject ExtractedTextRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.ExtractedTextRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ExtractedTextRequest::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint ExtractedTextRequest::hintMaxChars()
	{
		return getField<jint>(
			"hintMaxChars"
		);
	}
	inline jint ExtractedTextRequest::hintMaxLines()
	{
		return getField<jint>(
			"hintMaxLines"
		);
	}
	inline jint ExtractedTextRequest::token()
	{
		return getField<jint>(
			"token"
		);
	}
	
	// Constructors
	inline ExtractedTextRequest::ExtractedTextRequest()
		: JObject(
			"android.view.inputmethod.ExtractedTextRequest",
			"()V"
		) {}
	
	// Methods
	inline jint ExtractedTextRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ExtractedTextRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
