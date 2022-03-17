#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./ForegroundColorSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline ForegroundColorSpan::ForegroundColorSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.ForegroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline ForegroundColorSpan::ForegroundColorSpan(jint arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.ForegroundColorSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint ForegroundColorSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ForegroundColorSpan::getForegroundColor() const
	{
		return callMethod<jint>(
			"getForegroundColor",
			"()I"
		);
	}
	inline jint ForegroundColorSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void ForegroundColorSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void ForegroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
