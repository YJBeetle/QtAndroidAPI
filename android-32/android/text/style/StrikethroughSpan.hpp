#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./StrikethroughSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline StrikethroughSpan::StrikethroughSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.StrikethroughSpan",
			"()V"
		) {}
	inline StrikethroughSpan::StrikethroughSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.StrikethroughSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint StrikethroughSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint StrikethroughSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void StrikethroughSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void StrikethroughSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
