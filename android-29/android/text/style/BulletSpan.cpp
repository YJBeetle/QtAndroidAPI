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
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.style.BulletSpan",
			"STANDARD_GAP_WIDTH"
		);
	}
	
	BulletSpan::BulletSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BulletSpan::BulletSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"()V"
		);
	}
	BulletSpan::BulletSpan(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	BulletSpan::BulletSpan(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(I)V",
			arg0
		);
	}
	BulletSpan::BulletSpan(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(II)V",
			arg0,
			arg1
		);
	}
	BulletSpan::BulletSpan(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BulletSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint BulletSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BulletSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11)
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
	jint BulletSpan::getBulletRadius()
	{
		return __thiz.callMethod<jint>(
			"getBulletRadius",
			"()I"
		);
	}
	jint BulletSpan::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint BulletSpan::getGapWidth()
	{
		return __thiz.callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	jint BulletSpan::getLeadingMargin(jboolean arg0)
	{
		return __thiz.callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint BulletSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BulletSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

