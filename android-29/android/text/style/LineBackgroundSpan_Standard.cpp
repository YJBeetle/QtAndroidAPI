#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "./LineBackgroundSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	LineBackgroundSpan_Standard::LineBackgroundSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LineBackgroundSpan_Standard::LineBackgroundSpan_Standard(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	LineBackgroundSpan_Standard::LineBackgroundSpan_Standard(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineBackgroundSpan$Standard",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint LineBackgroundSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void LineBackgroundSpan_Standard::drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jint arg10)
	{
		__thiz.callMethod<void>(
			"drawBackground",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V",
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
			arg10
		);
	}
	void LineBackgroundSpan_Standard::drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jint arg10)
	{
		__thiz.callMethod<void>(
			"drawBackground",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			QAndroidJniObject::fromString(arg7).object<jstring>(),
			arg8,
			arg9,
			arg10
		);
	}
	jint LineBackgroundSpan_Standard::getColor()
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint LineBackgroundSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LineBackgroundSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

