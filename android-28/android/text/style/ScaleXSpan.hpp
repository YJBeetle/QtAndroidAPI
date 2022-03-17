#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./ScaleXSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline ScaleXSpan::ScaleXSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ScaleXSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline ScaleXSpan::ScaleXSpan(jfloat arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.ScaleXSpan",
			"(F)V",
			arg0
		) {}
	
	// Methods
	inline jint ScaleXSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat ScaleXSpan::getScaleX() const
	{
		return callMethod<jfloat>(
			"getScaleX",
			"()F"
		);
	}
	inline jint ScaleXSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void ScaleXSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void ScaleXSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void ScaleXSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

