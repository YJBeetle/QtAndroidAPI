#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./UnderlineSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline UnderlineSpan::UnderlineSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"()V"
		) {}
	inline UnderlineSpan::UnderlineSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint UnderlineSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint UnderlineSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void UnderlineSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void UnderlineSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"

