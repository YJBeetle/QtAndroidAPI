#pragma once

#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "./AbsoluteSizeSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline AbsoluteSizeSpan::AbsoluteSizeSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(I)V",
			arg0
		) {}
	inline AbsoluteSizeSpan::AbsoluteSizeSpan(jint arg0, jboolean arg1)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.AbsoluteSizeSpan",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint AbsoluteSizeSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AbsoluteSizeSpan::getDip() const
	{
		return callMethod<jboolean>(
			"getDip",
			"()Z"
		);
	}
	inline jint AbsoluteSizeSpan::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
	inline jint AbsoluteSizeSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void AbsoluteSizeSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void AbsoluteSizeSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void AbsoluteSizeSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
