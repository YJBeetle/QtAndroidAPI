#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../Layout.def.hpp"
#include "../../../JString.hpp"
#include "./LeadingMarginSpan_Standard.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(android::os::Parcel arg0)
		: JObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(I)V",
			arg0
		) {}
	inline LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(jint arg0, jint arg1)
		: JObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint LeadingMarginSpan_Standard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void LeadingMarginSpan_Standard::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
	{
		callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object<jstring>(),
			arg8,
			arg9,
			arg10,
			arg11.object()
		);
	}
	inline jint LeadingMarginSpan_Standard::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	inline jint LeadingMarginSpan_Standard::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline void LeadingMarginSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
