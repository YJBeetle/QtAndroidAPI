#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "../Layout.hpp"
#include "./LeadingMarginSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(I)V",
			arg0
		);
	}
	LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LeadingMarginSpan$Standard",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint LeadingMarginSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void LeadingMarginSpan_Standard::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
	{
		__thiz.callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11.__jniObject().object()
		);
	}
	jint LeadingMarginSpan_Standard::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint LeadingMarginSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LeadingMarginSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

