#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./BackgroundColorSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline BackgroundColorSpan::BackgroundColorSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.BackgroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline BackgroundColorSpan::BackgroundColorSpan(jint arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.BackgroundColorSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint BackgroundColorSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint BackgroundColorSpan::getBackgroundColor() const
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	inline jint BackgroundColorSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString BackgroundColorSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BackgroundColorSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void BackgroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
