#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./StyleSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline StyleSpan::StyleSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.StyleSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline StyleSpan::StyleSpan(jint arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.StyleSpan",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint StyleSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint StyleSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline jint StyleSpan::getStyle() const
	{
		return callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	inline void StyleSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void StyleSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void StyleSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./MetricAffectingSpan.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
