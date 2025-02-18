#pragma once

#include "../../graphics/Canvas.def.hpp"
#include "../../graphics/Paint.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../Layout.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./QuoteSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline jint QuoteSpan::STANDARD_COLOR()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_COLOR"
		);
	}
	inline jint QuoteSpan::STANDARD_GAP_WIDTH_PX()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_GAP_WIDTH_PX"
		);
	}
	inline jint QuoteSpan::STANDARD_STRIPE_WIDTH_PX()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_STRIPE_WIDTH_PX"
		);
	}
	
	// Constructors
	inline QuoteSpan::QuoteSpan()
		: JObject(
			"android.text.style.QuoteSpan",
			"()V"
		) {}
	inline QuoteSpan::QuoteSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.QuoteSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline QuoteSpan::QuoteSpan(jint arg0)
		: JObject(
			"android.text.style.QuoteSpan",
			"(I)V",
			arg0
		) {}
	inline QuoteSpan::QuoteSpan(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.text.style.QuoteSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint QuoteSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void QuoteSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
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
	inline jint QuoteSpan::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	inline jint QuoteSpan::getGapWidth() const
	{
		return callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	inline jint QuoteSpan::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	inline jint QuoteSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline jint QuoteSpan::getStripeWidth() const
	{
		return callMethod<jint>(
			"getStripeWidth",
			"()I"
		);
	}
	inline JString QuoteSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void QuoteSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
