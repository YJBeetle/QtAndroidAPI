#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./SuperscriptSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline SuperscriptSpan::SuperscriptSpan()
		: android::text::style::MetricAffectingSpan(
			"android.text.style.SuperscriptSpan",
			"()V"
		) {}
	inline SuperscriptSpan::SuperscriptSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.SuperscriptSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint SuperscriptSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SuperscriptSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString SuperscriptSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SuperscriptSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void SuperscriptSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void SuperscriptSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
