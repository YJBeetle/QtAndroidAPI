#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./RelativeSizeSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline RelativeSizeSpan::RelativeSizeSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.RelativeSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline RelativeSizeSpan::RelativeSizeSpan(jfloat arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.RelativeSizeSpan",
			"(F)V",
			arg0
		) {}
	
	// Methods
	inline jint RelativeSizeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat RelativeSizeSpan::getSizeChange() const
	{
		return callMethod<jfloat>(
			"getSizeChange",
			"()F"
		);
	}
	inline jint RelativeSizeSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void RelativeSizeSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void RelativeSizeSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void RelativeSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
