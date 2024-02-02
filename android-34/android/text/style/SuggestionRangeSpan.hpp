#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./SuggestionRangeSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JObject SuggestionRangeSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.text.style.SuggestionRangeSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SuggestionRangeSpan::SuggestionRangeSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.SuggestionRangeSpan",
			"()V"
		) {}
	
	// Methods
	inline jint SuggestionRangeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SuggestionRangeSpan::getBackgroundColor() const
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	inline jint SuggestionRangeSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void SuggestionRangeSpan::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void SuggestionRangeSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void SuggestionRangeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
