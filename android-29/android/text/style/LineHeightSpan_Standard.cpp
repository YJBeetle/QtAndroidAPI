#include "../../graphics/Paint_FontMetricsInt.hpp"
#include "../../os/Parcel.hpp"
#include "./LineHeightSpan_Standard.hpp"

namespace android::text::style
{
	// Fields
	
	LineHeightSpan_Standard::LineHeightSpan_Standard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LineHeightSpan_Standard::LineHeightSpan_Standard(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineHeightSpan$Standard",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	LineHeightSpan_Standard::LineHeightSpan_Standard(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.LineHeightSpan$Standard",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void LineHeightSpan_Standard::chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5)
	{
		__thiz.callMethod<void>(
			"chooseHeight",
			"(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jint LineHeightSpan_Standard::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint LineHeightSpan_Standard::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint LineHeightSpan_Standard::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void LineHeightSpan_Standard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

