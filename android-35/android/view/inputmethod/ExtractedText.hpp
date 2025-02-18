#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ExtractedText.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject ExtractedText::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.ExtractedText",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ExtractedText::FLAG_SELECTING()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SELECTING"
		);
	}
	inline jint ExtractedText::FLAG_SINGLE_LINE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.ExtractedText",
			"FLAG_SINGLE_LINE"
		);
	}
	inline jint ExtractedText::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString ExtractedText::hint()
	{
		return getObjectField(
			"hint",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint ExtractedText::partialEndOffset()
	{
		return getField<jint>(
			"partialEndOffset"
		);
	}
	inline jint ExtractedText::partialStartOffset()
	{
		return getField<jint>(
			"partialStartOffset"
		);
	}
	inline jint ExtractedText::selectionEnd()
	{
		return getField<jint>(
			"selectionEnd"
		);
	}
	inline jint ExtractedText::selectionStart()
	{
		return getField<jint>(
			"selectionStart"
		);
	}
	inline jint ExtractedText::startOffset()
	{
		return getField<jint>(
			"startOffset"
		);
	}
	inline JString ExtractedText::text()
	{
		return getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		);
	}
	
	// Constructors
	inline ExtractedText::ExtractedText()
		: JObject(
			"android.view.inputmethod.ExtractedText",
			"()V"
		) {}
	
	// Methods
	inline jint ExtractedText::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ExtractedText::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
