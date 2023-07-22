#pragma once

#include "../../graphics/Typeface.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./TypefaceSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TypefaceSpan::TypefaceSpan(android::graphics::Typeface arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		) {}
	inline TypefaceSpan::TypefaceSpan(android::os::Parcel arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline TypefaceSpan::TypefaceSpan(JString arg0)
		: android::text::style::MetricAffectingSpan(
			"android.text.style.TypefaceSpan",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint TypefaceSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TypefaceSpan::getFamily() const
	{
		return callObjectMethod(
			"getFamily",
			"()Ljava/lang/String;"
		);
	}
	inline jint TypefaceSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline android::graphics::Typeface TypefaceSpan::getTypeface() const
	{
		return callObjectMethod(
			"getTypeface",
			"()Landroid/graphics/Typeface;"
		);
	}
	inline void TypefaceSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void TypefaceSpan::updateMeasureState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateMeasureState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	inline void TypefaceSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
