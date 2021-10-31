#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "../Layout.hpp"
#include "./QuoteSpan.hpp"

namespace android::text::style
{
	// Fields
	jint QuoteSpan::STANDARD_COLOR()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_COLOR"
		);
	}
	jint QuoteSpan::STANDARD_GAP_WIDTH_PX()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_GAP_WIDTH_PX"
		);
	}
	jint QuoteSpan::STANDARD_STRIPE_WIDTH_PX()
	{
		return getStaticField<jint>(
			"android.text.style.QuoteSpan",
			"STANDARD_STRIPE_WIDTH_PX"
		);
	}
	
	// QAndroidJniObject forward
	QuoteSpan::QuoteSpan(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	QuoteSpan::QuoteSpan()
		: __JniBaseClass(
			"android.text.style.QuoteSpan",
			"()V"
		) {}
	QuoteSpan::QuoteSpan(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.text.style.QuoteSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	QuoteSpan::QuoteSpan(jint arg0)
		: __JniBaseClass(
			"android.text.style.QuoteSpan",
			"(I)V",
			arg0
		) {}
	QuoteSpan::QuoteSpan(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.text.style.QuoteSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint QuoteSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void QuoteSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.object()
		);
	}
	jint QuoteSpan::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint QuoteSpan::getGapWidth()
	{
		return callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	jint QuoteSpan::getLeadingMargin(jboolean arg0)
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint QuoteSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jint QuoteSpan::getStripeWidth()
	{
		return callMethod<jint>(
			"getStripeWidth",
			"()I"
		);
	}
	void QuoteSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

