#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "../Layout.hpp"
#include "./BulletSpan.hpp"

namespace android::text::style
{
	// Fields
	jint BulletSpan::STANDARD_GAP_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.style.BulletSpan",
			"STANDARD_GAP_WIDTH"
		);
	}
	
	// QAndroidJniObject forward
	BulletSpan::BulletSpan(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BulletSpan::BulletSpan()
		: __JniBaseClass(
			"android.text.style.BulletSpan",
			"()V"
		) {}
	BulletSpan::BulletSpan(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.text.style.BulletSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	BulletSpan::BulletSpan(jint arg0)
		: __JniBaseClass(
			"android.text.style.BulletSpan",
			"(I)V",
			arg0
		) {}
	BulletSpan::BulletSpan(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.text.style.BulletSpan",
			"(II)V",
			arg0,
			arg1
		) {}
	BulletSpan::BulletSpan(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.text.style.BulletSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint BulletSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BulletSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
	jint BulletSpan::getBulletRadius()
	{
		return callMethod<jint>(
			"getBulletRadius",
			"()I"
		);
	}
	jint BulletSpan::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint BulletSpan::getGapWidth()
	{
		return callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	jint BulletSpan::getLeadingMargin(jboolean arg0)
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint BulletSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BulletSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

