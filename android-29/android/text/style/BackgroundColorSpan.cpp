#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./BackgroundColorSpan.hpp"

namespace android::text::style
{
	// Fields
	
	BackgroundColorSpan::BackgroundColorSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BackgroundColorSpan::BackgroundColorSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BackgroundColorSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	BackgroundColorSpan::BackgroundColorSpan(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.BackgroundColorSpan",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint BackgroundColorSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BackgroundColorSpan::getBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	jint BackgroundColorSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BackgroundColorSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	void BackgroundColorSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

